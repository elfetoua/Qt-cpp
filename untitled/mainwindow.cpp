#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Secdialog.h"
#include "user.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QColor background;
    background.setRgb(245,245,220,255);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, background);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->setupUi(this);
    QPixmap pix("src_img/c19");
    int w = ui->label_img->width(), h = ui->label_img->height();
    ui->label_img->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
    ui->pushButton_go->setDefault(true);
    QPixmap newacc("src_img/newacc");
    QPixmap login("src_img/login");
    ui->label_newacc->setPixmap(newacc.scaled(ui->label_newacc->width(), ui->label_newacc->height(), Qt::KeepAspectRatio));
    ui->label_login->setPixmap(login.scaled(ui->label_login->width(), ui->label_login->height(), Qt::KeepAspectRatio));
}
void MainWindow::keyPressEvent(QKeyEvent* pe)
{
if(pe->key() == Qt::Key_Enter || pe->key() == Qt::Key_Return)
    on_pushButton_go_clicked();
}

void handl(SecDialog *win2)
{
    win2->show();
    while(true)
     win2->show_img();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_go_clicked()
{
    QString pass = ui->lineEdit_pass->text();
    QString user = ui->lineEdit_username->text();

    if (_user.check_user(user, pass))
    {
        win2 = new SecDialog(this);
        this->close();
        handl(win2);
    }
    else
    {
        QMessageBox::warning(this, "Oops!", "Wrong username or password");
        ui->lineEdit_pass->clear();
    }
}

void MainWindow::on_pushButton_creat_clicked()
{
    _user.add_user(ui->username->text(), ui->password->text(), g_path);
}

void MainWindow::on_pushButton_select_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "slect image", "C://");
    g_path = path;
}
