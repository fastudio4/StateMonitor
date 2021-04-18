#ifndef TOOLBARTOP_H
#define TOOLBARTOP_H

#include <QToolBar>

namespace TOOLSWIDGETS {

class ToolBarTop : public QToolBar
{
    Q_OBJECT
public:
    ToolBarTop(QWidget *parent = nullptr);
    virtual ~ToolBarTop();
};

} //namespace TOOLSWIDGETS

#endif // TOOLBARTOP_H
