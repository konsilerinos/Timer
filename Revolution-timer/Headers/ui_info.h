/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QPushButton *vamosButton;
    QTextEdit *textBlock;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(851, 551);
        Info->setMinimumSize(QSize(851, 551));
        Info->setMaximumSize(QSize(851, 551));
        Info->setStyleSheet(QString::fromUtf8("QDialog#Info {\n"
"\n"
"	background-color: #083D77;\n"
"	border: 5px solid #1B2D53;\n"
"}"));
        vamosButton = new QPushButton(Info);
        vamosButton->setObjectName(QString::fromUtf8("vamosButton"));
        vamosButton->setGeometry(QRect(10, 500, 831, 41));
        QFont font;
        font.setPointSize(14);
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
"QPushButton#vamosButton:disabled {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #6B8BAD;\n"
"	border: 5px solid #6B8BAD;\n"
"}\n"
""));
        textBlock = new QTextEdit(Info);
        textBlock->setObjectName(QString::fromUtf8("textBlock"));
        textBlock->setGeometry(QRect(10, 10, 831, 481));
        QFont font1;
        font1.setPointSize(18);
        textBlock->setFont(font1);
        textBlock->setStyleSheet(QString::fromUtf8("QTextEdit#textBlock {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"	border: 0px solid #FFFFFF;\n"
"}"));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "Dialog", nullptr));
        vamosButton->setText(QApplication::translate("Info", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
