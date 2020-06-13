#include "login.h"
#include <iostream>
#include <QSqlDatabase>

Login::Login()
{
    QSqlDatabase my_db = QSqlDatabase::addDatabase("SQLlite-DB");
    my_db.setDatabaseName("C-19.db");

    if (my_db.open())
        std::cout << " finnnnnnnnnnnnnnnnnne\n";
    else
        std::cout << " !fiiiiiiiiiiiiiiiiiine\n";
}

Login::~Login()
{
}
