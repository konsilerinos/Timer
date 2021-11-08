#include "time5successwindow.h"
#include "ui_time5successwindow.h"

Time5SuccessWindow::Time5SuccessWindow(QWidget* parent) : QDialog(parent), ui(new Ui::Time5SuccessWindow) {

    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

    // Инициализация медиапроигрывателя
    player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/Resources/Sounds/Revolt.wav"));
    player->setVolume(50);
    player->play();

    ui->setupUi(this);
}

Time5SuccessWindow::~Time5SuccessWindow() {

    delete player;
    delete ui;
    delete this;
}

// Выход, нажатие
void Time5SuccessWindow::on_vamosButton_clicked() {

    player->stop();
    QWidget::close();
}
