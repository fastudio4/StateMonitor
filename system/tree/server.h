#ifndef SERVER_H
#define SERVER_H

#include "basesys.h"

namespace TREE {

class Server : public BaseSys
{
    Q_OBJECT
    Q_PROPERTY(QString addres READ addres WRITE setAddres)

public:
    explicit Server(const QString &name, QObject *parent = nullptr);
    virtual ~Server();
    QString addres() const { return m_addres; }

public slots:
    void setAddres(QString addres) { m_addres = addres; }

private:
    QString m_addres;

};

} //namespace TREE
#endif // SERVER_H
