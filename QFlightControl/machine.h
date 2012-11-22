#ifndef MACHINE_H
#define MACHINE_H

#include <QObject>
#include <QVariant>

namespace QFC {
    class Machine : public QObject
    {
        Q_OBJECT
        Q_PROPERTY(QString hostname READ hostname WRITE setHostname)
        Q_PROPERTY(QString machineId READ machineId WRITE setMachineId)

    public:
        explicit Machine(QObject *parent = 0);
        virtual QString hostname() const = 0;
        virtual void setHostname(QString n) = 0;

        virtual QString machineId() const = 0;
        virtual void setMachineId(QString n) = 0;

        QVariant toQVariant();
        Machine* fromQVariant(QVariant &qv);
    signals:

    public slots:

    };
}
#endif // MACHINE_H
