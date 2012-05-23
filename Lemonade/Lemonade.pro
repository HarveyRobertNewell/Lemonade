#-------------------------------------------------
#
# Project created by QtCreator 2012-05-23T19:43:50
#
#-------------------------------------------------

QT       += core gui

TARGET = Lemonade
TEMPLATE = app


SOURCES += main.cpp\
        lemonadelaunch.cpp

HEADERS  += lemonadelaunch.h

FORMS    += lemonadelaunch.ui

CONFIG += mobility
MOBILITY = 

symbian {
    TARGET.UID3 = 0xef568595
    # TARGET.CAPABILITY += 
    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}
