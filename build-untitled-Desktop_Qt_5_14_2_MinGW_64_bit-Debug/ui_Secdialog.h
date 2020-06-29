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
#include <QtWidgets/QPushButton>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *label_time;
    QLabel *label_pics;
    QLabel *label_maroc;
    QLabel *label_Recovred;
    QLabel *label_active;
    QLabel *label_2;
    QLabel *label_patient;
    QLabel *label_recovred;
    QLabel *label_death;
    QLabel *label_skull;
    QLabel *label_3;
    QLabel *label_up2;
    QLabel *label_1;
    QFrame *line;
    QLabel *label_4;
    QFrame *line_4;
    QLabel *label_8;
    QLabel *label_skull_2;
    QLabel *label_actuel;
    QLabel *label_skull_3;
    QCustomPlot *customPlot;
    QLabel *label_flag;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_world_png;
    QPushButton *pushButton_world;
    QLabel *label_user_img;
    QLabel *label_username;
    QLabel *label_vi;
    QPushButton *pushButton_cmp;
    QLabel *label_7;
    QFrame *line_2;
    QLabel *label_9;
    QFrame *line_3;
    QLabel *label_date;
    QLabel *label_eye;
    QLabel *label_consultation;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(890, 695);
        label_time = new QLabel(SecDialog);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(610, 24, 101, 21));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        label_time->setFont(font);
        label_pics = new QLabel(SecDialog);
        label_pics->setObjectName(QString::fromUtf8("label_pics"));
        label_pics->setGeometry(QRect(520, 10, 351, 651));
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
        label_maroc->setGeometry(QRect(760, 0, 121, 31));
        label_Recovred = new QLabel(SecDialog);
        label_Recovred->setObjectName(QString::fromUtf8("label_Recovred"));
        label_Recovred->setGeometry(QRect(331, 91, 171, 71));
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
        label_active->setGeometry(QRect(151, 91, 171, 71));
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
        label_2 = new QLabel(SecDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(331, 171, 81, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Sans Serif"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 1px 0px 0px #aef29b;\n"
"	\n"
"	background-color:#ADFF2F;\n"
"	border-radius:6px;\n"
"	border:1px solid #71ad77;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	padding:6px 24px;\n"
"	text-shadow:1px 1px 1px #919191;\n"
"   -webkit-text-stroke-color:;\n"
"    -webkit-text-stroke-width:\n"
""));
        label_patient = new QLabel(SecDialog);
        label_patient->setObjectName(QString::fromUtf8("label_patient"));
        label_patient->setGeometry(QRect(281, 131, 31, 31));
        label_recovred = new QLabel(SecDialog);
        label_recovred->setObjectName(QString::fromUtf8("label_recovred"));
        label_recovred->setGeometry(QRect(341, 131, 31, 31));
        label_death = new QLabel(SecDialog);
        label_death->setObjectName(QString::fromUtf8("label_death"));
        label_death->setGeometry(QRect(151, 251, 181, 71));
        label_death->setFont(font2);
        label_death->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 39px 0px -24px #fc5624;\n"
