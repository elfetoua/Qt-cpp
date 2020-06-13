#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Secdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent* pe);
    ~MainWindow();

private slots:
    void on_pushButton_go_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *win2;
};

#endif // MAINWINDOW_H

