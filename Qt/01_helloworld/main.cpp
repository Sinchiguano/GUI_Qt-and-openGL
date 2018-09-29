#include "mainwindow.h"
#include <QApplication>






int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;//Object to main window
    w.show();

    return a.exec();
}
