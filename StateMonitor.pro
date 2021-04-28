QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    application.cpp \
    main.cpp \
    mainwindow.cpp \
    struct/server_struct/basesys.cpp \
    struct/server_struct/device.cpp \
    struct/server_struct/iodevice.cpp \
    struct/server_struct/port.cpp \
    struct/server_struct/server.cpp \
    struct/server_struct/serverconstructor.cpp \
    struct/treemodel.cpp \
    views/maps/viewmap.cpp \
    views/tree/treeview.cpp \
    widgets/doc/basedoc.cpp \
    widgets/tools/statusbar.cpp \
    widgets/tools/toolbartop.cpp

HEADERS += \
    application.h \
    mainwindow.h \
    struct/server_struct/basesys.h \
    struct/server_struct/device.h \
    struct/server_struct/iodevice.h \
    struct/server_struct/port.h \
    struct/server_struct/server.h \
    struct/server_struct/serverconstructor.h \
    struct/treemodel.h \
    views/maps/viewmap.h \
    views/tree/treeview.h \
    widgets/doc/basedoc.h \
    widgets/tools/statusbar.h \
    widgets/tools/toolbartop.h

TARGET = StateMonitor

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
