#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "widgets/doc/listeventsensor.h"
#include "widgets/doc/listeventsystem.h"
#include "widgets/doc/treemapsensor.h"
#include "widgets/doc/treeserverdevice.h"

namespace APP {

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void createDocWidjets();
    ~MainWindow();
private:

    /* DocWidjet */
    DOCWIDGETS::ListEventSensor *messageSensorList;
    DOCWIDGETS::ListEventSystem *messageSystemList;
    DOCWIDGETS::TreeMapSensor *treeMapSensor;
    DOCWIDGETS::TreeServerDevice *treeServerDev;
};

} //namespace APP
#endif // MAINWINDOW_H
