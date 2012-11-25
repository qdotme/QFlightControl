#include "qguicontrol.h"
#include <QPixmap>
#include <QApplication>
#include <QBuffer>
#include <QDesktopWidget>

namespace QFC {

QGUIControl::QGUIControl()
{
}

QDjangoHttpResponse *QGUIControl::screenShot(const QDjangoHttpRequest &request)
{
    QPixmap px = QPixmap::grabWindow(QApplication::desktop()->winId());
    QBuffer buffer;
    buffer.open(QIODevice::ReadWrite);
    px.save(&buffer, "png");
    buffer.seek(0);
    QDjangoHttpResponse *resp = new QDjangoHttpResponse();
    resp->setBody(buffer.readAll());
    return resp;
}


}
