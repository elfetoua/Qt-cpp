#ifndef COUNTRY_H
# define COUNTRY_H
# include "includes.h"
# include <QString>
# include <QJsonArray>

class Country
{
    int _cases;
    int _active;
    int _todayRecovered;
    int _todayDeaths;
    int _todayCases;
    int _test;
    int _deaths;
    int _recovered;
    QString _country;
public:
     Country();
     void to_database(QJsonArray&);
};

#endif // COUNTRY_H
