#-------------------------------------------------
#
# Project created by QtCreator 2012-11-24T19:05:54
#
#-------------------------------------------------

QT       += network

TARGET = QGUIControl
TEMPLATE = lib

DEFINES += QGUICONTROL_LIBRARY

SOURCES += qguicontrol.cpp

HEADERS += qguicontrol.h\
        QGUIControl_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

header_files.files = qguicontrol.h \
                     QGUIControl_global.h

unix:header_files.path = /usr/include/QGUIControl
INSTALLS += header_files
