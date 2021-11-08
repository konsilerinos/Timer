/********************************************************************************
** Form generated from reading UI file 'time25successwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME25SUCCESSWINDOW_H
#define UI_TIME25SUCCESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Time25SuccessWindow
{
public:
    QLabel *background;
    QPushButton *vamosButton;
    QLabel *text1;
    QLabel *text2;

    void setupUi(QDialog *Time25SuccessWindow)
    {
        if (Time25SuccessWindow->objectName().isEmpty())
            Time25SuccessWindow->setObjectName(QString::fromUtf8("Time25SuccessWindow"));
        Time25SuccessWindow->resize(400, 231);
        Time25SuccessWindow->setStyleSheet(QString::fromUtf8(""));
        background = new QLabel(Time25SuccessWindow);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 401, 231));
        background->setStyleSheet(QString::fromUtf8("QLabel#background {\n"
"\n"
"	background-color: #083D77;\n"
"	border: 5px solid #1B2D53;\n"
"}"));
        vamosButton = new QPushButton(Time25SuccessWindow);
        vamosButton->setObjectName(QString::fromUtf8("vamosButton"));
        vamosButton->setGeometry(QRect(20, 170, 361, 41));
        QFont font;
        font.setPointSize(16);
        vamosButton->setFont(font);
        vamosButton->setStyleSheet(QString::fromUtf8("QPushButton#vamosButton {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#vamosButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1B2D53;\n"
"	border: 5px solid #1B2D53;\n"
"}\n"
"QPushButton#vamosButton:pressed {\n"
"\n"
"	background-color: #DB1921;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #000000;\n"
"}\n"
""));
        text1 = new QLabel(Time25SuccessWindow);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(0, 0, 401, 121));
        QFont font1;
        font1.setPointSize(32);
        text1->setFont(font1);
        text1->setStyleSheet(QString::fromUtf8("QLabel#text1 {\n"
"\n"
"	color: #FFFFFF;\n"
"}"));
        text1->setAlignment(Qt::AlignCenter);
        text2 = new QLabel(Time25SuccessWindow);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(0, 92, 401, 51));
        text2->setFont(font1);
        text2->setStyleSheet(QString::fromUtf8("QLabel#text2 {\n"
"\n"
"	color: #FFFFFF;\n"
"}"));
        text2->setAlignment(Qt::AlignCenter);

        retranslateUi(Time25SuccessWindow);

        QMetaObject::connectSlotsByName(Time25SuccessWindow);
    } // setupUi

    void retranslateUi(QDialog *Time25SuccessWindow)
    {
        Time25SuccessWindow->setWindowTitle(QApplication::translate("Time25SuccessWindow", "Dialog", nullptr));
        background->setText(QString());
        vamosButton->setText(QApplication::translate("Time25SuccessWindow", "Vamos!", nullptr));
        text1->setText(QApplication::translate("Time25SuccessWindow", "Tiene r\303\251gimen", nullptr));
        text2->setText(QApplication::translate("Time25SuccessWindow", "socialista!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Time25SuccessWindow: public Ui_Time25SuccessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME25SUCCESSWINDOW_H
