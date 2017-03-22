#-------------------------------------------------
#
# Project created by QtCreator 2017-03-22T12:54:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-05-gui-widgets
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bank.cpp \
    bankaccount.cpp \
    logger.cpp

HEADERS  += mainwindow.h \
    bank.h \
    bankaccount.h \
    logger.h

FORMS    += mainwindow.ui
