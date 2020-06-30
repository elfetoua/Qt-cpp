#include "overload.h"
#include "ui_overload.h"
#include "country.h"
#include "database.h"

Overload::Overload(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Overload)
{
    ui->setupUi(this);
    QColor background;
    background.setRgb(245,245,220,255);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, background);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

Overload::~Overload()
{
    delete ui;
}

void Overload::on_pushButton_cmp_clicked()
{
    Country country1;
    Country country2;
    Country result;
    QString pays1;
    QString pays2;


    pays1 = ui->lineEdit->text();
    pays2 = ui->lineEdit_2->text();
    country1.get_info(pays1);
    country2.get_info(pays2);
    result = country1 - country2;
    ui->textEdit_result->setText(result.get_msg());
}

void Overload::on_pushButton_srch_clicked()
{
    Database *countries;


    countries = new Database();
    countries->open("countries_db.sqlite");
    QSqlQueryModel *querymodel;
    querymodel = new QSqlQueryModel();
    querymodel->setQuery("SELECT * FROM world WHERE Country = '" + ui->lineEdit_3->text() +"'");
    ui->tableView->setModel(querymodel);
    countries->close_db();
}
