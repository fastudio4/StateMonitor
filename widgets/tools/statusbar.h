#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QStatusBar>
namespace TOOLSWIDGETS {

class StatusBar : public QStatusBar
{
    Q_OBJECT
public:
    StatusBar(QWidget *parent = nullptr);
    virtual ~StatusBar();
};

} //namespace TOOLSWIDGETS

#endif // STATUSBAR_H
