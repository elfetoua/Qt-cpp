#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW2_H
