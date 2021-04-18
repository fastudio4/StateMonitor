#include "panel.h"
#include <QDebug>
#include <QStyle>

namespace DOCWIDGETS {

Panel::Panel(const QString &namePanel, QWidget *parent)
    :QDockWidget(parent)
{
    setWindowTitle(namePanel);
    setAllowedAreas(Qt::LeftDockWidgetArea);

}

Panel::~Panel()
{

}

} //namespace DOCWIDGETS
