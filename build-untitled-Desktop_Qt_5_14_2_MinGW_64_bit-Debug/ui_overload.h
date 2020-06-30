/********************************************************************************
** Form generated from reading UI file 'overload.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLOAD_H
#define UI_OVERLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Overload
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit_result;
    QPushButton *pushButton_cmp;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_srch;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Overload)
    {
        if (Overload->objectName().isEmpty())
            Overload->setObjectName(QString::fromUtf8("Overload"));
        Overload->resize(800, 387);
        centralwidget = new QWidget(Overload);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 50, 131, 31));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(340, 50, 131, 31));
        textEdit_result = new QTextEdit(centralwidget);
        textEdit_result->setObjectName(QString::fromUtf8("textEdit_result"));
        textEdit_result->setGeometry(QRect(510, 20, 191, 201));
        pushButton_cmp = new QPushButton(centralwidget);
        pushButton_cmp->setObjectName(QString::fromUtf8("pushButton_cmp"));
        pushButton_cmp->setGeometry(QRect(200, 50, 121, 31));
        pushButton_cmp->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton#pushButton_cmp {\n"
"    \n"
"  backface-visibility: hidden;\n"
" \n"
"  cursor: pointer;\n"
"  \n"
"  \n"
"  background: #97311a;\n"
"  border-radius: 100px;\n"
"  border: 3px solid rgba(59.21568627450981%,19.215686274509817%,10.196078431372547%,0.2);\n"
" \n"
"   color: #ffffff;\n"
"  font-size: 13px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"QPushButton#pushButton_cmp:pressed {\n"
"    background-color: red;\n"
"}"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 220, 131, 31));
        pushButton_srch = new QPushButton(centralwidget);
        pushButton_srch->setObjectName(QString::fromUtf8("pushButton_srch"));
        pushButton_srch->setGeometry(QRect(190, 220, 91, 31));
        pushButton_srch->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton#pushButton_srch {\n"
"    \n"
"  backface-visibility: hidden;\n"
" \n"
"  cursor: pointer;\n"
"  \n"
"  \n"
"  background: #97311a;\n"
"  border-radius: 100px;\n"
"  border: 3px solid rgba(59.21568627450981%,19.215686274509817%,10.196078431372547%,0.2);\n"
" \n"
"   color: #ffffff;\n"
"  font-size: 13px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"QPushButton#pushButton_srch:pressed {\n"
"    background-color: red;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 190, 121, 21));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 20, 121, 21));
        label_2->setFont(font);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 260, 751, 171));
        Overload->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Overload);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Overload->setMenuBar(menubar);
        statusbar = new QStatusBar(Overload);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Overload->setStatusBar(statusbar);

        retranslateUi(Overload);

        QMetaObject::connectSlotsByName(Overload);
    } // setupUi

    void retranslateUi(QMainWindow *Overload)
    {
        Overload->setWindowTitle(QCoreApplication::translate("Overload", "MainWindow", nullptr));
        pushButton_cmp->setText(QCoreApplication::translate("Overload", "comparer avec", nullptr));
        pushButton_srch->setText(QCoreApplication::translate("Overload", "Chercher", nullptr));
        label->setText(QCoreApplication::translate("Overload", "Chercher un pays", nullptr));
        label_2->setText(QCoreApplication::translate("Overload", "Comparer 2 pays", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Overload: public Ui_Overload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLOAD_H
