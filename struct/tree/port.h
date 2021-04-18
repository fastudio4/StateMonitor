#ifndef PORT_H
#define PORT_H

#include "basesys.h"

namespace TREE {

class Port : public BaseSys
{
    Q_OBJECT
    Q_PROPERTY(bool type READ type WRITE setType)

public:
    explicit Port(const QString &name, QObject *parent = nullptr);
    virtual ~Port();

    bool type() const { return m_type; }

public slots:
    void setType(bool type){ m_type = type; }

private:
    bool m_type;
};

} //namespace TREE

#endif // PORT_H
