<<<<<<< HEAD
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    home.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    sign.cpp \
    why.cpp

HEADERS += \
    home.h \
    login.h \
    mainwindow.h \
    sign.h \
    why.h

FORMS += \
    home.ui \
    login.ui \
    mainwindow.ui \
    sign.ui \
    why.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
=======
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    donation.cpp \
    events.cpp \
    home.cpp \
    login.cpp \
    login2.cpp \
    main.cpp \
    req.cpp \
    sign.cpp \
    startt.cpp \
    why.cpp

HEADERS += \
    donation.h \
    events.h \
    home.h \
    login.h \
    login2.h \
    req.h \
    sign.h \
    startt.h \
    why.h

FORMS += \
    donation.ui \
    events.ui \
    home.ui \
    login.ui \
    login2.ui \
    req.ui \
    sign.ui \
    startt.ui \
    why.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
>>>>>>> 2b3e0b8 (first commit)
