#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "time15successwindow.h"
#include "time25successwindow.h"
#include "time5successwindow.h"
#include <QMainWindow>
#include <QMouseEvent>
#include <QTimer>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

  private slots:
    void UpdateTimeLabel();               // Заголовок таймера, обновление
    void mousePressEvent(QMouseEvent* e); // Мышь, нажатие
    void mouseMoveEvent(QMouseEvent* e);  // Мышь, указатель, перемещение

    void on_playButton_clicked();  // Пуск, нажатие
    void on_pauseButton_clicked(); // Пауза, нажатие
    void on_stopButton_clicked();  // Стоп, нажатие

    void on_time25Button_clicked(); // Установить таймер на 25 минут, нажатие
    void on_time15Button_clicked(); // Установить таймер на 15 минут, нажатие
    void on_time5Button_clicked();  // Установить таймер на 5 минут, нажатие

    void on_closeButton_clicked(); // Закрыть, нажатие

  private:
    Time25SuccessWindow* time25SuccessWindow; // 25 минут, форма
    Time15SuccessWindow* time15SuccessWindow; // 15 минут, форма
    Time5SuccessWindow* time5SuccessWindow;   // 5 минут, форма

    QTimer* timer;  // Таймер
    QPoint posPrev; // Указатель мыши, позиция

    Ui::MainWindow* ui;

    void RunTimer(); // Запуск таймера

  public:
};
#endif // MAINWINDOW_H
