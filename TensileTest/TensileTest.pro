QT       += core gui printsupport sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    graphic.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    serialports.cpp \
    settings.cpp \
    threadedtimer.cpp \
    dbconnector.cpp

HEADERS += \
    graphic.h \
    mainwindow.h \
    qcustomplot.h \
    serialports.h \
    settings.h \
    threadedtimer.h \
    dbconnector.h

FORMS += \
    mainwindow.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
