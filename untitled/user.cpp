#include "user.h"
#include <iostream>
#include "includes.h"
#include "mainwindow.h"
#include <QCryptographicHash>

User::User()
{
    open("countries_db.sqlite");
    creat_table("users", 2);
}

User::~User()
{
  //close_db();
}

QString encrypt(QString password)
{
    QString encrypted_password;
    QByteArray encr;
    encr = password.toUtf8();
    encrypted_password = QString(QCryptographicHash::hash((encr),QCryptographicHash::Md5));

    qDebug() << encrypted_password;
    return (encrypted_password);
}

void User::add_user(QString username, QString passwd, QString path)
{
    QSqlQuery add;
    _db.exec("PRAGMA synchronous = OFF");
    _db.exec("PRAGMA journal_mode = MEMORY");
    add.prepare("INSERT INTO users ("
                "username,"
                "password,"
                "user_img)"
                "VALUES ('"+ username +"','"+ encrypt(passwd) +"','"+ path +"');");
    add.exec();
}
void User::modify_user()
{
}

void User::delete_user()
{
}

bool User::check_user(QString username, QString password)
{
   password = encrypt(password);
   QSqlQuery qry;

   if (qry.exec("SELECT * FROM users WHERE username = '"+ username +"' AND password = '"+ password +"'"))
   {
       int count = 0;
       while (qry.next())
           count++;
       if (count == 1)
       {
           g_username = username;
           qry.exec("UPDATE users SET num_consultation = num_consultation + 1 WHERE username = '"+ username +"' AND password = '"+ password +"'");
           qry.exec("SELECT user_img FROM users WHERE username = '"+ username +"' AND password = '"+ password +"'");
           while(qry.next())
               g_path = qry.value(0).toString();
           qDebug() << g_path;
           qry.exec("SELECT num_consultation FROM users WHERE username = '"+ username +"' AND password = '"+ password +"'");
           while (qry.next())
           {
              g_consult = qry.value(0).toInt();
              qDebug() <<  g_consult;

           }



           return (true);
       }
   }
   return (false);
}
