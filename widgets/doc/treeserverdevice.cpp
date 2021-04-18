#include "treeserverdevice.h"

namespace DOCWIDGETS {

TreeServerDevice::TreeServerDevice(const QString &namePanel, QWidget *parent)
    :Panel(namePanel,parent)
{
    treeConnDev = new QTreeView(this);
    setWidget(treeConnDev);
}

TreeServerDevice::~TreeServerDevice()
{

}

} //namespace DOCWIDGETS
