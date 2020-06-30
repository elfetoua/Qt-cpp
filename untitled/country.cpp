#include "country.h"
#include "database.h"

Country::Country()
{
}

void Country::to_database(QJsonArray& j_arr)
{
    Database countries;

    countries.open("countries_db.sqlite");
    countries.creat_table("world", 1);
    countries.insert_values(j_arr, "world");
    countries.close_db();
}

void Country::set_country_info(int cases, int active, int deaths, int recovered)
{
    _cases = cases;
    _active = active;
    _deaths = deaths;
    _recovered = recovered;
}

Country* Country::get_info(QString name)
{
    _country = name;
    Database countries;
    countries.open("countries_db.sqlite");
    QSqlQuery qry;

    if (qry.exec("SELECT cases, deaths, active, recovered FROM world WHERE Country = '"+ name +"'"))
    {
        while(qry.next())
        {
            _cases = qry.value(0).toInt();
            _deaths = qry.value(1).toInt();
            _active = qry.value(2).toInt();
            _recovered = qry.value(3).toInt();
        }
    }
    countries.close_db();
    return (this);
}

QString Country::get_msg()
{
    return ("diff cases =" + QString(QString::number(_cases)) + "\n" + "diff active =" + QString(QString::number(_active))
            + "\n" + "diff deaths =" + QString(QString::number(_deaths)) + "\n" + "diff recovered =" + QString(QString::number(_recovered)));
}

Country operator-(Country const& a, Country const& b)
{
    Country result;

    result._cases = a._cases - b._cases;
    result._active = a._active - b._active;
    result._deaths = a._deaths - b._deaths;
    result._recovered = a._recovered - b._recovered;
    return (result);
}
