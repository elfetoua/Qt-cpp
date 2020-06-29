#ifndef SECDIALOG_H
# define SECDIALOG_H
# include "includes.h"
# include "qcustomplot.h"
#include "datbasewin.h"
#include <QVector>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    void show_img(void);
    explicit SecDialog(QWidget *parent = nullptr);
    void handel_json() const;
    void plot_cases(QVector<double> x, QVector<double> y);
    void plot_recovered(QVector<double> x, QVector<double> y);
    void plot_deaths(QVector<double> x, QVector<double> y);

    ~SecDialog();
public slots:
    void plot();
    void my_slot();

private slots:
    void on_pushButton_world_clicked();

private:
    Ui::SecDialog *ui;
    DatbaseWin *dbw;
    User active;
    QTimer *timer;
};

#endif // SECDIALOG_H
