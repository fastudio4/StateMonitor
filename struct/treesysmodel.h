#ifndef TREESYSMODEL_H
#define TREESYSMODEL_H

#include <QAbstractItemModel>
#include <QObject>

namespace SYSMOEDEL {

class TreeSysModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    TreeSysModel(QObject *parent = nullptr);

    void setColumns(QStringList cols);
    void addItem(QObject *item, const QModelIndex &parentIdx);

    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &child) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    virtual ~TreeSysModel();

private:
    QObject *_rootItem;
    QStringList _columns;
    QObject *objByIndex(const QModelIndex &index) const;

};

} //namespace SYSMOEDL

#endif // TREESYSMODEL_H
