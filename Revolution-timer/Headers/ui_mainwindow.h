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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *CheGevaraHL;
    QLabel *CheGevaraL;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *TimeButtons;
    QPushButton *Time25Button;
    QPushButton *Time15Button;
    QPushButton *Time5Button;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *ControlButtons;
    QPushButton *StartButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QLabel *FlagLabel;
    QLabel *Time;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(738, 710);
        MainWindow->setMinimumSize(QSize(738, 710));
        MainWindow->setMaximumSize(QSize(738, 710));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow {\n"
"\n"
"	background-color: #083D77;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(380, 20, 351, 424));
        CheGevaraHL = new QHBoxLayout(horizontalLayoutWidget);
        CheGevaraHL->setObjectName(QString::fromUtf8("CheGevaraHL"));
        CheGevaraHL->setContentsMargins(0, 0, 0, 0);
        CheGevaraL = new QLabel(horizontalLayoutWidget);
        CheGevaraL->setObjectName(QString::fromUtf8("CheGevaraL"));
        CheGevaraL->setStyleSheet(QString::fromUtf8("QLabel#CheGevaraL {\n"
"\n"
"	background-color: #083D77;\n"
"}"));
        CheGevaraL->setPixmap(QPixmap(QString::fromUtf8(":/\320\247\320\265 \320\223\320\265\320\262\320\260\321\200\320\260.jpg")));

        CheGevaraHL->addWidget(CheGevaraL);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 450, 701, 251));
        TimeButtons = new QVBoxLayout(verticalLayoutWidget);
        TimeButtons->setObjectName(QString::fromUtf8("TimeButtons"));
        TimeButtons->setContentsMargins(0, 0, 0, 0);
        Time25Button = new QPushButton(verticalLayoutWidget);
        Time25Button->setObjectName(QString::fromUtf8("Time25Button"));
        Time25Button->setMinimumSize(QSize(0, 65));
        Time25Button->setMaximumSize(QSize(16777215, 65));
        Time25Button->setStyleSheet(QString::fromUtf8("QPushButton#Time25Button {\n"
"    \n"
"    font-size: 25pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#Time25Button:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#Time25Button:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
""));

        TimeButtons->addWidget(Time25Button);

        Time15Button = new QPushButton(verticalLayoutWidget);
        Time15Button->setObjectName(QString::fromUtf8("Time15Button"));
        Time15Button->setMinimumSize(QSize(0, 65));
        Time15Button->setMaximumSize(QSize(16777215, 65));
        Time15Button->setStyleSheet(QString::fromUtf8("QPushButton#Time15Button {\n"
"    \n"
"    font-size: 25pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#Time15Button:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#Time15Button:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
"\n"
""));

        TimeButtons->addWidget(Time15Button);

        Time5Button = new QPushButton(verticalLayoutWidget);
        Time5Button->setObjectName(QString::fromUtf8("Time5Button"));
        Time5Button->setMinimumSize(QSize(0, 65));
        Time5Button->setMaximumSize(QSize(16777215, 65));
        Time5Button->setStyleSheet(QString::fromUtf8("QPushButton#Time5Button {\n"
"    \n"
"    font-size: 25pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#Time5Button:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#Time5Button:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
"\n"
""));

        TimeButtons->addWidget(Time5Button);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 220, 341, 241));
        ControlButtons = new QVBoxLayout(verticalLayoutWidget_3);
        ControlButtons->setObjectName(QString::fromUtf8("ControlButtons"));
        ControlButtons->setContentsMargins(0, 0, 0, 0);
        StartButton = new QPushButton(verticalLayoutWidget_3);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setMinimumSize(QSize(0, 50));
        StartButton->setMaximumSize(QSize(16777215, 50));
        StartButton->setStyleSheet(QString::fromUtf8("QPushButton#StartButton {\n"
"    \n"
"    font-size: 20pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#StartButton:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#StartButton:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
" QPushButton#StartButton:disabled {\n"
"     \n"
"    background-color: #083D77;\n"
"    color: #6B8BAD;\n"
"    border: 5px solid #6B8BAD;\n"
" }"));

        ControlButtons->addWidget(StartButton);

        PauseButton = new QPushButton(verticalLayoutWidget_3);
        PauseButton->setObjectName(QString::fromUtf8("PauseButton"));
        PauseButton->setMinimumSize(QSize(0, 50));
        PauseButton->setMaximumSize(QSize(16777215, 50));
        PauseButton->setStyleSheet(QString::fromUtf8("QPushButton#PauseButton {\n"
"    \n"
"    font-size: 20pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#PauseButton:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#PauseButton:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
""));

        ControlButtons->addWidget(PauseButton);

        StopButton = new QPushButton(verticalLayoutWidget_3);
        StopButton->setObjectName(QString::fromUtf8("StopButton"));
        StopButton->setMinimumSize(QSize(0, 50));
        StopButton->setMaximumSize(QSize(16777215, 50));
        StopButton->setStyleSheet(QString::fromUtf8("QPushButton#StopButton {\n"
"    \n"
"    font-size: 20pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#StopButton:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#StopButton:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
""));

        ControlButtons->addWidget(StopButton);

        FlagLabel = new QLabel(centralwidget);
        FlagLabel->setObjectName(QString::fromUtf8("FlagLabel"));
        FlagLabel->setGeometry(QRect(40, 20, 301, 199));
        FlagLabel->setStyleSheet(QString::fromUtf8(""));
        FlagLabel->setPixmap(QPixmap(QString::fromUtf8(":/\320\234-26-7.jpg")));
        Time = new QLabel(centralwidget);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setGeometry(QRect(50, 20, 281, 191));
        QFont font;
        font.setPointSize(83);
        Time->setFont(font);
        Time->setStyleSheet(QString::fromUtf8("QLabel#Time {\n"
"\n"
"	color: #FFFFFF;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 738, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Revolution timer!", nullptr));
        CheGevaraL->setText(QString());
        Time25Button->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\206\320\270\320\260\320\273\320\270\321\201\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\200\320\265\320\266\320\270\320\274 (25 \320\274\320\270\320\275\321\203\321\202)", nullptr));
        Time15Button->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\262\320\276\320\265\320\275\320\275\321\213\320\271 \320\277\320\265\321\200\320\265\320\262\320\276\321\200\320\276\321\202 (15 \320\274\320\270\320\275\321\203\321\202)", nullptr));
        Time5Button->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\321\200\320\270\321\202\321\214 \320\272\321\203\320\261\320\270\320\275\321\201\320\272\321\203\321\216 \321\201\320\270\320\263\320\260\321\200\321\203 (5 \320\274\320\270\320\275\321\203\321\202)", nullptr));
        StartButton->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\201\320\272 (\321\200\320\260\320\272\320\265\321\202)", nullptr));
        PauseButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\270\321\202\321\214\321\201\321\217 \320\272 \320\240\320\232", nullptr));
        StopButton->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\321\200\320\265\320\273 \320\277\321\200\320\265\320\264\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        FlagLabel->setText(QString());
        Time->setText(QApplication::translate("MainWindow", "25:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
