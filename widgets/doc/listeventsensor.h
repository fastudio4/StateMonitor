#ifndef LISTEVENTSENSOR_H
#define LISTEVENTSENSOR_H

#include "panel.h"
#include <QListView>

namespace DOCWIDGETS {

class ListEventSensor : public Panel
{
    Q_OBJECT
public:
    ListEventSensor(const QString &namePanel, QWidget *parent = nullptr);
    virtual ~ListEventSensor();
private:
    QListView *listSensorEvent;
};

} //namespace DOCWIDGETS

#endif // LISTEVENTSENSOR_H
