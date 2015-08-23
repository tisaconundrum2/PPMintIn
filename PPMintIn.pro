#-------------------------------------------------
#
# Project created by QtCreator 2015-08-21T18:39:43
#
#-------------------------------------------------

QT       -= core gui

TARGET = PPMintIn
TEMPLATE = lib

DEFINES += PPMINTIN_LIBRARY

SOURCES += ppmintin.cpp

HEADERS += ppmintin.h\
    example.ino \
    PinChangeInt.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
