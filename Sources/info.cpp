#include "info.h"
#include "ui_info.h"

Info::Info(QWidget* parent) : QDialog(parent), ui(new Ui::Info) {

    // Настройка панели управления
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    ui->setupUi(this);
}

Info::~Info() { delete ui; }

// Закрытие, нажатие
void Info::on_vamosButton_clicked() { QWidget::close(); }
