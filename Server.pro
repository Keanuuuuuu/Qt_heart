
QT       += core gui
QT       += network
QT       +=sql
RC_ICONS = releaseIcon.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
    tcpserver.cpp \
    mysql.cpp

HEADERS  += \
    tcpserver.h \
    mysql.h

FORMS    += \
    tcpserver.ui

RESOURCES += \
    resource.qrc
