#ifndef LOCALNETWORKINTERFACE_H
#define LOCALNETWORKINTERFACE_H

#include "networkinterface.h"

namespace QFC {
    class LocalNetworkInterface : public NetworkInterface
    {
        Q_OBJECT
    public:
        explicit LocalNetworkInterface(QObject *parent = 0);

    signals:

    public slots:

    };
}
#endif // LOCALNETWORKINTERFACE_H
