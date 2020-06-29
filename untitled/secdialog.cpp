#include "Secdialog.h"
#include "ui_Secdialog.h"
#include <vector>
#include "datbasewin.h"
#include "database.h"
#include <algorithm>
using namespace std;
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
    QColor background;
    background.setRgb(245,245,220,255);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, background);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &SecDialog::my_slot);
    timer->start(1000);
    handel_json();
    QString s = QDate::currentDate().toString("dd - MM - yyyy");
    ui->label_date->setText(s);
    ui->label_username->setText(g_username);
    ui->label_consultation->setText("consulter "+ QString::number(g_consult++) + " fois");
    this->plot();
}

void SecDialog::show_img(void)
{
    QPixmap pix("src_img/cn");
    QPixmap pix0("src_img/cn0");
    QPixmap pix1("src_img/cnn");
    QPixmap pix2("src_img/cn2");
    QPixmap pix3("src_img/cn3");
    QPixmap ensa("src_img/ensa");
    QPixmap cov_png("src_img/covid19_maroc");
    QPixmap patient("src_img/patient");
    QPixmap recovred("src_img/recovring");
    QPixmap death("src_img/skull");
    QPixmap flag("src_img/morocco");
    QPixmap world("src_img/world");
    QPixmap user_img(g_path);
    QPixmap vi("src_img/visualization");
    QPixmap eye("src_img/eye");


   // QPixmap pix4("src_img/cn4");
    int w = ui->label_pics->width(), h = ui->label_pics->height();
    ui->label_maroc->setPixmap(cov_png.scaled(100, 100, Qt::KeepAspectRatio));
    ui->label_world_png->setPixmap(world.scaled(ui->label_world_png->width(), ui->label_world_png->height(), Qt::KeepAspectRatio));
    ui->label_eye->setPixmap(eye.scaled(ui->label_eye->width(), ui->label_eye->height(), Qt::KeepAspectRatio));
    ui->label_vi->setPixmap(vi.scaled(ui->label_vi->width(), ui->label_vi->height(), Qt::KeepAspectRatio));
    ui->label_user_img->setPixmap(user_img.scaled(ui->label_user_img->width(), ui->label_user_img->height(), Qt::KeepAspectRatio));
    ui->label_recovred->setPixmap(recovred.scaled(ui->label_recovred->width(), ui->label_recovred->height(), Qt::KeepAspectRatio));
    ui->label_patient->setPixmap(patient.scaled(ui->label_patient->width(), ui->label_recovred->height(), Qt::KeepAspectRatio));
    ui->label_skull->setPixmap(death.scaled(ui->label_skull->width(), ui->label_skull->height(), Qt::KeepAspectRatio));
    ui->label_flag->setPixmap(flag.scaled(ui->label_flag->width(), ui->label_flag->height(), Qt::KeepAspectRatio));
    ui->label_pics->setPixmap(ensa.scaled(w, h, Qt::KeepAspectRatio));
    delay();
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
    Country pays;
    Country morocco;
    QFile countries_file("countries.json");
    QFile morocco_file("morocco.json");
    QString json_string;

    if(countries_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        json_string = countries_file.readAll();
        countries_file.close();
    }
    else
        qDebug()<< "file not found";
    auto json_doc = QJsonDocument::fromJson(json_string.toUtf8());

    QJsonArray j_arr = json_doc.array();
    pays.to_database(j_arr);
    if(morocco_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        json_string = morocco_file.readAll();
        morocco_file.close();
    }
    else
        qDebug()<< "file not found";
    json_doc = QJsonDocument::fromJson(json_string.toUtf8());
    QJsonObject json_obj = json_doc.object();
    QVariantMap json_map = json_obj.toVariantMap();
    int  cases, active, todayRecovered, todayDeaths, todayCases, tests, deaths, recovered;
        cases = json_map["cases"].toInt();
        tests = json_map["tests"].toInt();
        recovered = json_map["recovered"].toInt();
        deaths = json_map["deaths"].toInt();
        active = json_map["active"].toInt();
        todayRecovered = json_map["todayRecovered"].toInt();
        todayCases = json_map["todayCases"].toInt();
        todayDeaths = json_map["todayDeaths"].toInt();

        ui->label_active->setText(" Confirmé \n   " + QString::number(cases) + "\n");
        ui->label_Recovred->setText(" Guéris  \n   " + QString::number(recovered) + "\n");
        ui->label_death->setText(" Déces \n   " + QString::number(deaths) + "\n");
        ui->label_actuel->setText(" Cas actifs \n   " + QString::number(active) + "\n");
        ui->label_1->setText(QString::number(todayCases));
        ui->label_2->setText(QString::number(todayRecovered));
        ui->label_3->setText(QString::number(todayDeaths));
}

