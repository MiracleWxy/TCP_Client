#include "mainwindow.h"
#include <QApplication>

#include <QWSServer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QWSServer::setCursorVisible(false);

    w.show();
    
    return a.exec();
}
