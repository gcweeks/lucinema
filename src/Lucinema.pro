QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = Lucinema
TEMPLATE = app

DEPENDPATH += \
    . \
    Catalogue \
    LucinemaApplication \
    Timeline \
    Viewport

DEFINES += \
    DEBUG

#For building with profiling:
#QMAKE_CXXFLAGS_DEBUG += -pg
#QMAKE_LFLAGS_DEBUG += -pg

# Input
include( ./Catalogue/Catalogue.pri )
include( ./LucinemaApplication/LucinemaApplication.pri )
include( ./Timeline/Timeline.pri )
include( ./Viewport/Viewport.pri )
