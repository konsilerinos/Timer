#ifndef TIME15SUCCESSWINDOW_H
#define TIME15SUCCESSWINDOW_H

#include <QDialog>
#include <QMediaPlayer>

namespace Ui {
class Time15SuccessWindow;
}

class Time15SuccessWindow : public QDialog {
    Q_OBJECT

  public:
    explicit Time15SuccessWindow(QWidget* parent = nullptr);
    ~Time15SuccessWindow();

  private slots:
    void on_vamosButton_clicked(); // Выход, нажатие

  private:
    QMediaPlayer* player; // Медиапроигрыватель
    Ui::Time15SuccessWindow* ui;
};

#endif // TIME15SUCCESSWINDOW_H
