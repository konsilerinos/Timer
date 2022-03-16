#ifndef MAINQMW_H
#define MAINQMW_H

#include "QRandomGenerator"
#include <QFile>
#include <QList>
#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainQMW;
}
QT_END_NAMESPACE

class MainQMW : public QMainWindow {
    Q_OBJECT

  public:
    MainQMW(QWidget* parent = nullptr);
    ~MainQMW();

  private slots:

    void UpdateTimer(); // Обработчик события: таймер

    void OnStartButtonClicked(); // Обработчик события: PlayButton, нажатие
    void OnPauseButtonClicked(); // Обработчий события: PauseButton, нажатие
    void OnStopButtonClicked();  // Обработчик события: StopButton, нажатие

    void OnSettingsButtonClicked(); // Обработчик события: SettingsButton, нажатие

    void OnSet25MinutesButtonClicked(); // Обработчик события: Set25MinutesButton, нажатие
    void OnSet15MinutesButtonClicked(); // Обработчик события: Set15MinutesButton, нажатие
    void OnSet5MinutesButtonClicked();  // Обработчик события: Set5MinutesButton, нажатие

  private:
    Ui::MainQMW* ui; // Интерфейс пользователя

    QTimer* timer; // Таймер

    int currentSeconds;     // Текущее время
    int currentSecondsCopy; // Копия текущего времени

    bool pauseFlag; // Флаг нажатия на кнопку пауза
    bool stopFlag;  // Флаг нажатия на кнопку стоп

    QString motivatePhrasesFilename; // Имя файла с фразами
    QList<QString> motivatePhrases;  // Фразы для таймера

    int lowDigit;  // Нижняя граница для упражнений
    int highDigit; // Верхняя граница для упражнений

    void GetSettingsFromFile(); // Установка настроек конфигурационного файла
    void ReadPhrasesFile();     // Сохранение фраз из файла

    void RunTimer();                         // Запуск таймера
    void SetSignals();                       // Установка соответствия между сигналами и слотами
    QString SecondsToString(const int& sec); // Конвертирование секунд в строку для вывода

    void Debug(const QString& message); // Сохранение отладочного сообщения в окно вывода
};
#endif // MAINQMW_H
