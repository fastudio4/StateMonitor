#include "basesys.h"
namespace TREE{
BaseSys::BaseSys(const QString &name, QObject *parent)
    : QObject(parent)
{
    setName(name);
}

BaseSys::~BaseSys()
{

}

} //namespace TREE
