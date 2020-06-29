/********************************************************************************
** Form generated from reading UI file 'datbasewin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATBASEWIN_H
#define UI_DATBASEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DatbaseWin
{
public:
    QTableView *tableView;
    QComboBox *comboBox_sort;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_db;
    QLabel *label_cov;

    void setupUi(QDialog *DatbaseWin)
    {
        if (DatbaseWin->objectName().isEmpty())
            DatbaseWin->setObjectName(QString::fromUtf8("DatbaseWin"));
        DatbaseWin->resize(1094, 700);
        tableView = new QTableView(DatbaseWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 0, 941, 691));
        comboBox_sort = new QComboBox(DatbaseWin);
        comboBox_sort->setObjectName(QString::fromUtf8("comboBox_sort"));
        comboBox_sort->setGeometry(QRect(960, 80, 121, 31));
        comboBox_sort->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    selection-background-color: #111;\n"
"    selection-color: yellow;\n"
"    color: white;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"    padding: 1px 0px 1px 20px;\n"
"}\n"
"\n"
"\n"
"QComboBox:hover, QPushButton:hover\n"
"{\n"
"    border: 1px solid yellow;\n"
"    color: white;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: red;\n"
"    color: pink;\n"
"}\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 0px;\n"
"    padding-left: 0px;\n"
"    color: white;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox:!on\n"
""
                        "{\n"
"    color: white;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #666, stop: 0.1 #555, stop: 0.5 #555, stop: 0.9 #444, stop: 1 #333);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    color: black;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #111, stop: 1 #333);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"     color: white;\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
"     padding-left: 10px;\n"
" }\n"
"\n"
"QComboBox::down-arrow, QSpinBox::down-arrow, QTimeEdit::down-arrow, QDateEdit::down-arrow\n"
"{\n"
"     image: url(:/icons/down_arrow.png);\n"
"     width: 7px;\n"
"     height: "
                        "5px;\n"
"}"));
        label = new QLabel(DatbaseWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(960, 50, 71, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(DatbaseWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1010, 120, 71, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{ \n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"    padding: 1px 0px 1px 20px;\n"
"\n"
"  color: #ffffff;\n"
"  font-size: 10px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"QPushButton#pushButton:pressed {\n"
"    background-color: yellow\n"
"}"));
        label_db = new QLabel(DatbaseWin);
        label_db->setObjectName(QString::fromUtf8("label_db"));
        label_db->setGeometry(QRect(970, 510, 111, 151));
        label_cov = new QLabel(DatbaseWin);
        label_cov->setObjectName(QString::fromUtf8("label_cov"));
        label_cov->setGeometry(QRect(990, 410, 91, 81));

        retranslateUi(DatbaseWin);

        QMetaObject::connectSlotsByName(DatbaseWin);
    } // setupUi

    void retranslateUi(QDialog *DatbaseWin)
    {
        DatbaseWin->setWindowTitle(QCoreApplication::translate("DatbaseWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DatbaseWin", "Trier par:", nullptr));
        pushButton->setText(QCoreApplication::translate("DatbaseWin", "GO!", nullptr));
        label_db->setText(QString());
        label_cov->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DatbaseWin: public Ui_DatbaseWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATBASEWIN_H
