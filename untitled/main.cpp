#include "mainwindow.h"
#include "login.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login login_tets;

   /* system("curl -X GET \"https://disease.sh/v2/countries\" -H \"accept: application/json\" "
           "-o countries.json");
    system("curl -X GET \"https://disease.sh/v2/countries/morocco\" -H \"accept: application/json\" "
           "-o mrocco.json");
           */
    //
    // First step is to load the file and convert its contents into a QbyteArray.
    //


    w.show();
    return a.exec();
}
