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
