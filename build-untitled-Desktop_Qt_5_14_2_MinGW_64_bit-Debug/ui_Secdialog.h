/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *label_time;
    QLabel *label_pics;
    QLabel *label_maroc;
    QLabel *label_Recovred;
    QLabel *label_active;
    QLabel *label_up1;
    QLabel *label_2;
    QLabel *label_patient;
    QLabel *label_recovred;
    QLabel *label_death;
    QLabel *label_skull;
    QLabel *label_flag;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_up2;
    QLabel *label_up3;
    QLabel *label_1;
    QFrame *line;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(769, 626);
        label_time = new QLabel(SecDialog);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(540, 14, 151, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_time->setFont(font);
        label_pics = new QLabel(SecDialog);
        label_pics->setObjectName(QString::fromUtf8("label_pics"));
        label_pics->setGeometry(QRect(440, 10, 311, 621));
        label_pics->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Serif"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_pics->setFont(font1);
        label_pics->setCursor(QCursor(Qt::ClosedHandCursor));
        label_pics->setMouseTracking(false);
        label_maroc = new QLabel(SecDialog);
        label_maroc->setObjectName(QString::fromUtf8("label_maroc"));
        label_maroc->setGeometry(QRect(30, 20, 121, 31));
        label_Recovred = new QLabel(SecDialog);
        label_Recovred->setObjectName(QString::fromUtf8("label_Recovred"));
        label_Recovred->setGeometry(QRect(110, 170, 231, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        label_Recovred->setFont(font2);
        label_Recovred->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 1px 0px 0px #aef29b;\n"
"	\n"
"	background-color:#ADFF2F;\n"
"	border-radius:6px;\n"
"	border:1px solid #71ad77;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	\n"
"	font-weight:bold;\n"
"	padding:6px 24px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;"));
        label_active = new QLabel(SecDialog);
        label_active->setObjectName(QString::fromUtf8("label_active"));
        label_active->setGeometry(QRect(110, 70, 231, 81));
        label_active->setFont(font2);
        label_active->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 1px 0px 0px #f0e405;\n"
"	background:linear-gradient(to bottom, #ffdd75 5%, #f5e08b 100%);\n"
"	background-color:#ffdd75;\n"
"	border-radius:6px;\n"
"	border:1px solid #c7a600;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"\n"
"\n"
"	font-weight:bold;\n"
"	padding:6px 24px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;"));
        label_up1 = new QLabel(SecDialog);
        label_up1->setObjectName(QString::fromUtf8("label_up1"));
        label_up1->setGeometry(QRect(140, 110, 61, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_up1->setFont(font3);
        label_up1->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(SecDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 240, 51, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font4.setPointSize(14);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color:#ffffff;"));
        label_patient = new QLabel(SecDialog);
        label_patient->setObjectName(QString::fromUtf8("label_patient"));
        label_patient->setGeometry(QRect(20, 80, 71, 71));
        label_recovred = new QLabel(SecDialog);
        label_recovred->setObjectName(QString::fromUtf8("label_recovred"));
        label_recovred->setGeometry(QRect(30, 190, 61, 71));
        label_death = new QLabel(SecDialog);
        label_death->setObjectName(QString::fromUtf8("label_death"));
        label_death->setGeometry(QRect(110, 280, 231, 91));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setUnderline(false);
        font5.setWeight(50);
        font5.setStrikeOut(false);
        label_death->setFont(font5);
        label_death->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 39px 0px -24px #fc5624;\n"
"	background-color:#ff5303;\n"
"	border-radius:6px;\n"
"	border:1px solid #c7a600;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	\n"
"	padding:6px 15px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #e6b0ac;"));
        label_skull = new QLabel(SecDialog);
        label_skull->setObjectName(QString::fromUtf8("label_skull"));
        label_skull->setGeometry(QRect(30, 310, 51, 51));
        label_flag = new QLabel(SecDialog);
        label_flag->setObjectName(QString::fromUtf8("label_flag"));
        label_flag->setGeometry(QRect(700, 580, 71, 41));
        label = new QLabel(SecDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 580, 281, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Rod"));
        font6.setPointSize(10);
        label->setFont(font6);
        label_3 = new QLabel(SecDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 320, 51, 41));
        QFont font7;
        font7.setPointSize(14);
        label_3->setFont(font7);
        label_3->setStyleSheet(QString::fromUtf8("color:#ffffff;"));
        label_up2 = new QLabel(SecDialog);
        label_up2->setObjectName(QString::fromUtf8("label_up2"));
        label_up2->setGeometry(QRect(160, 230, 61, 31));
        label_up2->setFont(font3);
        label_up2->setStyleSheet(QString::fromUtf8(""));
        label_up3 = new QLabel(SecDialog);
        label_up3->setObjectName(QString::fromUtf8("label_up3"));
        label_up3->setGeometry(QRect(140, 330, 61, 31));
        label_up3->setFont(font3);
        label_up3->setStyleSheet(QString::fromUtf8(""));
        label_1 = new QLabel(SecDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(120, 100, 51, 41));
        label_1->setFont(font4);
        label_1->setStyleSheet(QString::fromUtf8("color:#ffffff;\n"
""));
        line = new QFrame(SecDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 220, 141, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        label_time->setText(QString());
        label_pics->setText(QString());
        label_maroc->setText(QString());
        label_Recovred->setText(QString());
        label_active->setText(QString());
        label_up1->setText(QString());
        label_2->setText(QString());
        label_patient->setText(QString());
        label_recovred->setText(QString());
        label_death->setText(QString());
        label_skull->setText(QString());
        label_flag->setText(QString());
        label->setText(QCoreApplication::translate("SecDialog", "COVID-19 au Maroc : updated\n"
"   @all right reserved 2020", nullptr));
        label_3->setText(QString());
        label_up2->setText(QString());
        label_up3->setText(QString());
        label_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
