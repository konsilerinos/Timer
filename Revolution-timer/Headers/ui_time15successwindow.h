/********************************************************************************
** Form generated from reading UI file 'time15successwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME15SUCCESSWINDOW_H
#define UI_TIME15SUCCESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Time15SuccessWindow
{
public:
    QLabel *background;
    QPushButton *vamosButton;
    QLabel *text1;

    void setupUi(QDialog *Time15SuccessWindow)
    {
        if (Time15SuccessWindow->objectName().isEmpty())
            Time15SuccessWindow->setObjectName(QString::fromUtf8("Time15SuccessWindow"));
        Time15SuccessWindow->resize(400, 231);
        background = new QLabel(Time15SuccessWindow);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 401, 231));
        background->setStyleSheet(QString::fromUtf8("QLabel#background {\n"
"\n"
"	background-color: #083D77;\n"
"	border: 5px solid #1B2D53;\n"
"}"));
        vamosButton = new QPushButton(Time15SuccessWindow);
        vamosButton->setObjectName(QString::fromUtf8("vamosButton"));
        vamosButton->setGeometry(QRect(20, 170, 361, 41));
        QFont font;
        font.setPointSize(16);
        vamosButton->setFont(font);
        vamosButton->setStyleSheet(QString::fromUtf8("QPushButton#vamosButton {\n"
"\n"
"        background-color: #083D77;\n"
"        color: #FFFFFF;\n"
"        border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#vamosButton:hover {\n"
"\n"
"        background-color: #FFFFFF;\n"
"        color: #1B2D53;\n"
"        border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#vamosButton:pressed {\n"
"\n"
"        background-color: #DB1921;\n"
"        color: #FFFFFF;\n"
"        border: 5px solid #000000;\n"
"}\n"
"\n"
""));
        text1 = new QLabel(Time15SuccessWindow);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(0, 0, 401, 171));
        QFont font1;
        font1.setPointSize(32);
        text1->setFont(font1);
        text1->setStyleSheet(QString::fromUtf8("QLabel#text1 {\n"
"\n"
"        color: #FFFFFF;\n"
"}"));
        text1->setAlignment(Qt::AlignCenter);

        retranslateUi(Time15SuccessWindow);

        QMetaObject::connectSlotsByName(Time15SuccessWindow);
    } // setupUi

    void retranslateUi(QDialog *Time15SuccessWindow)
    {
        Time15SuccessWindow->setWindowTitle(QApplication::translate("Time15SuccessWindow", "Dialog", nullptr));
        background->setText(QString());
        vamosButton->setText(QApplication::translate("Time15SuccessWindow", "Vamos!", nullptr));
        text1->setText(QApplication::translate("Time15SuccessWindow", "Golpe militar!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Time15SuccessWindow: public Ui_Time15SuccessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME15SUCCESSWINDOW_H
