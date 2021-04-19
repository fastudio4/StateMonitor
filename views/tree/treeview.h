#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QTreeView>
#include <QObject>
#include <QWidget>
#include "struct/treemodel.h"


class TreeView : public QTreeView
{
    Q_OBJECT
public:
    TreeView(MOEDEL::TreeModel *model, const QStringList &cols, QWidget *parent = nullptr);
    virtual ~TreeView();
private:
    MOEDEL::TreeModel *treeModel;

};

#endif // TREEVIEW_H
