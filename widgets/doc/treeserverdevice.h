#ifndef TREESERVERDEVICE_H
#define TREESERVERDEVICE_H

#include <QTreeView>
#include "panel.h"

namespace DOCWIDGETS {

class TreeServerDevice : public Panel
{
    Q_OBJECT
public:
    TreeServerDevice(const QString &namePanel, QWidget *parent = nullptr);
    virtual ~TreeServerDevice();
private:
    QTreeView *treeConnDev;
};

} //namespace DOCWIDGETS
#endif // TREESERVERDEVICE_H
