#ifndef TREEMAPSENSOR_H
#define TREEMAPSENSOR_H
#include <QTreeView>
#include "panel.h"

namespace DOCWIDGETS {

class TreeMapSensor : public Panel
{
    Q_OBJECT
public:
    TreeMapSensor(const QString &namePanel, QWidget *parent = nullptr);
    virtual ~TreeMapSensor();
private:
    QTreeView *treeMapsSensor;

};

} //namespace DOCWIDGETS

#endif // TREEMAPSENSOR_H
