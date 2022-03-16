#ifndef TIME25SUCCESSWINDOW_H
#define TIME25SUCCESSWINDOW_H

#include <QDialog>
#include <QMediaPlayer>

namespace Ui {
class Time25SuccessWindow;
}

class Time25SuccessWindow : public QDialog {
    Q_OBJECT

  public:
    explicit Time25SuccessWindow(QWidget* parent = nullptr);
    ~Time25SuccessWindow();

  private slots:
    void on_vamosButton_clicked(); // Выход, нажатие

  private:
    QMediaPlayer* player; // Медиапроигрыватель
    Ui::Time25SuccessWindow* ui;
};

#endif // TIME25SUCCESSWINDOW_H
