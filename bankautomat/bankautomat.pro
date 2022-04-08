QT       += core gui
QT +=network
QT +=widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customamount.cpp \
    drawmoney.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    customamount.h \
    drawmoney.h \
    mainwindow.h

FORMS += \
    customamount.ui \
    drawmoney.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



win32: LIBS += -L$$PWD/../../../../../Ohjelmointi/DLLRestApi/build/debug/ -lDLLRestApi

INCLUDEPATH += $$PWD/../../../../../Ohjelmointi/DLLRestApi
DEPENDPATH += $$PWD/../../../../../Ohjelmointi/DLLRestApi
