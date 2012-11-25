#include "networkinterface.h"

NetworkInterface::NetworkInterface(QObject *parent) :
    QObject(parent)
{
}

QString NetworkInterface::name() const     { return m_name; }
void NetworkInterface::setName(QString &n) { m_name = n; }

QString NetworkInterface::hardwareAddress() const     { return m_hardwareAddress; }
void NetworkInterface::setHardwareAddress(QString &n) { m_hardwareAddress = n; }
