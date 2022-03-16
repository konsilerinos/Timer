#include "time15successwindow.h"
#include "ui_time15successwindow.h"

Time15SuccessWindow::Time15SuccessWindow(QWidget* parent) : QDialog(parent), ui(new Ui::Time15SuccessWindow) {

    // Настройка панели управления
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

    // Инициализация медиапроигрывателя
    player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/Resources/Sounds/Revolt.wav"));
    player->setVolume(50);
    player->play();

    ui->setupUi(this);
}

Time15SuccessWindow::~Time15SuccessWindow() {

    delete player;
    delete ui;
    delete this;
}

// Выход, нажатие
void Time15SuccessWindow::on_vamosButton_clicked() {

    player->stop();
    QWidget::close();
}
