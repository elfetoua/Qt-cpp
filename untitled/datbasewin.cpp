#include "datbasewin.h"
#include "database.h"
#include "ui_datbasewin.h"

DatbaseWin::DatbaseWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DatbaseWin)
{
    ui->setupUi(this);
    QColor background;
    background.setRgb(110,128,128,255);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, background);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    QPixmap db("src_img/db");
    QPixmap cov("src_img/cov");
    ui->label_db->setPixmap(db.scaled(ui->label_db->width(), ui->label_db->height(), Qt::KeepAspectRatio));
    ui->label_cov->setPixmap(cov.scaled(ui->label_cov->width(), ui->label_cov->height(), Qt::KeepAspectRatio));
    show_db();
}

void DatbaseWin::show_db()
{
    Database *countries;
    QString choix;

    countries = new Database();
    countries->open("countries_db.sqlite");
    QSqlQueryModel *querymodel;
    querymodel = new QSqlQueryModel();


    ui->comboBox_sort->addItem("par defaut");
    ui->comboBox_sort->addItem("nombre de cas");
    ui->comboBox_sort->addItem("continent");
    ui->comboBox_sort->addItem("morts");
    ui->comboBox_sort->addItem("cas actives");
    ui->comboBox_sort->addItem("nombre de guérisons");

    querymodel->setQuery("SELECT * FROM world");
    ui->tableView->setModel(querymodel);


}

DatbaseWin::~DatbaseWin()
{
    delete ui;
    this->close();
}

void DatbaseWin::on_pushButton_clicked()
{
    QString choix;
    QSqlQueryModel *querymodel;
    querymodel = new QSqlQueryModel();
    choix = ui->comboBox_sort->currentText();
    if (choix == "par defaut")
        querymodel->setQuery("SELECT * FROM world");
    else if (choix == "nombre de cas")
        querymodel->setQuery("SELECT * FROM world ORDER BY cases DESC");
    else if (choix == "continent")
        querymodel->setQuery("SELECT * FROM world ORDER BY continent");
    else if (choix == "morts")
        querymodel->setQuery("SELECT * FROM world ORDER BY deaths DESC ");
    else if (choix == "cas actives")
        querymodel->setQuery("SELECT * FROM world ORDER BY active DESC");
    else if (choix == "nombre de guérisons")
        querymodel->setQuery("SELECT * FROM world ORDER BY recovered DESC");
   ui->tableView->setModel(querymodel);
}
