#include "Secdialog.h"
#include "ui_Secdialog.h"
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <iostream>

void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(5);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &SecDialog::my_slot);
    timer->start(1000);
    handel_json();
}

void SecDialog::show_img(void)
{
    QPixmap pix("src_img/cn");
    QPixmap pix0("src_img/cn0");
    QPixmap pix1("src_img/cnn");
    QPixmap pix2("src_img/cn2");
    QPixmap pix3("src_img/cn3");
    QPixmap cov_png("src_img/covid19_maroc");
    QPixmap up("src_img/up");
    QPixmap patient("src_img/patient");
    QPixmap recovred("src_img/recovring");
    QPixmap death("src_img/skull");
    QPixmap flag("src_img/morocco");


    QColor background;
    background.setRgb(245,245,220,255);

    QPalette pal = palette();
    pal.setColor(QPalette::Background, background);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
   // QPixmap pix4("src_img/cn4");
    int w = ui->label_pics->width(), h = ui->label_pics->height();
    ui->label_maroc->setPixmap(cov_png.scaled(100, 100, Qt::KeepAspectRatio));
    ui->label_up1->setPixmap(up.scaled(50, 20, Qt::KeepAspectRatio));
    ui->label_up2->setPixmap(up.scaled(50, 20, Qt::KeepAspectRatio));
    ui->label_up3->setPixmap(up.scaled(50, 20, Qt::KeepAspectRatio));
    ui->label_recovred->setPixmap(recovred.scaled(ui->label_recovred->width(), ui->label_recovred->height(), Qt::KeepAspectRatio));
    ui->label_patient->setPixmap(patient.scaled(ui->label_patient->width(), ui->label_recovred->height(), Qt::KeepAspectRatio));
    ui->label_skull->setPixmap(death.scaled(ui->label_skull->width(), ui->label_skull->height(), Qt::KeepAspectRatio));
    ui->label_flag->setPixmap(flag.scaled(ui->label_flag->width(), ui->label_flag->height(), Qt::KeepAspectRatio));
    ui->label_pics->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    delay();
    ui->label_pics->setPixmap(pix0.scaled(w, h, Qt::KeepAspectRatio));
    delay();
    ui->label_pics->setPixmap(pix1.scaled(w, h * 2, Qt::KeepAspectRatio));
    delay();
    ui->label_pics->setPixmap(pix2.scaled(w, h + 20, Qt::KeepAspectRatio));
    delay();
    ui->label_pics->setPixmap(pix3.scaled(w, h + 20, Qt::KeepAspectRatio));
    delay();
  //  ui->label_pics->setPixmap(pix4.scaled(w, h + 20, Qt::KeepAspectRatio));
}

void SecDialog::handel_json()const
{
    int cases, active, critical, todayRecovered, todayDeaths, todayCases, tests, deaths, recovered;
    QFile file_obj("mrocco.json");
    if(!file_obj.open(QIODevice::ReadOnly))
    {
        qDebug()<<"Failed to open "<<"mrocco.json";
        exit(1);
    }
    QTextStream file_text(&file_obj);
    QString json_string;
    json_string = file_text.readAll();
    file_obj.close();
    QByteArray json_bytes = json_string.toLocal8Bit();
    //
    //  load it into a QJsonDocument then convert that to QJsonObject.
    //
    auto json_doc = QJsonDocument::fromJson(json_bytes);

    if(json_doc.isNull()){
        qDebug()<<"Failed to create JSON doc.";
        exit(2);
    }
    if(!json_doc.isObject()){
        qDebug()<<"JSON is not an object.";
        exit(3);
    }

    QJsonObject json_obj = json_doc.object();

    if(json_obj.isEmpty())
    {
        qDebug()<<"JSON object is empty.";
        exit(4);
    }
    //
    // And finally, we access the data:
    //
    QVariantMap json_map = json_obj.toVariantMap();

    cases = json_map["cases"].toInt();
    tests = json_map["tests"].toInt();
    recovered = json_map["recovered"].toInt();
    deaths = json_map["deaths"].toInt();
    active = json_map["active"].toInt();
    todayRecovered = json_map["todayRecovered"].toInt();
    todayCases = json_map["todayCases"].toInt();
    todayDeaths = json_map["todayDeaths"].toInt();


  /*  critical << json_map["critical"].toInt();
    todayRecovered << json_map["todayRecovered"].toInt();*/

    ui->label_active->setText(" All Cases \n\t" + QString::number(cases) + "\n");
    ui->label_Recovred->setText(" Recovred  \n\t" + QString::number(recovered) + "\n");
    ui->label_death->setText(" Death \n\t" + QString::number(deaths) + "\n");
    ui->label_1->setText(QString::number(todayCases) + "\n");
    ui->label_2->setText(QString::number(todayRecovered) + "\n");
    ui->label_3->setText(QString::number(todayDeaths) + "\n");
    std::cout << "cases = " << cases;
    std::cout << "tests = " << tests;
}

void SecDialog::my_slot()
{
   QTime time = QTime::currentTime();
   QString time_text = time.toString("hh : mm : ss");
   ui->label_time->setText(time_text);
}

SecDialog::~SecDialog()
{
    delete ui;
}
