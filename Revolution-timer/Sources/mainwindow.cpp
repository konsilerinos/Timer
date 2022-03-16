#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    // Настройка панели управления
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    // Инициализация таймера
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(UpdateTimeLabel()));

    ui->setupUi(this);
}

MainWindow::~MainWindow() {

    delete timer;
    delete ui;
}

// Статусы нажатия на кнопки установки таймера
enum SUCCESS_WINDOW {

    TIME_25,
    TIME_15,
    TIME_5
};

int currentSeconds = 25 * 60;     // Текущее время
int currentSecondsCopy = 25 * 60; // Копия текущего времени

bool pauseFlag = false; // Флаг нажатия на кнопку пауза
bool stopFlag = false;  // Флаг нажатия на кнопку стоп

SUCCESS_WINDOW successWindow; // Статус нажатия на кнопку установки таймера

// Перетаскивание окна
void MainWindow::mousePressEvent(QMouseEvent* e) {

    if (e->button() == Qt::LeftButton) {

        if (e->pos().y() <= 41) {

            this->posPrev = e->globalPos();
        }
    }
}
void MainWindow::mouseMoveEvent(QMouseEvent* e) {

    if (e->pos().y() <= 41) {

        QPoint dt = QPoint(this->posPrev - e->globalPos());

        this->move(this->pos() - dt);
        this->posPrev = e->globalPos();
    }
}

// Конвертирование секунд встроку для вывода
QString SecondsToString(int sec) {

    int minutes = sec / 60;
    int seconds = sec - minutes * 60;

    QString str = QString::number(minutes) + ":" + QString::number(seconds);

    if ((minutes < 10) && (seconds < 10)) {

        str = "0" + QString::number(minutes) + ":0" + QString::number(seconds);
    } else if ((minutes < 10) && (seconds >= 10)) {

        str = "0" + QString::number(minutes) + ":" + QString::number(seconds);
    } else if ((minutes >= 0) && (seconds < 10)) {

        str = QString::number(minutes) + ":0" + QString::number(seconds);
    }

    return str;
}

// Обновление заголовка таймера
void MainWindow::UpdateTimeLabel() {

    // Таймер завершил работу
    if (currentSeconds == 0) {

        if (successWindow == TIME_25) {

            time25SuccessWindow = new Time25SuccessWindow;
            time25SuccessWindow->setModal(true);
            time25SuccessWindow->show();
        } else if (successWindow == TIME_15) {

            time15SuccessWindow = new Time15SuccessWindow;
            time15SuccessWindow->setModal(true);
            time15SuccessWindow->show();
        } else if (successWindow == TIME_5) {

            time5SuccessWindow = new Time5SuccessWindow;
            time5SuccessWindow->setModal(true);
            time5SuccessWindow->show();
        }

        ui->playButton->setDisabled(false);
        currentSeconds = currentSecondsCopy;
        timer->stop();
    }

    // Таймер не завершил работу, обновление
    if ((stopFlag == false) && (pauseFlag == false)) {

        ui->Time->setText(SecondsToString(currentSeconds));
        currentSeconds--;
    }
}

// Пуск, нажатие
void MainWindow::on_playButton_clicked() {

    // Блокирование кнопки запуска
    ui->playButton->setDisabled(true);

    // Установка флагов для кнопок
    stopFlag = false;
    pauseFlag = false;

    // Запуск таймера
    RunTimer();
}

// Запуск таймера
void MainWindow::RunTimer() { timer->start(); }

// Пауза, нажатие
void MainWindow::on_pauseButton_clicked() {

    // Снятие блокировки с кнопки запуска
    ui->playButton->setDisabled(false);

    // Установка флага для кнопки пауза
    pauseFlag = true;
}

// Стоп, нажатие
void MainWindow::on_stopButton_clicked() {

    // Снятие блокировки с кнопки запуска
    ui->playButton->setDisabled(false);

    // Сохранение таймера
    ui->Time->setText(SecondsToString(currentSecondsCopy));

    // Сохранение времени
    currentSeconds = currentSecondsCopy;

    // Установка флага для кнопки стоп
    stopFlag = true;
}

// Установить таймер, 25 минут, нажатие
void MainWindow::on_time25Button_clicked() {

    // Установка флага для окна-уведомления
    successWindow = TIME_25;

    // Установка флага для кнопки стоп
    stopFlag = true;
    // Снятие блокировки с кнопки запуск
    ui->playButton->setDisabled(false);

    // Сохранение времени в секундах
    currentSeconds = 25 * 60;
    currentSecondsCopy = currentSeconds;

    // Обновление заголовка таймера
    ui->Time->setText(SecondsToString(currentSeconds));
}
// Установить таймер, 15 минут, нажатие
void MainWindow::on_time15Button_clicked() {

    // Установка флага для окна-уведомления
    successWindow = TIME_15;

    // Установка флага для кнопки стоп
    stopFlag = true;
    // Снятие блокировки с кнопки запуск
    ui->playButton->setDisabled(false);

    // Сохранение времени в секундах
    currentSeconds = 15 * 60;
    currentSecondsCopy = currentSeconds;

    // Обновление заголовка таймера
    ui->Time->setText(SecondsToString(currentSeconds));
}
// Установить таймер, 5 минут, нажатие
void MainWindow::on_time5Button_clicked() {

    // Установка флага для окна-уведомления
    successWindow = TIME_5;

    // Установка флага для кнопки стоп
    stopFlag = true;
    // Снятие блокировки с кнопки запуск
    ui->playButton->setDisabled(false);

    // Сохранение времени в секундах
    currentSeconds = 5 * 60;
    currentSecondsCopy = currentSeconds;

    // Обновление заголовка таймера
    ui->Time->setText(SecondsToString(currentSeconds));
}

// Закрытие, начало
void MainWindow::on_closeButton_clicked() {

    // Закрытие программы
    QApplication::exit();
}

// Информация, нажатие
void MainWindow::on_CheGevaraLabel_clicked() { infoWindow.show(); }