QVector<double> extract(QString key)
{
    QFile data_file("data.json");
    QString json_string;
    if(data_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        json_string = data_file.readAll();
        data_file.close();
    }
    else
        qDebug()<< "file not found";
    auto json_doc = QJsonDocument::fromJson(json_string.toUtf8());
   int i = 0;
    QJsonObject j_obj = json_doc.object();
    QJsonValue val, inner_val;
    QVector<double> y(31);
    QJsonObject timeline = j_obj["timeline"].toObject();
    QJsonObject keyy = timeline[key].toObject();
    for (auto jsobj : keyy)
    {
        y[i] = jsobj.toInt();
        i++;
    }
    sort(y.begin(), y.end());
    return (y);
}

void SecDialog::plot_cases(QVector<double> x, QVector<double> y)
{
    QPen pen("#ffdd75");
    pen.setWidth(3);
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setPen(pen);
    ui->customPlot->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 10)));
    ui->customPlot->xAxis->setAutoTickStep(false);
    ui->customPlot->xAxis->setTickStep(5);
    ui->customPlot->yAxis->setAutoTickStep(false);
    ui->customPlot->yAxis->setTickStep(1200);
    ui->customPlot->graph(0)->setData(x, y);
    ui->customPlot->xAxis->setLabel("Date");
    ui->customPlot->yAxis->setLabel("cases");
    ui->customPlot->xAxis->setRange(1, 30);
    ui->customPlot->yAxis->setRange(0, 20000);
    ui->customPlot->replot();
}
void SecDialog::plot_recovered(QVector<double> x, QVector<double> y)
{
    QPen pen("#ADFF2F");
    pen.setWidth(3);
    ui->customPlot->addGraph();
    ui->customPlot->graph(1)->setPen(pen);
    ui->customPlot->graph(1)->setBrush(QBrush(QColor(0, 0, 255, 7)));
    ui->customPlot->xAxis->setAutoTickStep(false);
    ui->customPlot->xAxis->setTickStep(5);
    ui->customPlot->yAxis->setAutoTickStep(false);
    ui->customPlot->yAxis->setTickStep(1200);
    ui->customPlot->graph(1)->setData(x, y);
    ui->customPlot->xAxis->setLabel("Date");
    ui->customPlot->yAxis->setLabel("cases");
    ui->customPlot->xAxis->setRange(1, 30);
    ui->customPlot->yAxis->setRange(0, 20000);
    ui->customPlot->replot();
}
void SecDialog::plot_deaths(QVector<double> x, QVector<double> y)
{
    QPen pen("#ff5303");
    pen.setWidth(3);
    ui->customPlot->addGraph();
    ui->customPlot->graph(2)->setPen(pen);
    ui->customPlot->graph(2)->setBrush(QBrush(QColor(0, 0, 255, 20)));
    ui->customPlot->xAxis->setAutoTickStep(false);
    ui->customPlot->xAxis->setTickStep(5);
    ui->customPlot->yAxis->setAutoTickStep(false);
    ui->customPlot->yAxis->setTickStep(1200);
    ui->customPlot->graph(2)->setData(x, y);
    ui->customPlot->xAxis->setLabel("Date");
    ui->customPlot->yAxis->setLabel("cases");
    ui->customPlot->xAxis->setRange(1, 30);
    ui->customPlot->yAxis->setRange(0, 20000);
    ui->customPlot->replot();
}

void SecDialog::plot()
{
    QColor background;
    QPalette pal = palette();
    QVector<double> x(30);
    QVector<double> y;
    background.setRgb(245,245,220,255);
    pal.setColor(QPalette::Background, background);
    for (int i = 0; i < 30; ++i)
      x[i] = i + 1;
    ui->customPlot->setBackground(background);
    y = extract("cases");
    plot_cases(x, y);
    y = extract("recovered");
    plot_recovered(x, y);
    y = extract("deaths");
    plot_deaths(x, y);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
}

void SecDialog::my_slot()
{
   QTime time = QTime::currentTime();
   QString time_text = time.toString("hh : mm : ss");
   ui->label_time->setText(time_text);
}

void SecDialog::on_pushButton_world_clicked()
{
    dbw = new DatbaseWin(this);
    dbw->show();
}

SecDialog::~SecDialog()
{
    delete ui;
}
