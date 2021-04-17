#include "mainwindow.h"

#include "application.h"

int main(int argc, char *argv[])
{
    APP::Application a(argc, argv);
    APP::MainWindow w;
    w.showMaximized();
    return a.exec();
}
