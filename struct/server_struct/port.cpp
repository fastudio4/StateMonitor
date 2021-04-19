#include "port.h"

namespace TREE {

Port::Port(const QString &name, QObject *parent)
    : BaseSys(name, parent)
{
    m_type = false; //default MODBUS RTU
}

Port::~Port()
{

}

} //namespace TREE
