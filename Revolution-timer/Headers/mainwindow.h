#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>

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

    void UpdateTimeLabel();

    void on_Time25Button_clicked();

    void on_Time15Button_clicked();

    void on_Time5Button_clicked();

    void on_StartButton_clicked();

    void on_PauseButton_clicked();

    void on_StopButton_clicked();

  private:
    QTimer* tmr;

    Ui::MainWindow* ui;
    void RunTimer();
};
#endif // MAINWINDOW_H
