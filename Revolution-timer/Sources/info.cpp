#include "info.h"
#include "ui_info.h"

Info::Info(QWidget* parent) : QDialog(parent), ui(new Ui::Info) {

    // Настройка панели управления
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    ui->setupUi(this);

    // Лицензия и сведения о разработчике
    QString text = "DB-tool. Инструмент для работы с базой данных"
                   "\n\nЭто программа является свободным программным обеспечением. "
                   "Вы можете распространять и/или модифицировать её согласно условиям  Стандартной Общественной Лицензии GNU"
                   "\n\nЭта программа распространяется в надежде, что она будет полезной, но без всяких гарантий, в том числе "
                   "подразумеваемых гарантий товарного состояния при продаже и годности для определённого применения"
                   "\n\nGitHub: konsilerinos"
                   "\nПочта: n_slesarev@mail.ru"
                   "\nКомпания: DKonsilerinos cmp"
                   "\n\n© Слесарев Николай Сергеевич, 2021";

    ui->textBlock->setText(text);     // Сохранение текста в textBlock
    ui->textBlock->setReadOnly(true); // Блокировка редактирования
}

Info::~Info() { delete ui; }

// Закрытие, нажатие
void Info::on_vamosButton_clicked() { QWidget::close(); }
