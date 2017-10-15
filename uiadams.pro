#-------------------------------------------------
#
# Project created by QtCreator 2017-10-10T17:00:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uiadams
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    SimpleGPIO.cpp \
    workerbutton.cpp

HEADERS  += mainwindow.h \
    SimpleGPIO.h \
    workerbutton.h

FORMS    += mainwindow.ui
