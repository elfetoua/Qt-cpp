#include "database.h"
# include <QJsonArray>

int Database :: i = 0;

Database::Database()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    i++;
}

Database::~Database()
{
    if(_db.isOpen())
        _db.close();
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
}

void Database::open(QString nom_path)
{
    _db.setDatabaseName(nom_path);
    if (!_db.open())
     qDebug() << "Oops! Error loading Database";
}

void Database::creat_table(QString table_name, int type)
{
    QString query;
    QString drop;
    QSqlQuery qry;


    if (type == 1)
    {
     drop = "DROP TABLE IF EXISTS " + table_name;
        if(!qry.exec(drop))
            qDebug() << qry.lastError();
     query = "CREATE TABLE IF NOT EXISTS " + table_name + "("
                                         "Country varchar(15),"
                                         "cases integer,"
                                         "todayCases integer,"
                                         "deaths integer,"
                                         "todayDeaths integer,"
                                         "recovered integer,"
                                         "todayRecovered integer,"
                                         "active integer,"
                                         "critical integer,"
                                         "tests integer,"
                                         "continent varchar(10)"
                                         ");";
   if(!qry.exec(query))
       qDebug() << qry.lastError();
    }
    else if (type == 2)
    {
        query = "CREATE TABLE IF NOT EXISTS " + table_name + "("
                                                             "username varchar(20),"
                                                             "password varchar(100),"
                                                             "user_img varchar(200),"
                                                             "num_consultation integer DEFAULT 0"
                                                             ");";
      if(!qry.exec(query))
          qDebug() << qry.lastError();
      qDebug() << "GDDOFOFFDOO";
    }

}
void Database::insert_values(QJsonArray& j_arr, QString table_name)
{
    QSqlQuery add;
    QJsonValue val;

    _db.exec("PRAGMA synchronous = OFF");
    _db.exec("PRAGMA journal_mode = MEMORY");
    add.prepare("INSERT INTO " + table_name + "("
                                              "Country,"
                                              "cases,"
                                              "todayCases,"
                                              "deaths,"
                                              "todayDeaths,"
                                              "recovered,"
                                              "todayRecovered,"
                                              "active,"
                                              "critical,"
                                              "tests,"
                                              "continent)"
                                              "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);");

    for(auto jsonObj : j_arr)
    {
        val = jsonObj.toObject().value("country");
        add.addBindValue(val.toString());

        val = jsonObj.toObject().value("cases");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("todayCases");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("deaths");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("todayDeaths");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("recovered");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("todayRecovered");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("active");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("critical");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("tests");
        add.addBindValue(val.toInt());

        val = jsonObj.toObject().value("continent");
        add.addBindValue(val.toString());

        if(!add.exec())
         qDebug() << add.lastError();
      //  qDebug() << Qt::endl;
    }
}
void Database::close_db()
{
}
