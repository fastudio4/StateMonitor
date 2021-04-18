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
    struct/tree/basesys.cpp \
    struct/tree/device.cpp \
    struct/tree/iodevice.cpp \
    struct/tree/port.cpp \
    struct/tree/server.cpp \
    struct/tree/treesysmodel.cpp \
    widgets/doc/listeventsensor.cpp \
    widgets/doc/listeventsystem.cpp \
    widgets/doc/panel.cpp \
    widgets/doc/treemapsensor.cpp \
    widgets/doc/treeserverdevice.cpp

HEADERS += \
    application.h \
    mainwindow.h \
    struct/tree/basesys.h \
    struct/tree/device.h \
    struct/tree/iodevice.h \
    struct/tree/port.h \
    struct/tree/server.h \
    struct/tree/treesysmodel.h \
    widgets/doc/listeventsensor.h \
    widgets/doc/listeventsystem.h \
    widgets/doc/panel.h \
    widgets/doc/treemapsensor.h \
    widgets/doc/treeserverdevice.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
