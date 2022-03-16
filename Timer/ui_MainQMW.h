/********************************************************************************
** Form generated from reading UI file 'MainQMW.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINQMW_H
#define UI_MAINQMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainQMW
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLCDNumber *LcdTimer;
    QGroupBox *groupBox_2;
    QPushButton *Set5MinutesButton;
    QPushButton *Set15MinutesButton;
    QPushButton *Set25MinutesButton;
    QGroupBox *groupBox_3;
    QTextEdit *LogTextEdit;
    QGroupBox *groupBox_4;
    QPushButton *StartButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QGroupBox *groupBox_5;
    QLabel *LowDigitLabel;
    QLineEdit *LowDigitLineEdit;
    QLabel *HighDigitLabel;
    QLineEdit *HighDigitLineEdit;
    QPushButton *SettingsButton;

    void setupUi(QMainWindow *MainQMW)
    {
        if (MainQMW->objectName().isEmpty())
            MainQMW->setObjectName(QString::fromUtf8("MainQMW"));
        MainQMW->resize(871, 361);
        MainQMW->setMinimumSize(QSize(871, 361));
        MainQMW->setMaximumSize(QSize(871, 361));
        centralwidget = new QWidget(MainQMW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 311, 101));
        LcdTimer = new QLCDNumber(groupBox);
        LcdTimer->setObjectName(QString::fromUtf8("LcdTimer"));
        LcdTimer->setGeometry(QRect(10, 20, 291, 71));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 151, 111));
        Set5MinutesButton = new QPushButton(groupBox_2);
        Set5MinutesButton->setObjectName(QString::fromUtf8("Set5MinutesButton"));
        Set5MinutesButton->setGeometry(QRect(10, 80, 131, 21));
        Set15MinutesButton = new QPushButton(groupBox_2);
        Set15MinutesButton->setObjectName(QString::fromUtf8("Set15MinutesButton"));
        Set15MinutesButton->setGeometry(QRect(10, 50, 131, 21));
        Set25MinutesButton = new QPushButton(groupBox_2);
        Set25MinutesButton->setObjectName(QString::fromUtf8("Set25MinutesButton"));
        Set25MinutesButton->setGeometry(QRect(10, 20, 131, 21));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 10, 531, 341));
        LogTextEdit = new QTextEdit(groupBox_3);
        LogTextEdit->setObjectName(QString::fromUtf8("LogTextEdit"));
        LogTextEdit->setGeometry(QRect(10, 20, 511, 311));
        QFont font;
        font.setPointSize(10);
        LogTextEdit->setFont(font);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(170, 120, 151, 111));
        StartButton = new QPushButton(groupBox_4);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(10, 20, 131, 21));
        PauseButton = new QPushButton(groupBox_4);
        PauseButton->setObjectName(QString::fromUtf8("PauseButton"));
        PauseButton->setGeometry(QRect(10, 50, 131, 21));
        StopButton = new QPushButton(groupBox_4);
        StopButton->setObjectName(QString::fromUtf8("StopButton"));
        StopButton->setGeometry(QRect(10, 80, 131, 21));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 240, 311, 111));
        LowDigitLabel = new QLabel(groupBox_5);
        LowDigitLabel->setObjectName(QString::fromUtf8("LowDigitLabel"));
        LowDigitLabel->setGeometry(QRect(10, 20, 91, 16));
        LowDigitLineEdit = new QLineEdit(groupBox_5);
        LowDigitLineEdit->setObjectName(QString::fromUtf8("LowDigitLineEdit"));
        LowDigitLineEdit->setGeometry(QRect(110, 20, 191, 20));
        HighDigitLabel = new QLabel(groupBox_5);
        HighDigitLabel->setObjectName(QString::fromUtf8("HighDigitLabel"));
        HighDigitLabel->setGeometry(QRect(10, 50, 91, 16));
        HighDigitLineEdit = new QLineEdit(groupBox_5);
        HighDigitLineEdit->setObjectName(QString::fromUtf8("HighDigitLineEdit"));
        HighDigitLineEdit->setGeometry(QRect(110, 50, 191, 20));
        SettingsButton = new QPushButton(groupBox_5);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        SettingsButton->setGeometry(QRect(10, 80, 291, 23));
        MainQMW->setCentralWidget(centralwidget);

        retranslateUi(MainQMW);

        QMetaObject::connectSlotsByName(MainQMW);
    } // setupUi

    void retranslateUi(QMainWindow *MainQMW)
    {
        MainQMW->setWindowTitle(QApplication::translate("MainQMW", "\320\242\320\260\320\271\320\274\320\265\321\200", nullptr));
        groupBox->setTitle(QApplication::translate("MainQMW", "\320\255\320\272\321\200\320\260\320\275", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainQMW", "\320\242\320\260\320\271\320\274\320\265\321\200", nullptr));
        Set5MinutesButton->setText(QApplication::translate("MainQMW", "5 \320\274\320\270\320\275\321\203\321\202", nullptr));
        Set15MinutesButton->setText(QApplication::translate("MainQMW", "15 \320\274\320\270\320\275\321\203\321\202", nullptr));
        Set25MinutesButton->setText(QApplication::translate("MainQMW", "25 \320\274\320\270\320\275\321\203\321\202", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainQMW", "\320\222\321\213\320\262\320\276\320\264", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainQMW", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\271\320\274\320\265\321\200\320\276\320\274", nullptr));
        StartButton->setText(QApplication::translate("MainQMW", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        PauseButton->setText(QApplication::translate("MainQMW", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        StopButton->setText(QApplication::translate("MainQMW", "\320\241\321\202\320\276\320\277", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainQMW", "\320\232\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\320\276\320\275\320\275\321\213\320\271 \321\204\320\260\320\271\320\273: Settings.txt", nullptr));
        LowDigitLabel->setText(QApplication::translate("MainQMW", "\320\235\320\270\320\266\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        HighDigitLabel->setText(QApplication::translate("MainQMW", "\320\222\320\265\321\200\321\205\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        SettingsButton->setText(QApplication::translate("MainQMW", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainQMW: public Ui_MainQMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINQMW_H
