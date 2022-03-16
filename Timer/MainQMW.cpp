#include "MainQMW.h"
#include "ui_MainQMW.h"
#include <QDebug>

MainQMW::MainQMW(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainQMW) {

    ui->setupUi(this); // Интерфейс пользователя

    currentSeconds = 25 * 60;     // Текущее время
    currentSecondsCopy = 25 * 60; // Копия текущего времени

    pauseFlag = false; // Флаг нажатия на кнопку пауза
    stopFlag = false;  // Флаг нажатия на кнопку стоп

    // Инициализация таймера
    timer = new QTimer(this);
    timer->setInterval(1000);

    SetSignals(); // Установка соответствия между сигналами и слотами

    GetSettingsFromFile(); // Установка настроек конфигурационного файла

    ui->LcdTimer->display(SecondsToString(currentSeconds)); // Установка заголовка для таймера

    ui->LogTextEdit->setText("[Debug(), Timer]\n\n"); // Заголовок для лога
    ui->LogTextEdit->setReadOnly(true);               // Установка режима "Только для чтения"
}

MainQMW::~MainQMW() {

    delete ui; // Интерфейс пользователя
}

// Обработчик события: PlayButton, нажатие
void MainQMW::OnStartButtonClicked() {

    ui->StartButton->setDisabled(true); // Блокировка кнопки старта

    // Установка флагов для кнопок
    stopFlag = false;
    pauseFlag = false;

    RunTimer(); // Запуск таймера

    Debug("[Время пошло]"); // Сохранение отладочного сообщения в лог
}

// Обработчий события: PauseButton, нажатие
void MainQMW::OnPauseButtonClicked() {

    ui->StartButton->setDisabled(false); // Снятие блокировки с кнопки запуска
    pauseFlag = true;                    // Установка флага для кнопки пауза
}

// Обработчик события: StopButton, нажатие
void MainQMW::OnStopButtonClicked() {

    ui->StartButton->setDisabled(false);                        // Снятие блокировки с кнопки запуска
    ui->LcdTimer->display(SecondsToString(currentSecondsCopy)); // Сохранение таймера

    currentSeconds = currentSecondsCopy; // Сохранение времени
    stopFlag = true;                     // Установка флага для кнопки стоп
}

// Обработчик события: SettingsButton, нажатие
void MainQMW::OnSettingsButtonClicked() {

    // Файл настроек
    QFile settingsFile;
    settingsFile.setFileName("Settings.txt");
    settingsFile.open(QFile::ReadWrite);

    lowDigit = ui->LowDigitLineEdit->text().toInt();
    highDigit = ui->HighDigitLineEdit->text().toInt();

    // Запись настроек
    settingsFile.resize(0);
    QString text = motivatePhrasesFilename + "\n" + QString::number(lowDigit) + "\n" + QString::number(highDigit);
    settingsFile.write(text.toUtf8());

    settingsFile.close();

    GetSettingsFromFile(); // Установка настроек конфигурационного файла

    Debug("[Файл настроек изменён]");
}

// Обработчик события: Set25MinutesButton, нажатие
void MainQMW::OnSet25MinutesButtonClicked() {

    stopFlag = true;                     // Установка флага для кнопки стоп
    ui->StartButton->setDisabled(false); // Снятие блокировки с кнопки запуск

    // Сохранение времени в секундах
    currentSeconds = 25 * 60;
    currentSecondsCopy = currentSeconds;

    ui->LcdTimer->display(SecondsToString(currentSeconds)); // Обновление заголовка таймера
}

// Обработчик события: Set15MinutesButton, нажатие
void MainQMW::OnSet15MinutesButtonClicked() {

    stopFlag = true;                     // Установка флага для кнопки стоп
    ui->StartButton->setDisabled(false); // Снятие блокировки с кнопки запуск

    // Сохранение времени в секундах
    currentSeconds = 15 * 60;
    currentSecondsCopy = currentSeconds;

    ui->LcdTimer->display(SecondsToString(currentSeconds)); // Обновление заголовка таймера
}

// Обработчик события: Set5MinutesButton, нажатие
void MainQMW::OnSet5MinutesButtonClicked() {

    stopFlag = true;                     // Установка флага для кнопки стоп
    ui->StartButton->setDisabled(false); // Снятие блокировки с кнопки запуск

    // Сохранение времени в секундах
    currentSeconds = 5 * 60;
    currentSecondsCopy = currentSeconds;

    ui->LcdTimer->display(SecondsToString(currentSeconds)); // Обновление заголовка таймера
}

