#include "mainwindow.h"
namespace APP {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("State monitor"));
    createDocWidjets(); //Create doc widgets
    createToolsWidgets(); //Create tools widgets
    serverDataModel = new S_CONSTRUCTOR::ServerConstructor(this);
    mapView = new ViewMap(this);
    setCentralWidget(mapView);
}

void MainWindow::createDocWidjets()

{
    sensorTree = new DOCWIDGETS::BaseDocWidget(tr("Sensor log"), this);
    serverTree = new DOCWIDGETS::BaseDocWidget(tr("System log"),this);
    sensorMessageList = new DOCWIDGETS::BaseDocWidget(tr("Maps/Sensors"),this);
    serverMessageList = new DOCWIDGETS::BaseDocWidget(tr("Server/Devices"),this);

    addDockWidget(Qt::LeftDockWidgetArea, sensorMessageList);
    addDockWidget(Qt::LeftDockWidgetArea, serverMessageList);
    tabifyDockWidget(sensorMessageList,serverMessageList);

    addDockWidget(Qt::LeftDockWidgetArea, sensorTree);
    addDockWidget(Qt::LeftDockWidgetArea, serverTree);
    tabifyDockWidget(sensorTree,serverTree);
}

void MainWindow::createToolsWidgets()
{
    statusMessage = new TOOLSWIDGETS::StatusBar(this);
    baseToolBar = new TOOLSWIDGETS::ToolBarTop(this);
    addToolBar(baseToolBar);
    setStatusBar(statusMessage);
}

MainWindow::~MainWindow()
{

}

} //namespace APP
