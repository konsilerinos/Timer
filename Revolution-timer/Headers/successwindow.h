#ifndef SUCCESSWINDOW_H
#define SUCCESSWINDOW_H

#include <QDialog>

namespace Ui {
class SuccessWindow;
}

class SuccessWindow : public QDialog {
    Q_OBJECT

  public:
    explicit SuccessWindow(QWidget* parent = nullptr);
    ~SuccessWindow();

  private slots:
    void on_ExitSuccessButton_clicked();

  private:
    Ui::SuccessWindow* ui;
};

#endif // SUCCESSWINDOW_H
