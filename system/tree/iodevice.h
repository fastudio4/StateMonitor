#ifndef IODEVICE_H
#define IODEVICE_H

#include "basesys.h"

namespace TREE {

class IoDevice : public BaseSys
{
    Q_OBJECT
    Q_PROPERTY(uint number READ number WRITE setNumber)
    Q_PROPERTY(uint typeIO READ typeIO WRITE setTypeIO)

public:
    explicit IoDevice(const uint &number,
                      const uint typeIO,
                      const QString &name,
                      QObject *parent = nullptr);
    virtual ~IoDevice();

    uint number() const { return m_number; }
    uint typeIO() const { return m_typeIO; }

public slots:
    void setNumber(uint number) { m_number = number; }
    void setTypeIO(uint typeIO) { m_typeIO = typeIO; }

private:
    uint m_number;
    uint m_typeIO;
};

} //namespace TREE

#endif // IODEVICE_H
