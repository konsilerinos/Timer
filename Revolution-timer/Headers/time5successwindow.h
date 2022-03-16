#ifndef TIME5SUCCESSWINDOW_H
#define TIME5SUCCESSWINDOW_H

#include <QDialog>
#include <QMediaPlayer>

namespace Ui {
class Time5SuccessWindow;
}

class Time5SuccessWindow : public QDialog {
    Q_OBJECT

  public:
    explicit Time5SuccessWindow(QWidget* parent = nullptr);
    ~Time5SuccessWindow();

  private slots:
    void on_vamosButton_clicked(); // Выход, нажатие

  private:
    QMediaPlayer* player; // Медиапроигрыватель
    Ui::Time5SuccessWindow* ui;
};

#endif // TIME5SUCCESSWINDOW_H