// Установка настроек конфигурационного файла
void MainQMW::GetSettingsFromFile() {

    // Файл настроек
    QFile settingsFile;
    settingsFile.setFileName("Settings.txt");
    settingsFile.open(QFile::ReadWrite);

    // Содержимое файла настроек
    QList<QString> fileText = {};
    fileText = QString(settingsFile.readAll()).split('\n');

    // Настройки
    motivatePhrasesFilename = fileText.at(0);
    lowDigit = fileText.at(1).toInt();
    highDigit = fileText.at(2).toInt();

    // Установка границ для упражнений
    ui->LowDigitLineEdit->setText(QString::number(lowDigit));
    ui->HighDigitLineEdit->setText(QString::number(highDigit));

    ReadPhrasesFile(); // Сохранение фраз из файла

    settingsFile.close();
}

// Сохранение фраз из файла
void MainQMW::ReadPhrasesFile() {

    // Файл настроек
    QFile phrasesFile;
    phrasesFile.setFileName(motivatePhrasesFilename);
    phrasesFile.open(QFile::ReadWrite);

    motivatePhrases = QString(phrasesFile.readAll()).split('\n');

    phrasesFile.close();
}

// Запуск таймера
void MainQMW::RunTimer() {

    timer->start(); // Запуск
}

// Обработчик события: таймер
void MainQMW::UpdateTimer() {

    // Время вышло, остановка таймера
    if (currentSeconds == 0) {

        ui->StartButton->setDisabled(false); // Снятие блокировки с StartButton
        currentSeconds = currentSecondsCopy; // Восстановление таймера
        ui->LcdTimer->display("00:00");      // Обновление заголовка
        timer->stop();                       // Остановка таймера

        // Установка первой фразы для окна
        int digit = QRandomGenerator::global()->bounded(motivatePhrases.size());
        QString str = motivatePhrases.at(digit);
        Debug(str); // Сохранение отладочного сообщения в лог

        // Установка второй фразы для окна
        digit = lowDigit + QRandomGenerator::global()->bounded(highDigit - lowDigit);
        str = QString::number(digit) + " внезапных отжиманий";
        Debug(str); // Сохранение отладочного сообщения в лог

        Debug("[Время вышло]\n"); // Сохранение отладочного сообщения в лог
    }

    // Время не вышло, обновление
    if ((stopFlag == false) && (pauseFlag == false)) {

        ui->LcdTimer->display(SecondsToString(currentSeconds)); // Обновление таймера
        currentSeconds--;                                       // Обновление секунд
    }
}

// Установка соответствия между сигналами и слотами
void MainQMW::SetSignals() {

    // Обработчики событий: нажатие на кнопку установки времени
    connect(ui->Set5MinutesButton, SIGNAL(clicked()), this, SLOT(OnSet5MinutesButtonClicked()));   // Set5MinutesButton
    connect(ui->Set15MinutesButton, SIGNAL(clicked()), this, SLOT(OnSet15MinutesButtonClicked())); // Set15MinutesButton
    connect(ui->Set25MinutesButton, SIGNAL(clicked()), this, SLOT(OnSet25MinutesButtonClicked())); // Set25MinutesButton

    // Обработчик события: нажатие на кнопку изменения настроек
    connect(ui->SettingsButton, SIGNAL(clicked()), this, SLOT(OnSettingsButtonClicked()));

    // Обработчики событий: нажатие на кнопку управления таймером
    connect(ui->StartButton, SIGNAL(clicked()), this, SLOT(OnStartButtonClicked())); // StartButton
    connect(ui->PauseButton, SIGNAL(clicked()), this, SLOT(OnPauseButtonClicked())); // PauseButton
    connect(ui->StopButton, SIGNAL(clicked()), this, SLOT(OnStopButtonClicked()));   // StopButton

    // Обработчик события: таймер
    connect(timer, SIGNAL(timeout()), this, SLOT(UpdateTimer()));
}

// Конвертирование секунд в строку для вывода
QString MainQMW::SecondsToString(const int& sec) {

    const int minutes = sec / 60;           // Минуты
    const int seconds = sec - minutes * 60; // Секунды

    QString str = QString::number(minutes) + ":" + QString::number(seconds); // Строка для вывода

    // Дополнение нулями
    if ((minutes < 10) && (seconds < 10)) {

        str = "0" + QString::number(minutes) + ":0" + QString::number(seconds);
    } else if ((minutes < 10) && (seconds >= 10)) {

        str = "0" + QString::number(minutes) + ":" + QString::number(seconds);
    } else if ((minutes >= 0) && (seconds < 10)) {

        str = QString::number(minutes) + ":0" + QString::number(seconds);
    }

    return str;
}

// Сохранение отладочного сообщения в окно вывода
void MainQMW::Debug(const QString& message) {

    ui->LogTextEdit->setText(ui->LogTextEdit->toPlainText() + message + "\n"); // Сохранение сообения в лог
    ui->LogTextEdit->moveCursor(QTextCursor::End);                             // Прокрутка блока текста с логом вниз
}
