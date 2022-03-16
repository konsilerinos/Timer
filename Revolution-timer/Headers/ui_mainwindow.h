/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QWidget *centralwidget;
    QLabel *head2Label;
    QLabel *flagLabel;
    QLabel *head1Label;
    QPushButton *closeButton;
    QPushButton *revelarButton;
    QPushButton *enrollarButton;
    QLabel *Time;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QPushButton *time25Button;
    QPushButton *time15Button;
    QPushButton *time5Button;
    QPushButton *CheGevaraLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(731, 831);
        QFont font;
        font.setPointSize(22);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow {\n"
"\n"
"	background-color: #083D77;\n"
"}"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        head2Label = new QLabel(centralwidget);
        head2Label->setObjectName(QString::fromUtf8("head2Label"));
        head2Label->setGeometry(QRect(0, 40, 731, 51));
        QFont font1;
        font1.setPointSize(24);
        head2Label->setFont(font1);
        head2Label->setStyleSheet(QString::fromUtf8("QLabel#head2Label {\n"
"\n"
"	background-color: #1B2D53;\n"
"	color: #FFFFFF;\n"
"}"));
        head2Label->setAlignment(Qt::AlignCenter);
        flagLabel = new QLabel(centralwidget);
        flagLabel->setObjectName(QString::fromUtf8("flagLabel"));
        flagLabel->setGeometry(QRect(20, 110, 331, 191));
        flagLabel->setStyleSheet(QString::fromUtf8("QLabel#flagLabel {\n"
"\n"
"	background-color: #083D77;\n"
"	background-image: url(:/Resources/Images/M-26-7.jpg);\n"
"}"));
        head1Label = new QLabel(centralwidget);
        head1Label->setObjectName(QString::fromUtf8("head1Label"));
        head1Label->setGeometry(QRect(0, 0, 731, 41));
        head1Label->setStyleSheet(QString::fromUtf8("QLabel#head1Label {\n"
"\n"
"	background-color: #162442;\n"
"}"));
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(690, 0, 41, 41));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton#closeButton {\n"
"	\n"
"	background-image: url(:/Resources/Images/Close-button/Close.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#closeButton:hover {\n"
"	\n"
"	background-image: url(:/Resources/Images/Close-button/Close-hover.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#closeButton:pressed {\n"
"	\n"
"	background-image: url(:/Resources/Images/Close-button/Close-pressed.png);\n"
"	border: none;\n"
"}"));
        revelarButton = new QPushButton(centralwidget);
        revelarButton->setObjectName(QString::fromUtf8("revelarButton"));
        revelarButton->setEnabled(false);
        revelarButton->setGeometry(QRect(650, 0, 41, 41));
        revelarButton->setStyleSheet(QString::fromUtf8("QPushButton#revelarButton {\n"
"	\n"
"	background-image: url(:/Resources/Images/Revelar-button/Revelar-disabled.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#revelarButton:hover {\n"
"	\n"
"	background-image: url(:/Resources/Images/Revelar-button/Revelar-hover.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#revelarButton:pressed {\n"
"	\n"
"	background-image: url(:/Resources/Images/Revelar-button/Revelar-disabled.png);\n"
"	border: none;\n"
"}"));
        enrollarButton = new QPushButton(centralwidget);
        enrollarButton->setObjectName(QString::fromUtf8("enrollarButton"));
        enrollarButton->setEnabled(false);
        enrollarButton->setGeometry(QRect(610, 0, 41, 41));
        enrollarButton->setStyleSheet(QString::fromUtf8("QPushButton#enrollarButton {\n"
"\n"
"	background-image: url(:/Resources/Images/Enrollar-button/Enrollar.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#enrollarButton:hover {\n"
"\n"
"	background-image: url(:/Resources/Images/Enrollar-button/Enrollar-hover.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#enrollarButton:pressed {\n"
"\n"
"	background-image: url(:/Resources/Images/Enrollar-button/Enrollar-pressed.png);\n"
"	border: none;\n"
"}\n"
"QPushButton#enrollarButton:disabled {\n"
"\n"
"	background-image: url(:/Resources/Images/Enrollar-button/Enrollar-disabled.png);\n"
"	border: none;\n"
"}"));
        Time = new QLabel(centralwidget);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setGeometry(QRect(20, 110, 331, 191));
        QFont font2;
        font2.setPointSize(85);
        Time->setFont(font2);
        Time->setStyleSheet(QString::fromUtf8("QLabel#Time {\n"
"\n"
"	color: #FFFFFF;\n"
"}"));
        Time->setAlignment(Qt::AlignCenter);
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(20, 330, 331, 51));
        QFont font3;
        font3.setPointSize(16);
        playButton->setFont(font3);
        playButton->setStyleSheet(QString::fromUtf8("QPushButton#playButton {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#playButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#playButton:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}\n"
"QPushButton#playButton:disabled {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #6B8BAD;\n"
"	border: 5px solid #6B8BAD;\n"
"}\n"
""));
        pauseButton = new QPushButton(centralwidget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(20, 410, 331, 51));
        pauseButton->setFont(font3);
        pauseButton->setStyleSheet(QString::fromUtf8("QPushButton#pauseButton {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#pauseButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#pauseButton:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}"));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(20, 490, 331, 51));
        stopButton->setFont(font3);
        stopButton->setStyleSheet(QString::fromUtf8("QPushButton#stopButton {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#stopButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#stopButton:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}"));
        time25Button = new QPushButton(centralwidget);
        time25Button->setObjectName(QString::fromUtf8("time25Button"));
        time25Button->setGeometry(QRect(20, 570, 691, 61));
        time25Button->setFont(font);
        time25Button->setStyleSheet(QString::fromUtf8("QPushButton#time25Button {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#time25Button:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#time25Button:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}"));
        time15Button = new QPushButton(centralwidget);
        time15Button->setObjectName(QString::fromUtf8("time15Button"));
        time15Button->setGeometry(QRect(20, 660, 691, 61));
        time15Button->setFont(font);
        time15Button->setStyleSheet(QString::fromUtf8("QPushButton#time15Button {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#time15Button:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#time15Button:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}"));
        time5Button = new QPushButton(centralwidget);
        time5Button->setObjectName(QString::fromUtf8("time5Button"));
        time5Button->setGeometry(QRect(20, 750, 691, 61));
        time5Button->setFont(font);
        time5Button->setStyleSheet(QString::fromUtf8("QPushButton#time5Button {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#time5Button:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#time5Button:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}"));
        CheGevaraLabel = new QPushButton(centralwidget);
        CheGevaraLabel->setObjectName(QString::fromUtf8("CheGevaraLabel"));
        CheGevaraLabel->setGeometry(QRect(370, 112, 341, 431));
        CheGevaraLabel->setStyleSheet(QString::fromUtf8("QPushButton#CheGevaraLabel {\n"
"\n"
"	background-image: url(:/Resources/Images/Che-Gevara.jpg);\n"
"	border: none;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260 2", nullptr));
        head2Label->setText(QApplication::translate("MainWindow", "Temporizador de la revoluci\303\263n", nullptr));
        flagLabel->setText(QString());
        head1Label->setText(QString());
        closeButton->setText(QString());
        revelarButton->setText(QString());
        enrollarButton->setText(QString());
        Time->setText(QApplication::translate("MainWindow", "25:00", nullptr));
        playButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 (\321\200\320\260\320\272\320\265\321\202)", nullptr));
        pauseButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\270\321\202\321\214\321\201\321\217 \320\272 \320\240\320\232", nullptr));
        stopButton->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\321\200\320\265\320\273 \320\237\320\240\320\225\320\224\320\220\320\242\320\225\320\233\320\225\320\231", nullptr));
        time25Button->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\206\320\270\320\260\320\273\320\270\321\201\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\200\320\265\320\266\320\270\320\274 (25 \320\274\320\270\320\275\321\203\321\202)", nullptr));
        time15Button->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\262\320\276\320\265\320\275\320\275\321\213\320\271 \320\277\320\265\321\200\320\265\320\262\320\276\321\200\320\276\321\202 (15 \320\274\320\270\320\275\321\203\321\202)", nullptr));
        time5Button->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\321\200\320\270\321\202\321\214 \320\272\321\203\320\261\320\270\320\275\321\201\320\272\321\203\321\216 \321\201\320\270\320\263\320\260\321\200\321\203 (5 \320\274\320\270\320\275\321\203\321\202)", nullptr));
        CheGevaraLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
