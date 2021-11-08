QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    time15successwindow.cpp \
    time25successwindow.cpp \
    time5successwindow.cpp

HEADERS += \
    mainwindow.h \
    time15successwindow.h \
    time25successwindow.h \
    time5successwindow.h

FORMS += \
    mainwindow.ui \
    time15successwindow.ui \
    time25successwindow.ui \
    time5successwindow.ui

VERSION = 1.2.1.1
QMAKE_TARGET_COMPANY = Konsilerinos C
QMAKE_TARGET_PRODUCT = Revolution timer!
QMAKE_TARGET_DESCRIPTION = Timer
QMAKE_TARGET_COPYRIGHT = Konsilerinos

RC_ICONS = Resources/Icon/Icon.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Res.qrc
