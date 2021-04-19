#ifndef BASEDOC_H
#define BASEDOC_H

#include <QDockWidget>
#include <QObject>
#include <QWidget>

namespace DOCWIDGETS {

class BaseDocWidget : public QDockWidget
{
    Q_OBJECT
public:
    BaseDocWidget(const QString &namePanel, QWidget *parent = nullptr);
    virtual ~BaseDocWidget();
};

} //namespace DOCWIDGETS

#endif // BASEDOC_H
