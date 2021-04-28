#ifndef VIEWMAP_H
#define VIEWMAP_H

#include <QGraphicsView>
#include <QWidget>

class ViewMap : public QWidget
{
    Q_OBJECT
public:
    ViewMap(QWidget *parent = nullptr);
    virtual ~ViewMap();
};

#endif // VIEWMAP_H
