#ifndef OVERLOAD_H
#define OVERLOAD_H

#include <QMainWindow>

namespace Ui {
class Overload;
}

class Overload : public QMainWindow
{
    Q_OBJECT

public:
    explicit Overload(QWidget *parent = nullptr);
    ~Overload();

private slots:
    void on_pushButton_cmp_clicked();

    void on_pushButton_srch_clicked();

private:
    Ui::Overload *ui;
};

#endif // OVERLOAD_H
