TEMPLATE      = lib
CONFIG       += plugin console
QT           += core

INCLUDEPATH  += ../../app

HEADERS       = MyPlugin.h
SOURCES       = MyPlugin.cpp
TARGET        = $$qtLibraryTarget(MyPlugin)
DESTDIR       = ../../plugins
