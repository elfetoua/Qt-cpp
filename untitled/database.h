#ifndef DATABASE_H
#define DATABASE_H
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>

class Database
{
    static int i;
protected:
    QSqlDatabase _db;

public:
    Database();
    virtual ~Database();
    virtual void open(QString path);
    virtual void creat_table(QString,int type);
    void insert_values(QJsonArray& , QString);
    virtual void close_db();
};

#endif // DATABASE_H



