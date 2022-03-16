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

    /*!
     * \brief Обработчик события: таймер
     */
    void UpdateTimer(); // Обработчик события: таймер

    /*!
     * \brief Обработчик события: PlayButton, нажатие
     */
    void OnStartButtonClicked(); // Обработчик события: PlayButton, нажатие
    /*!
     * \brief Обработчий события: PauseButton, нажатие
     */
    void OnPauseButtonClicked(); // Обработчий события: PauseButton, нажатие
    /*!
     * \brief Обработчик события: StopButton, нажатие
     */
    void OnStopButtonClicked(); // Обработчик события: StopButton, нажатие

    /*!
     * \brief Обработчик события: SettingsButton, нажатие
     */
    void OnSettingsButtonClicked(); // Обработчик события: SettingsButton, нажатие

    /*!
     * \brief Обработчик события: Set25MinutesButton, нажатие
     */
    void OnSet25MinutesButtonClicked(); // Обработчик события: Set25MinutesButton, нажатие
    /*!
     * \brief Обработчик события: Set15MinutesButton, нажатие
     */
    void OnSet15MinutesButtonClicked(); // Обработчик события: Set15MinutesButton, нажатие
    /*!
     * \brief Обработчик события: Set5MinutesButton, нажатие
     */
    void OnSet5MinutesButtonClicked(); // Обработчик события: Set5MinutesButton, нажатие

  private:
    /*!
     * \brief Интерфейс пользователя
     */
    Ui::MainQMW* ui; // Интерфейс пользователя

    /*!
     * \brief Таймер
     */
    QTimer* timer; // Таймер

    /*!
     * \brief Текущее время
     */
    int currentSeconds; // Текущее время
    /*!
     * \brief Копия текущего времени
     */
    int currentSecondsCopy; // Копия текущего времени

    /*!
     * \brief Флаг нажатия на кнопку пауза
     */
    bool pauseFlag; // Флаг нажатия на кнопку пауза
    /*!
     * \brief Флаг нажатия на кнопку стоп
     */
    bool stopFlag; // Флаг нажатия на кнопку стоп

    /*!
     * \brief Имя файла с фразами
     */
    QString motivatePhrasesFilename; // Имя файла с фразами
    /*!
     * \brief Фразы для таймера
     */
    QList<QString> motivatePhrases; // Фразы для таймера

    /*!
     * \brief Нижняя граница для упражнений
     */
    int lowDigit; // Нижняя граница для упражнений
    /*!
     * \brief Верхняя граница для упражнений
     */
    int highDigit; // Верхняя граница для упражнений

    /*!
     * \brief Установка настроек конфигурационного файла
     */
    void GetSettingsFromFile(); // Установка настроек конфигурационного файла
    /*!
     * \brief Сохранение фраз из файла
     */
    void ReadPhrasesFile(); // Сохранение фраз из файла

    /*!
     * \brief Запуск таймера
     */
    void RunTimer(); // Запуск таймера
    /*!
     * \brief Установка соответствия между сигналами и слотами
     */
    void SetSignals(); // Установка соответствия между сигналами и слотами
    /*!
     * \brief Конвертирование секунд в строку для вывода
     * \param sec - секунды
     * \return
     */
    QString SecondsToString(const int& sec); // Конвертирование секунд в строку для вывода

    /*!
     * \brief Сохранение отладочного сообщения в окно вывода
     * \param message - сообщение
     */
    void Debug(const QString& message); // Сохранение отладочного сообщения в окно вывода
};
#endif // MAINQMW_H
