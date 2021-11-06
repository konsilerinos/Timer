#include "successwindow.h"
#include "ui_successwindow.h"

SuccessWindow::SuccessWindow(QWidget* parent) : QDialog(parent), ui(new Ui::SuccessWindow) { ui->setupUi(this); }

SuccessWindow::~SuccessWindow() { delete ui; }

void SuccessWindow::on_ExitSuccessButton_clicked() { QWidget::close(); }
