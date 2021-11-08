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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QPushButton *vamosButton;
    QLabel *Text1;
    QLabel *Image;
    QLabel *Text2;
    QLabel *Text3;
    QLabel *Text4;
    QLabel *Text5;
    QLabel *Text6;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(951, 361);
        Info->setStyleSheet(QString::fromUtf8("QDialog#Info {\n"
"\n"
"	background-color: #083D77;\n"
"	border: 5px solid #1B2D53;\n"
"}"));
        vamosButton = new QPushButton(Info);
        vamosButton->setObjectName(QString::fromUtf8("vamosButton"));
        vamosButton->setGeometry(QRect(20, 290, 911, 61));
        QFont font;
        font.setPointSize(20);
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
        Text1 = new QLabel(Info);
        Text1->setObjectName(QString::fromUtf8("Text1"));
        Text1->setGeometry(QRect(20, 20, 371, 41));
        QFont font1;
        font1.setPointSize(22);
        Text1->setFont(font1);
        Text1->setStyleSheet(QString::fromUtf8("QLabel#Text1 {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"}"));
        Image = new QLabel(Info);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(400, 20, 531, 261));
        Image->setStyleSheet(QString::fromUtf8("QLabel#Image {\n"
"\n"
"	background-color: #083D77;\n"
"	background-image: url(:/Resources/Images/Flag.png);\n"
"}"));
        Text2 = new QLabel(Info);
        Text2->setObjectName(QString::fromUtf8("Text2"));
        Text2->setGeometry(QRect(20, 60, 371, 41));
        QFont font2;
        font2.setPointSize(18);
        Text2->setFont(font2);
        Text2->setStyleSheet(QString::fromUtf8("QLabel#Text2 {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"}"));
        Text3 = new QLabel(Info);
        Text3->setObjectName(QString::fromUtf8("Text3"));
        Text3->setGeometry(QRect(20, 110, 371, 41));
        Text3->setFont(font1);
        Text3->setStyleSheet(QString::fromUtf8("QLabel#Text3 {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"}"));
        Text4 = new QLabel(Info);
        Text4->setObjectName(QString::fromUtf8("Text4"));
        Text4->setGeometry(QRect(20, 150, 371, 41));
        Text4->setFont(font2);
        Text4->setStyleSheet(QString::fromUtf8("QLabel#Text4 {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"}"));
        Text5 = new QLabel(Info);
        Text5->setObjectName(QString::fromUtf8("Text5"));
        Text5->setGeometry(QRect(20, 200, 371, 41));
        Text5->setFont(font1);
        Text5->setStyleSheet(QString::fromUtf8("QLabel#Text5 {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"}"));
        Text6 = new QLabel(Info);
        Text6->setObjectName(QString::fromUtf8("Text6"));
        Text6->setGeometry(QRect(20, 240, 371, 41));
        Text6->setFont(font2);
        Text6->setStyleSheet(QString::fromUtf8("QLabel#Text6 {\n"
"\n"
"	background-color: #083D77;\n"
"	color: #FFFFFF;\n"
"}"));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "Dialog", nullptr));
        vamosButton->setText(QApplication::translate("Info", "Expresen sus respetos al comandante y contin\303\272en con la revoluci\303\263n!", nullptr));
        Text1->setText(QApplication::translate("Info", "El Comandante", nullptr));
        Image->setText(QString());
        Text2->setText(QApplication::translate("Info", "\320\241\320\273\320\265\321\201\320\260\321\200\320\265\320\262 \320\235\320\270\320\272\320\276\320\273\320\260\320\271 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\270\321\207", nullptr));
        Text3->setText(QApplication::translate("Info", "Alias en GitHub ", nullptr));
        Text4->setText(QApplication::translate("Info", "konsilerinos", nullptr));
        Text5->setText(QApplication::translate("Info", "Buz\303\263n", nullptr));
        Text6->setText(QApplication::translate("Info", "n_slesarev@mail.ru", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
