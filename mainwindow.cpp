#include "mainwindow.h"
namespace APP {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("State monitor"));
}

MainWindow::~MainWindow()
{
}

} //namespace APP
