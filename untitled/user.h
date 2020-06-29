#ifndef USER_H
# define USER_H
# include "database.h"

class User : public Database
{
public:
    User();

    void add_user(QString username, QString passwd, QString path);
    void modify_user();
    void delete_user();// Permission
    bool check_user(QString username, QString passord);
    ~User();
private:
    QString _username;
    QString _passwd;
    QString _path;
    int     _num_consultation;
};

#endif // USER_H
