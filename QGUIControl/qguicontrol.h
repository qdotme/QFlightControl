#ifndef QGUICONTROL_H
#define QGUICONTROL_H

#include "QGUIControl_global.h"

#include <qdjango/http/QDjangoHttpResponse.h>
#include <qdjango/http/QDjangoHttpRequest.h>

namespace QFC {
class QGUICONTROLSHARED_EXPORT QGUIControl : public QObject
{
    Q_OBJECT
public:
    QGUIControl();
public slots:
    QDjangoHttpResponse* screenShot(const QDjangoHttpRequest &request);
};

}
#endif // QGUICONTROL_H
