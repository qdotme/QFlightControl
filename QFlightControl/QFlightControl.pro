#-------------------------------------------------
#
# Project created by QtCreator 2012-11-20T00:54:03
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = QFlightControl
TEMPLATE = lib

DEFINES += QFLIGHTCONTROL_LIBRARY

SOURCES += qflightcontrol.cpp \
    machine.cpp \
    localmachine.cpp \
    networkinterface.cpp \
    localnetworkinterface.cpp

HEADERS += qflightcontrol.h\
        QFlightControl_global.h \
    machine.h \
    localmachine.h \
    networkinterface.h \
    localnetworkinterface.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
