#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    void show_img(void);
    explicit SecDialog(QWidget *parent = nullptr);
    void handel_json()const;
    ~SecDialog();
public slots:
    void my_slot();

private:
    Ui::SecDialog *ui;
    QTimer *timer;
};

#endif // SECDIALOG_H
