QT -= gui
QT += widgets

TEMPLATE = lib
DEFINES += DLLPINCODE_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dllpincode.cpp \
    pincode.cpp

HEADERS += \
    DLL-pincode_global.h \
    dllpincode.h \
    pincode.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

FORMS += \
    pincode.ui
