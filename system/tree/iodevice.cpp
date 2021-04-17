#include "iodevice.h"

namespace TREE {

IoDevice::IoDevice(const uint &number,
                   const uint typeIO,
                   const QString &name,
                   QObject *parent)
    : BaseSys(name, parent)
{
    setNumber(number);
    setTypeIO(typeIO);
}

IoDevice::~IoDevice()
{

}

} //namespace TREE
