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
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    timer.cpp

HEADERS += \
    customamount.h \
    drawmoney.h \
    login.h \
    mainwindow.h \
    timer.h

FORMS += \
    customamount.ui \
    drawmoney.ui \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




win32: LIBS += -LC:/Users/Pasanteeri/Desktop/group6-DLLPincode/DLL-pincode/build/debug/ -lDLL-pincode

INCLUDEPATH += C:/Users/Pasanteeri/Desktop/group6-DLLPincode/DLL-pincode
DEPENDPATH += C:/Users/Pasanteeri/Desktop/group6-DLLPincode/DLL-pincode


win32: LIBS += -LC:/Users/Pasanteeri/Desktop/group6-CRUD/DLLRestApi/build/debug/ -lDLLRestApi

INCLUDEPATH += C:/Users/Pasanteeri/Desktop/group6-CRUD/DLLRestApi
DEPENDPATH += C:/Users/Pasanteeri/Desktop/group6-CRUD/DLLRestApi
