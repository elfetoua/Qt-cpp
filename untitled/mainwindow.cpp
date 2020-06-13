#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "Secdialog.h"
#include <QPalette>
#include <QMessageBox>
#include <QColor>
#include <QKeyEvent>

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

    if (pass == "C")
    {
        win2 = new SecDialog(this);
        this->close();
        handl(win2);
    }
    else
    {
        QMessageBox::warning(this, "Oops!", "Wrong password");
        ui->lineEdit_pass->clear();
    }
}
