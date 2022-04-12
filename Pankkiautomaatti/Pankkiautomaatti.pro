QT       += core gui
QT += network
QT +=widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    drawmoney.cpp \
    drawmoneycustom.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    drawmoney.h \
    drawmoneycustom.h \
    login.h \
    mainwindow.h

FORMS += \
    drawmoney.ui \
    drawmoneycustom.ui \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../DLLRestApi/build/debug/ -lDLLRestApi

INCLUDEPATH += $$PWD/../DLLRestApi
DEPENDPATH += $$PWD/../DLLRestApi

win32: LIBS += -L$$PWD/'../../sovellusprojekti-esim/dll test/group6/DLL-pincode/build/debug/' -lDLL-pincode

INCLUDEPATH += $$PWD/'../../sovellusprojekti-esim/dll test/group6/DLL-pincode'
DEPENDPATH += $$PWD/'../../sovellusprojekti-esim/dll test/group6/DLL-pincode'


win32: LIBS += -L$$PWD/../DLLRFIDtesti/build/debug/ -lDLLRFIDtesti

INCLUDEPATH += $$PWD/../DLLRFIDtesti
DEPENDPATH += $$PWD/../DLLRFIDtesti
