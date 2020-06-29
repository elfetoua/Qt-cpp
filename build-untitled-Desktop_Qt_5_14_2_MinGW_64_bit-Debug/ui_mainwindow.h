/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_img;
    QLabel *label_newacc;
    QLabel *label_login;
    QPushButton *pushButton_go;
    QLineEdit *lineEdit_pass;
    QLabel *pass;
    QLabel *user;
    QLineEdit *lineEdit_username;
    QFrame *line;
    QFrame *line_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_3;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *password2;
    QLabel *user_2;
    QLabel *user_3;
    QLabel *user_4;
    QLabel *user_5;
    QPushButton *pushButton_select;
    QPushButton *pushButton_creat;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(556, 368);
        QFont font;
        font.setPointSize(6);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_img = new QLabel(centralwidget);
        label_img->setObjectName(QString::fromUtf8("label_img"));
        label_img->setGeometry(QRect(60, 10, 141, 101));
        label_newacc = new QLabel(centralwidget);
        label_newacc->setObjectName(QString::fromUtf8("label_newacc"));
        label_newacc->setGeometry(QRect(240, 10, 111, 61));
        label_login = new QLabel(centralwidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(10, 140, 181, 71));
        pushButton_go = new QPushButton(centralwidget);
        pushButton_go->setObjectName(QString::fromUtf8("pushButton_go"));
        pushButton_go->setGeometry(QRect(190, 280, 51, 21));
        pushButton_go->setAutoFillBackground(false);
        pushButton_go->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton#pushButton_go {\n"
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
"  font-size: 16px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"QPushButton#pushButton_go:pressed {\n"
"    background-color: red;\n"
"}"));
        pushButton_go->setAutoDefault(false);
        lineEdit_pass = new QLineEdit(centralwidget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(102, 250, 141, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_pass->sizePolicy().hasHeightForWidth());
        lineEdit_pass->setSizePolicy(sizePolicy);
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        pass = new QLabel(centralwidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(40, 240, 122, 40));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        pass->setFont(font1);
        user = new QLabel(centralwidget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(40, 210, 122, 40));
        user->setFont(font1);
        user->setFrameShape(QFrame::NoFrame);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(102, 219, 141, 21));
        sizePolicy.setHeightForWidth(lineEdit_username->sizePolicy().hasHeightForWidth());
        lineEdit_username->setSizePolicy(sizePolicy);
        lineEdit_username->setFont(font1);
        lineEdit_username->setEchoMode(QLineEdit::Normal);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(243, 80, 20, 261));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(100, 170, 141, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(106, 153, 61, 20));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 20, 201, 16));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(330, 30, 201, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        username = new QLineEdit(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(390, 89, 141, 21));
        sizePolicy.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy);
        username->setFont(font1);
        username->setEchoMode(QLineEdit::Normal);
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(390, 120, 141, 21));
        sizePolicy.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy);
        password->setEchoMode(QLineEdit::Password);
        password2 = new QLineEdit(centralwidget);
        password2->setObjectName(QString::fromUtf8("password2"));
        password2->setGeometry(QRect(390, 150, 141, 21));
        sizePolicy.setHeightForWidth(password2->sizePolicy().hasHeightForWidth());
        password2->setSizePolicy(sizePolicy);
        password2->setEchoMode(QLineEdit::Password);
        user_2 = new QLabel(centralwidget);
        user_2->setObjectName(QString::fromUtf8("user_2"));
        user_2->setGeometry(QRect(330, 80, 51, 40));
        user_2->setFont(font1);
        user_2->setFrameShape(QFrame::NoFrame);
        user_3 = new QLabel(centralwidget);
        user_3->setObjectName(QString::fromUtf8("user_3"));
        user_3->setGeometry(QRect(330, 120, 51, 21));
        user_3->setFont(font1);
        user_3->setFrameShape(QFrame::NoFrame);
        user_4 = new QLabel(centralwidget);
        user_4->setObjectName(QString::fromUtf8("user_4"));
        user_4->setGeometry(QRect(270, 150, 111, 21));
        user_4->setFont(font1);
        user_4->setFrameShape(QFrame::NoFrame);
        user_5 = new QLabel(centralwidget);
        user_5->setObjectName(QString::fromUtf8("user_5"));
        user_5->setGeometry(QRect(270, 190, 121, 31));
        user_5->setFont(font1);
        user_5->setFrameShape(QFrame::NoFrame);
        pushButton_select = new QPushButton(centralwidget);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(390, 190, 41, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Helvetica Neue"));
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(99);
        pushButton_select->setFont(font4);
        pushButton_select->setAutoFillBackground(false);
        pushButton_select->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton#pushButton_select{\n"
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
"  font-size: 16px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"QPushButton#pushButton_select:pressed {\n"
"    background-color: red;\n"
"}"));
        pushButton_select->setAutoDefault(false);
        pushButton_creat = new QPushButton(centralwidget);
        pushButton_creat->setObjectName(QString::fromUtf8("pushButton_creat"));
        pushButton_creat->setGeometry(QRect(470, 230, 61, 21));
        pushButton_creat->setFont(font4);
        pushButton_creat->setAutoFillBackground(false);
        pushButton_creat->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton#pushButton_creat {\n"
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
"  font-size: 16px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"QPushButton#pushButton_creat:pressed {\n"
"    background-color: red;\n"
"}"));
        pushButton_creat->setAutoDefault(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 556, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_go->setDefault(false);
        pushButton_select->setDefault(false);
        pushButton_creat->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_img->setText(QString());
        label_newacc->setText(QString());
        label_login->setText(QString());
        pushButton_go->setText(QCoreApplication::translate("MainWindow", "Go", nullptr));
        pass->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        user->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Log In:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cr\303\251er nouveau compte", nullptr));
        user_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        user_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        user_4->setText(QCoreApplication::translate("MainWindow", " Password  verrification", nullptr));
        user_5->setText(QCoreApplication::translate("MainWindow", "Selectionner une image\n"
" de profile", nullptr));
        pushButton_select->setText(QCoreApplication::translate("MainWindow", "  -  ", nullptr));
        pushButton_creat->setText(QCoreApplication::translate("MainWindow", "Cr\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
