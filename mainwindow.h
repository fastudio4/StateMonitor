#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "widgets/doc/listeventsensor.h"
#include "widgets/doc/listeventsystem.h"
#include "widgets/doc/treemapsensor.h"
#include "widgets/doc/treeserverdevice.h"

#include "widgets/tools/statusbar.h"
#include "widgets/tools/toolbartop.h"

namespace APP {

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:

    void createDocWidjets();
    void createToolsWidgets();

    /* DocWidjet */
    DOCWIDGETS::ListEventSensor *messageSensorList;
    DOCWIDGETS::ListEventSystem *messageSystemList;
    DOCWIDGETS::TreeMapSensor *treeMapSensor;
    DOCWIDGETS::TreeServerDevice *treeServerDev;

    /* ToolsWidjet */

    TOOLSWIDGETS::StatusBar *statusMessage;
    TOOLSWIDGETS::ToolBarTop *baseToolBar;

};

} //namespace APP
#endif // MAINWINDOW_H
