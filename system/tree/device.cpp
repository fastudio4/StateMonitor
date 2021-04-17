#include "device.h"
namespace TREE {


Device::Device(uint id, const QString &name, QObject *parent)
    : BaseSys(name, parent)
{
    setId(id);
    setStartRegister(0);
}

Device::~Device()
{

}

} //namespace TREE
