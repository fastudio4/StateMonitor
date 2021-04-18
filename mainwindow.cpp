#include "mainwindow.h"
namespace APP {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("State monitor"));
    createDocWidjets(); //Create doc widgets
}

void MainWindow::createDocWidjets()
{
    messageSensorList = new DOCWIDGETS::ListEventSensor(tr("Sensor log"), this);
    messageSystemList = new DOCWIDGETS::ListEventSystem(tr("System log"),this);
    treeMapSensor = new DOCWIDGETS::TreeMapSensor(tr("Maps/Sensors"),this);
    treeServerDev = new DOCWIDGETS::TreeServerDevice(tr("Connections/Devices"),this);

    addDockWidget(Qt::LeftDockWidgetArea, treeMapSensor);
    addDockWidget(Qt::LeftDockWidgetArea, treeServerDev);
    tabifyDockWidget(treeMapSensor,treeServerDev);
    addDockWidget(Qt::LeftDockWidgetArea, messageSensorList);
    addDockWidget(Qt::LeftDockWidgetArea, messageSystemList);
    tabifyDockWidget(messageSensorList,messageSystemList);
}

MainWindow::~MainWindow()
{
}

} //namespace APP
