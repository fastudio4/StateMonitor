#include "treemapsensor.h"

namespace DOCWIDGETS {

TreeMapSensor::TreeMapSensor(const QString &namePanel, QWidget *parent)
    :Panel(namePanel, parent)
{
    treeMapsSensor = new QTreeView(this);
    setWidget(treeMapsSensor);
}

TreeMapSensor::~TreeMapSensor()
{

}

} //namespace DOCWIDGETS
