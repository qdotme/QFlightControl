#include "qjson/qobjecthelper.h"

#include "machine.h"

namespace QFC {
Machine::Machine(QObject *parent) :
    QObject(parent)
{
}

QVariant Machine::toQVariant()
{
    QVariantMap v = QJson::QObjectHelper::qobject2qvariant(this);
    return v;
}

}
