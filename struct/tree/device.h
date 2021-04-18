#ifndef DEVICE_H
#define DEVICE_H

#include "basesys.h"

namespace TREE {

class Device : public BaseSys
{
    Q_OBJECT
    Q_PROPERTY(uint id READ id WRITE setId)
    Q_PROPERTY(uint startRegister READ startRegister WRITE setStartRegister)

public:
    explicit Device(uint id, const QString &name, QObject *parent = nullptr);
    virtual ~Device();

    uint id() const { return m_id; }
    uint startRegister() const { return m_startRegister; }

public slots:
    void setId(uint id) { m_id = id; }
    void setStartRegister(uint startRegister) { m_startRegister = startRegister; }

private:
    uint m_id;
    uint m_startRegister;
};

} //namespace TREE

#endif // DEVICE_H
