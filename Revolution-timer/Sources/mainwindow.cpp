#include "mainwindow.h"
#include "successwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    // Запускаем таймер
    tmr = new QTimer(this);                                         // Создаем объект класса QTimer и передаем адрес переменной
    tmr->setInterval(1000);                                         // Задаем интервал таймера
    connect(tmr, SIGNAL(timeout()), this, SLOT(UpdateTimeLabel())); // Подключаем сигнал таймера к нашему слоту
}

int currentSeconds = 25 * 60;
int currentSecondsCopy = 25 * 60;

bool pauseFlag = false;
bool stopFlag = false;

// Конвертирование секунд в строку для вывода
QString SecondsToString(int sec) {

    int minutes = sec / 60;
    int seconds = sec - minutes * 60;

    QString str = QString::number(minutes) + ":" + QString::number(seconds);

    if ((minutes < 10) && (seconds < 10)) {

        str = "0" + QString::number(minutes) + ":0" + QString::number(seconds);
    } else if ((minutes < 10) && (seconds >= 10)) {

        str = "0" + QString::number(minutes) + ":" + QString::number(seconds);
    } else if ((minutes >= 0) && (seconds < 10)) {

        str = QString::number(minutes) + ":0" + QString::number(seconds);
    }

    return str;
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_Time25Button_clicked() {

    stopFlag = true;
    ui->StartButton->setDisabled(false);

    currentSeconds = 25 * 60;
    currentSecondsCopy = currentSeconds;

    ui->Time->setText(SecondsToString(currentSeconds));
}

void MainWindow::on_Time15Button_clicked() {

    stopFlag = true;
    ui->StartButton->setDisabled(false);

    currentSeconds = 15 * 60;
    currentSecondsCopy = currentSeconds;

    ui->Time->setText(SecondsToString(currentSeconds));
}

void MainWindow::on_Time5Button_clicked() {

    stopFlag = true;
    ui->StartButton->setDisabled(false);

    currentSeconds = 5 * 60;
    currentSecondsCopy = currentSeconds;

    ui->Time->setText(SecondsToString(currentSeconds));
}

void MainWindow::RunTimer() { tmr->start(); }

void MainWindow::UpdateTimeLabel() {

    if (currentSeconds == 0) {

        ui->StartButton->setDisabled(false);
        currentSeconds = currentSecondsCopy;
        tmr->stop();

        ui->Time->setText(SecondsToString(currentSeconds));

        SuccessWindow window;
        window.setModal(true);
        window.exec();
    }

    if ((stopFlag == false) && (pauseFlag == false)) {

        // Обновление таймера
        ui->Time->setText(SecondsToString(currentSeconds));
        currentSeconds--;
    }
}

void MainWindow::on_StartButton_clicked() {

    ui->StartButton->setDisabled(true);

    stopFlag = false;
    pauseFlag = false;

    RunTimer();
}

void MainWindow::on_PauseButton_clicked() {

    ui->StartButton->setDisabled(false);

    pauseFlag = true;
}

void MainWindow::on_StopButton_clicked() {

    ui->StartButton->setDisabled(false);

    ui->Time->setText(SecondsToString(currentSecondsCopy));

    currentSeconds = currentSecondsCopy;

    stopFlag = true;
}
