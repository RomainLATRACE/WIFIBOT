#-------------------------------------------------
#
# Project created by QtCreator 2018-05-29T13:44:32
#
#-------------------------------------------------

QT       += core gui
QT += webenginewidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WifiBot
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    connexionTcp.cpp \
    capteurs.cpp

HEADERS  += mainwindow.h \
    connexionTcp.h \
    capteurs.h

FORMS    += mainwindow.ui

RESOURCES += \
    ressources.qrc
