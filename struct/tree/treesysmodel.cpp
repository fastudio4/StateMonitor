#include "treesysmodel.h"

#include <QPixmap>

namespace SYSMOEDEL {

TreeSysModel::TreeSysModel(QObject *paren)
    :QAbstractItemModel(paren)
{
    _rootItem = new QObject(this);
}

void TreeSysModel::setColumns(QStringList cols)
{
    _columns = cols;
}

void TreeSysModel::addItem(QObject *item, const QModelIndex &parentIdx)
{
    beginInsertRows(parentIdx, rowCount(parentIdx), rowCount(parentIdx));
    item->setParent(objByIndex(parentIdx));
    endInsertRows();
}

QModelIndex TreeSysModel::index(int row, int column, const QModelIndex &parent) const
{
    if(!hasIndex(row, column, parent)) return QModelIndex();
    QObject *parentObj = objByIndex(parent);
    return createIndex(row, column, parentObj->children().at(row));
}

QModelIndex TreeSysModel::parent(const QModelIndex &child) const
{
    QObject *childObj = objByIndex(child);
    QObject *parentObj = childObj->parent();
    if(parentObj == _rootItem) return QModelIndex();
    QObject *grandParentObj = parentObj->parent();
    int row = grandParentObj->children().indexOf(parentObj);
    return createIndex(row, 0, parentObj);
}

int TreeSysModel::rowCount(const QModelIndex &parent) const
{
    return objByIndex(parent)->children().count();
}

int TreeSysModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return _columns.count();
}

QVariant TreeSysModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid()) return QVariant();
    switch (role)
    {
    case Qt::DisplayRole:
        return objByIndex(index)->property(_columns.at(index.column()).toUtf8());
    case Qt::DecorationRole:
    {
        if(objByIndex(index)->property("state") != QVariant())
        {
            QPixmap *status = new QPixmap(16,16);
            status->fill(Qt::green);
            return *status;
        }
        return QVariant();
    }
    default:
        return QVariant();
    }
}

QVariant TreeSysModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return _columns.at(section);
    return QVariant();
}

TreeSysModel::~TreeSysModel()
{
    delete _rootItem;
}

QObject *TreeSysModel::objByIndex(const QModelIndex &index) const
{
    if(!index.isValid()) return _rootItem;
    return static_cast<QObject*>(index.internalPointer());
}

} //namespace SYSMOEDL
