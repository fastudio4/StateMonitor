#include "listeventsensor.h"

namespace DOCWIDGETS {

ListEventSensor::ListEventSensor(const QString &namePanel, QWidget *parent)
    :Panel(namePanel, parent)
{
    listSensorEvent = new QListView(this);
    setWidget(listSensorEvent);
}

ListEventSensor::~ListEventSensor()
{

}

} //namespace DOCWIDGETS
