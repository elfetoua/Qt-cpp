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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *user;
    QLabel *pass;
    QLabel *label;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButton_go;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(493, 219);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_img = new QLabel(centralwidget);
        label_img->setObjectName(QString::fromUtf8("label_img"));
        label_img->setGeometry(QRect(10, 10, 141, 201));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 50, 323, 122));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        user = new QLabel(groupBox);
        user->setObjectName(QString::fromUtf8("user"));
        user->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(user, 0, 0, 1, 1);

        pass = new QLabel(groupBox);
        pass->setObjectName(QString::fromUtf8("pass"));

        gridLayout->addWidget(pass, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_pass->sizePolicy().hasHeightForWidth());
        lineEdit_pass->setSizePolicy(sizePolicy);
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_pass, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        pushButton_go = new QPushButton(layoutWidget);
        pushButton_go->setObjectName(QString::fromUtf8("pushButton_go"));
        pushButton_go->setAutoFillBackground(false);
        pushButton_go->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton#pushButton_go {\n"
"    \n"
"  backface-visibility: hidden;\n"
"  position: relative;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  white-space: nowrap;\n"
"  background: #97311a;\n"
"  border-radius: 100px;\n"
"  border: 3px solid rgba(59.21568627450981%,19.215686274509817%,10.196078431372547%,0.2);\n"
"  border-width: 3px 3px 3px 3px;\n"
"  padding: 5px 60px 5px 20px;\n"
"    color: #ffffff;\n"
"  font-size: 16px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: 900;\n"
"  font-style: normal\n"
"  }\n"
"  \n"
"QPushButton#pushButton_go > div {\n"
"    color: #999999;\n"
"  font-size: 10px;\n"
"  font-family: Helvetica Neue;\n"
"  font-weight: initial;\n"
"  font-style: normal;\n"
"  text-align: center;\n"
"  margin: 0px 0px 0px 0px\n"
"  }\n"
"  \n"
"QPushButton#pushButton_go > i {\n"
"    font-size: 1em;\n"
"  background: #f72d40;\n"
"  border-radius: 100px;\n"
"  border: 0px solid transparent;\n"
"  border-width: 0px 13px 13px 0px;\n"
"  padding: 5px 6px 5px 16px;\n"
"  m"
                        "argin: 2px 2px 2px 2px;\n"
"  position: absolute;\n"
"  top: 0px;\n"
"  left: px;\n"
"  bottom: 0px;\n"
"  right: 0px;\n"
"  width: 48px;\n"
"  height: 28px\n"
"  }\n"
"  \n"
"QPushButton#pushButton_go > .ld {\n"
"    font-size: initial\n"
"  }\n"
"</style>"));
        pushButton_go->setAutoDefault(false);

        gridLayout_2->addWidget(pushButton_go, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 493, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_go->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_img->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        user->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        pass->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "            ALL USERS", nullptr));
        pushButton_go->setText(QCoreApplication::translate("MainWindow", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
