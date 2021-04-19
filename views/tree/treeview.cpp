#include "treeview.h"

TreeView::TreeView(MOEDEL::TreeModel *model, const QStringList &cols, QWidget *parent)
    :QTreeView(parent)
{
    treeModel = model;
    treeModel->setColumns(cols);
    treeModel->setParent(this);
    setModel(model);
}

TreeView::~TreeView()
{

}
