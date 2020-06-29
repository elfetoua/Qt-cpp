#ifndef DATBASEWIN_H
#define DATBASEWIN_H

#include <QDialog>

namespace Ui {
class DatbaseWin;
}

class DatbaseWin : public QDialog
{
    Q_OBJECT

public:
    explicit DatbaseWin(QWidget *parent = nullptr);
    void show_db();
    ~DatbaseWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DatbaseWin *ui;
};

#endif // DATBASEWIN_H
