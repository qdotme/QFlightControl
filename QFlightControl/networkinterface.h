#ifndef NETWORKINTERFACE_H
#define NETWORKINTERFACE_H

#include <QObject>

class NetworkInterface : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString hardwareAddress READ hardwareAddress WRITE setHardwareAddress)

public:
    explicit NetworkInterface(QObject *parent = 0);
    
    virtual QString name() const;
    virtual void setName(QString &n);

    virtual QString hardwareAddress() const;
    virtual void setHardwareAddress(QString &n);

signals:
    
public slots:

private:
    QString m_name;
    QString m_hardwareAddress;

};

#endif // NETWORKINTERFACE_H
