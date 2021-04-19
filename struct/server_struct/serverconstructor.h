#ifndef SERVERCONSTRUCTOR_H
#define SERVERCONSTRUCTOR_H

#include <QObject>
#include <QSettings>
namespace S_CONSTRUCTOR {


class ServerConstructor : public QObject
{
    Q_OBJECT
public:
    explicit ServerConstructor(QObject *parent = nullptr);
    virtual ~ServerConstructor();
private:
    QSettings *setStruct;



};

} //namespace S_CONSTRUCTOR

#endif // SERVERCONSTRUCTOR_H
