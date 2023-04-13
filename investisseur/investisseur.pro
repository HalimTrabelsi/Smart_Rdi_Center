QT += core gui sql printsupport network

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets
}

CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS
QMAKE_CXXFLAGS += -std=gnu++11

SOURCES += \
    chatsocket.cpp \
    connection.cpp \
    investisseurs.cpp \
    main.cpp \
    mainwindow.cpp \
    messengerconnection.cpp \
    smtp.cpp

HEADERS += \
    chatsocket.h \
    connection.h \
    investisseurs.h \
    mainwindow.h \
    messengerconnection.h \
    smtp.h

FORMS += \
    mainwindow.ui \
    messengerconnection.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
