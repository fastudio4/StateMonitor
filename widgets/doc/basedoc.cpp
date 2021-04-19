#include "basedoc.h"
#include <QDebug>
#include <QStyle>

namespace DOCWIDGETS {

BaseDocWidget::BaseDocWidget(const QString &namePanel, QWidget *parent)
    :QDockWidget(parent)
{
    setWindowTitle(namePanel);
    setAllowedAreas(Qt::LeftDockWidgetArea);

}

BaseDocWidget::~BaseDocWidget()
{

}

} //namespace DOCWIDGETS
