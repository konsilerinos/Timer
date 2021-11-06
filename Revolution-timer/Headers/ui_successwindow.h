/********************************************************************************
** Form generated from reading UI file 'successwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESSWINDOW_H
#define UI_SUCCESSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SuccessWindow
{
public:
    QPushButton *ExitSuccessButton;
    QLabel *label1;
    QLabel *label2;

    void setupUi(QDialog *SuccessWindow)
    {
        if (SuccessWindow->objectName().isEmpty())
            SuccessWindow->setObjectName(QString::fromUtf8("SuccessWindow"));
        SuccessWindow->resize(370, 210);
        SuccessWindow->setMinimumSize(QSize(370, 210));
        SuccessWindow->setMaximumSize(QSize(370, 210));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SuccessWindow->setWindowIcon(icon);
        SuccessWindow->setStyleSheet(QString::fromUtf8("QDialog#SuccessWindow {\n"
"\n"
"	background-color: #083D77;\n"
"}"));
        ExitSuccessButton = new QPushButton(SuccessWindow);
        ExitSuccessButton->setObjectName(QString::fromUtf8("ExitSuccessButton"));
        ExitSuccessButton->setGeometry(QRect(20, 140, 331, 51));
        ExitSuccessButton->setStyleSheet(QString::fromUtf8("QPushButton#ExitSuccessButton {\n"
"    \n"
"    font-size: 20pt;\n"
"    color: #FFFFFF;\n"
"    \n"
"    background-color: #083D77;\n"
"    \n"
"    border: 5px solid #FFFFFF;\n"
"    box-sizing: border-box;\n"
" }\n"
" QPushButton#ExitSuccessButton:hover {\n"
"     \n"
"    background-color: #FFFFFF;\n"
"    color: #1B2D53;\n"
"    border: 5px solid #1B2D53;\n"
" }\n"
" QPushButton#ExitSuccessButton:pressed {\n"
"     \n"
"    background-color: #DB1921;\n"
"    color: #FFFFFF;\n"
"    border: 5px solid #000000;\n"
" }\n"
""));
        label1 = new QLabel(SuccessWindow);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(10, 0, 361, 91));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label1->setFont(font);
        label1->setStyleSheet(QString::fromUtf8("QLabel#label1 {\n"
"\n"
"	color: #FFFFFF;\n"
"}"));
        label1->setAlignment(Qt::AlignCenter);
        label2 = new QLabel(SuccessWindow);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(0, 59, 371, 61));
        label2->setFont(font);
        label2->setStyleSheet(QString::fromUtf8("QLabel#label2 {\n"
"\n"
"	color: #FFFFFF;\n"
"}"));
        label2->setAlignment(Qt::AlignCenter);

        retranslateUi(SuccessWindow);

        QMetaObject::connectSlotsByName(SuccessWindow);
    } // setupUi

    void retranslateUi(QDialog *SuccessWindow)
    {
        SuccessWindow->setWindowTitle(QApplication::translate("SuccessWindow", "Success!", nullptr));
        ExitSuccessButton->setText(QApplication::translate("SuccessWindow", "Vamos!", nullptr));
        label1->setText(QApplication::translate("SuccessWindow", "Hasta la victoria, ", nullptr));
        label2->setText(QApplication::translate("SuccessWindow", "siempre!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuccessWindow: public Ui_SuccessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESSWINDOW_H
