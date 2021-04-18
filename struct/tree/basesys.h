#ifndef BASESYS_H
#define BASESYS_H

#include <QObject>

namespace TREE {


class BaseSys : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int state READ state WRITE setState)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString description READ description WRITE setDescription)

public:
    explicit BaseSys(const QString &name, QObject *parent = nullptr);
    virtual ~BaseSys();
    int state() const { return m_state; }
    QString name() const { return m_name; }
    QString description() const { return m_description; }

public slots:
    void setState(int state) { m_state = state; }
    void setName(QString name) { m_name = name; }
    void setDescription(QString description) { m_description = description; }

private:
    int m_state;
    QString m_name;
    QString m_description;
};

} //namespace TREE

#endif // BASESYS_H
