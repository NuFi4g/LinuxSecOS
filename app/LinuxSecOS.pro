# *******************************************
# @Created by NuFi4g (2021-03-02)
# @Hit:
# *******************************************

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


SOURCES += \
    main.cpp \
    linuxsecos.cpp \
    processinfo.cpp \
    securitymanage.cpp \
    statusinfo.cpp

HEADERS += \
    linuxsecos.h \
    processinfo.h \
    securitymanage.h \
    statusinfo.h

FORMS += \
    linuxsecos.ui

TRANSLATIONS += \
    LinuxSecOS_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