"	background-color:#ff5303;\n"
"	border-radius:6px;\n"
"	border:1px solid #c7a600;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-weight:bold;\n"
"	padding:6px 15px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #e6b0ac;"));
        label_skull = new QLabel(SecDialog);
        label_skull->setObjectName(QString::fromUtf8("label_skull"));
        label_skull->setGeometry(QRect(281, 271, 41, 41));
        label_3 = new QLabel(SecDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(241, 331, 91, 41));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 39px 0px -24px #fc5624;\n"
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
        label_up2 = new QLabel(SecDialog);
        label_up2->setObjectName(QString::fromUtf8("label_up2"));
        label_up2->setGeometry(QRect(281, 251, 61, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_up2->setFont(font4);
        label_up2->setStyleSheet(QString::fromUtf8(""));
        label_1 = new QLabel(SecDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(231, 171, 91, 41));
        label_1->setFont(font3);
        label_1->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 1px 0px 0px #f0e405;\n"
"	background:linear-gradient(to bottom, #ffdd75 5%, #f5e08b 100%);\n"
"	background-color:#ffdd75;\n"
"	border-radius:6px;\n"
"	border:1px solid #c7a600;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-weight:bold;\n"
"	padding:6px 24px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;"));
        line = new QFrame(SecDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(121, 201, 391, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(SecDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(111, 181, 81, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("	box-shadow:inset 0px 0px 3px 0px #91b8b3;\n"
"	background:linear-gradient(to bottom, #768d87 5%, #6c7c7c 100%);\n"
"	background-color:#768d87;\n"
"	border-radius:11px;\n"
"	border:1px solid #566963;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:14px;\n"
"	font-weight:bold;\n"
"	padding:9px 15px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 0px 0px #2b665e;"));
        line_4 = new QFrame(SecDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(150, 360, 361, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(SecDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(111, 341, 81, 31));
        label_8->setFont(font5);
        label_8->setStyleSheet(QString::fromUtf8("	box-shadow:inset 0px 0px 3px 0px #91b8b3;\n"
"	background:linear-gradient(to bottom, #768d87 5%, #6c7c7c 100%);\n"
"	background-color:#768d87;\n"
"	border-radius:11px;\n"
"	border:1px solid #566963;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:14px;\n"
"	font-weight:bold;\n"
"	padding:9px 15px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 0px 0px #2b665e;"));
        label_skull_2 = new QLabel(SecDialog);
        label_skull_2->setObjectName(QString::fromUtf8("label_skull_2"));
        label_skull_2->setGeometry(QRect(500, 590, 41, 41));
        label_actuel = new QLabel(SecDialog);
        label_actuel->setObjectName(QString::fromUtf8("label_actuel"));
        label_actuel->setGeometry(QRect(341, 251, 161, 71));
        label_actuel->setFont(font2);
        label_actuel->setStyleSheet(QString::fromUtf8("box-shadow: 0px 1px 0px 0px #f0f7fa;\n"
"	background:linear-gradient(to bottom, #33bdef 5%, #019ad2 100%);\n"
"	background-color:#33bdef;\n"
"	border-radius:6px;\n"
"	border:1px solid #057fd0;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	\n"
"	font-weight:bold;\n"
"	padding:6px 24px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px -1px 0px #5b6178;"));
        label_skull_3 = new QLabel(SecDialog);
        label_skull_3->setObjectName(QString::fromUtf8("label_skull_3"));
        label_skull_3->setGeometry(QRect(280, 490, 41, 41));
        customPlot = new QCustomPlot(SecDialog);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(100, 390, 401, 301));
        label_flag = new QLabel(SecDialog);
        label_flag->setObjectName(QString::fromUtf8("label_flag"));
        label_flag->setGeometry(QRect(820, 630, 71, 41));
        label = new QLabel(SecDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 640, 281, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Rod"));
        font6.setPointSize(10);
        label->setFont(font6);
        label_5 = new QLabel(SecDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 121, 701));
        label_5->setStyleSheet(QString::fromUtf8("box-shadow:inset 0px 1px 3px 0px #91b8b3;\n"
"	background:linear-gradient(to bottom, #273d32 5%, #6c7c7c 100%);\n"
"	background-color:#273d32;\n"
"	border:1px solid #566963;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:15px;\n"
"	font-weight:bold;\n"
"	padding:11px 23px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px -1px 0px #2b665e;"));
        label_world_png = new QLabel(SecDialog);
        label_world_png->setObjectName(QString::fromUtf8("label_world_png"));
        label_world_png->setGeometry(QRect(10, 230, 101, 81));
        pushButton_world = new QPushButton(SecDialog);
        pushButton_world->setObjectName(QString::fromUtf8("pushButton_world"));
        pushButton_world->setGeometry(QRect(10, 240, 101, 101));
        pushButton_world->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_world->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	border:0px solid #566963;\n"
"	display:inline-block;\n"
"	color:#ffffff;\n"
"\n"
"	padding:11px 23px;\n"
"	"));
        label_user_img = new QLabel(SecDialog);
        label_user_img->setObjectName(QString::fromUtf8("label_user_img"));
        label_user_img->setGeometry(QRect(20, 10, 71, 81));
        label_user_img->setStyleSheet(QString::fromUtf8("\n"
"border-raduis:60px;"));
        label_username = new QLabel(SecDialog);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(130, 10, 161, 31));
        QFont font7;
        font7.setPointSize(12);
        label_username->setFont(font7);
        label_vi = new QLabel(SecDialog);
        label_vi->setObjectName(QString::fromUtf8("label_vi"));
        label_vi->setGeometry(QRect(20, 410, 91, 71));
        pushButton_cmp = new QPushButton(SecDialog);
        pushButton_cmp->setObjectName(QString::fromUtf8("pushButton_cmp"));
        pushButton_cmp->setGeometry(QRect(10, 420, 91, 131));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        pushButton_cmp->setFont(font8);
        pushButton_cmp->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cmp->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	border:0px solid #566963;\n"
"	display:inline-block;\n"
"	color:#ffffff;\n"
"\n"
"	padding:11px 23px;\n"
"	"));
        label_7 = new QLabel(SecDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 290, 111, 51));
        QFont font9;
        font9.setPointSize(9);
        font9.setBold(true);
        font9.setWeight(75);
        label_7->setFont(font9);
        label_7->setStyleSheet(QString::fromUtf8("color:#ffffff;"));
        line_2 = new QFrame(SecDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 340, 101, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(SecDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 480, 121, 41));
        label_9->setFont(font9);
        label_9->setStyleSheet(QString::fromUtf8("color:#ffffff;\n"
""));
        line_3 = new QFrame(SecDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 190, 101, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_date = new QLabel(SecDialog);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(590, 0, 181, 31));
        QFont font10;
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        label_date->setFont(font10);
        label_eye = new QLabel(SecDialog);
        label_eye->setObjectName(QString::fromUtf8("label_eye"));
        label_eye->setGeometry(QRect(140, 50, 31, 21));
        label_consultation = new QLabel(SecDialog);
        label_consultation->setObjectName(QString::fromUtf8("label_consultation"));
        label_consultation->setGeometry(QRect(170, 50, 91, 21));
        QFont font11;
        font11.setPointSize(9);
        label_consultation->setFont(font11);

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "DeskApp", nullptr));
        label_time->setText(QString());
        label_pics->setText(QString());
        label_maroc->setText(QString());
        label_Recovred->setText(QString());
        label_active->setText(QString());
        label_2->setText(QString());
        label_patient->setText(QString());
        label_recovred->setText(QString());
        label_death->setText(QString());
        label_skull->setText(QString());
        label_3->setText(QString());
        label_up2->setText(QString());
        label_1->setText(QString());
        label_4->setText(QCoreApplication::translate("SecDialog", "New :", nullptr));
        label_8->setText(QCoreApplication::translate("SecDialog", "New :", nullptr));
        label_skull_2->setText(QString());
        label_actuel->setText(QString());
        label_skull_3->setText(QString());
        label_flag->setText(QString());
        label->setText(QCoreApplication::translate("SecDialog", "COVID-19 au Maroc : updated\n"
"   @all right reserved 2020", nullptr));
        label_5->setText(QString());
        label_world_png->setText(QString());
        pushButton_world->setText(QString());
        label_user_img->setText(QString());
        label_username->setText(QString());
        label_vi->setText(QString());
        pushButton_cmp->setText(QString());
        label_7->setText(QCoreApplication::translate("SecDialog", "Base de donn\303\251es\n"
"  mondiale", nullptr));
        label_9->setText(QCoreApplication::translate("SecDialog", "Op\303\251ration & \n"
" impl\303\251mentation", nullptr));
        label_date->setText(QString());
        label_eye->setText(QString());
        label_consultation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
