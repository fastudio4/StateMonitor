#include "serverconstructor.h"
#include <QDebug>

namespace S_CONSTRUCTOR {

ServerConstructor::ServerConstructor(QObject *parent)
    : QObject(parent)
{
    setStruct = new QSettings("structs.ini",QSettings::IniFormat, parent);
    setStruct->setValue("Server_1/ip", "192.168.0.1");
    setStruct->setValue("Server_1/description", "Box1");
//    setStruct->sync();



}

ServerConstructor::~ServerConstructor()
{

}

} //namespace S_CONSTRUCTOR
