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
    system/tree/basesys.cpp \
    system/tree/device.cpp \
    system/tree/iodevice.cpp \
    system/tree/port.cpp \
    system/tree/server.cpp \
    system/tree/treesysmodel.cpp

HEADERS += \
    application.h \
    mainwindow.h \
    system/tree/basesys.h \
    system/tree/device.h \
    system/tree/iodevice.h \
    system/tree/port.h \
    system/tree/server.h \
    system/tree/treesysmodel.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
