#include "listeventsystem.h"

namespace DOCWIDGETS {

ListEventSystem::ListEventSystem(const QString &namePanel, QWidget *parent)
    :Panel(namePanel,parent)
{
    listSysEvent = new QListView(this);
    setWidget(listSysEvent);
}

ListEventSystem::~ListEventSystem()
{

}

} //namespace DOCWIDGETS
