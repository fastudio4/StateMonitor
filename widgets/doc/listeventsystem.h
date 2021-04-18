#ifndef LISTEVENTSYSTEM_H
#define LISTEVENTSYSTEM_H

#include "panel.h"
#include <QListView>

namespace DOCWIDGETS {

class ListEventSystem : public Panel
{
    Q_OBJECT
public:
    ListEventSystem(const QString &namePanel, QWidget *parent = nullptr);
    virtual ~ListEventSystem();
private:
    QListView *listSysEvent;
};

} //namespace DOCWIDGETS

#endif // LISTEVENTSYSTEM_H
