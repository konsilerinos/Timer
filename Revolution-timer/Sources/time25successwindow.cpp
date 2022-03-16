#include "time25successwindow.h"
#include "mainwindow.h"
#include "ui_time25successwindow.h"
#include <QWidget>

Time25SuccessWindow::Time25SuccessWindow(QWidget* parent) : QDialog(parent), ui(new Ui::Time25SuccessWindow) {

    // Настройка панели управления
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

    // Инициализация медиапроигрывателя
    player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/Resources/Sounds/Revolt.wav"));
    player->setVolume(50);
    player->play();

    ui->setupUi(this);
}

Time25SuccessWindow::~Time25SuccessWindow() {

    delete player;
    delete ui;
    delete this;
}

// Выход, нажатие
void Time25SuccessWindow::on_vamosButton_clicked() {

    player->stop();
    QWidget::close();
}
