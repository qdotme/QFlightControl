#ifndef LOCALMACHINE_H
#define LOCALMACHINE_H

#include "machine.h"

namespace QFC {
    class LocalMachine : public Machine
    {
        Q_OBJECT
    public:
        explicit LocalMachine(QObject *parent = 0);
        QString hostname() const;

    signals:

    public slots:

    };
}
#endif // LOCALMACHINE_H
