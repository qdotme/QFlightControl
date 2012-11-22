#include "localmachine.h"

#include <QHostInfo>

namespace QFC {
    LocalMachine::LocalMachine(QObject *parent) :
        Machine(parent)
    {
    }

    QString LocalMachine::hostname() const
    {
        return QHostInfo::localHostName();
    }
}
