#ifndef PANEL_H
#define PANEL_H

#include <QDockWidget>
#include <QObject>
#include <QWidget>

namespace DOCWIDGETS {

class Panel : public QDockWidget
{
    Q_OBJECT
public:
    Panel(const QString &namePanel, QWidget *parent = nullptr);
    virtual ~Panel();
};

} //namespace DOCWIDGETS

#endif // PANEL_H
