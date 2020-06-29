#include "mainwindow.h"
#include "user.h"
#include "database.h"


QString g_username;
QString g_path;
int g_consult;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    g_path = "src_img/avatar";


    /*

    system("curl -X GET \"https://disease.sh/v2/countries/morocco\" -H \"accept: application/json\" "
               "-o morocco.json");
    system("curl -X GET \"https://disease.sh/v2/countries\" -H \"accept: application/json\" "
               "-o countries.json");
    system("curl -X GET \"https://disease.sh/v2/historical/morocco?lastdays=30\" -H \"accept: application/json\" "
           "-o data.json\" ");
   */


    //
    // First step is to load the file and convert its contents into a QbyteArray.
    //


    w.show();
    return a.exec();
}
