#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "widgets/doc/basedoc.h"
#include "widgets/tools/statusbar.h"
#include "widgets/tools/toolbartop.h"
#include "struct/server_struct/serverconstructor.h"

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

    /* DocWidjets Left */
    DOCWIDGETS::BaseDocWidget *sensorTree, *serverTree,
    *sensorMessageList, *serverMessageList;


    /* ToolsWidjet */

    TOOLSWIDGETS::StatusBar *statusMessage;
    TOOLSWIDGETS::ToolBarTop *baseToolBar;

    /* Fill model server */

    S_CONSTRUCTOR::ServerConstructor *serverDataModel;



};

} //namespace APP
#endif // MAINWINDOW_H
