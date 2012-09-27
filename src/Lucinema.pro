QT += core gui
TARGET = Lucinema
TEMPLATE = app

DEPENDPATH += \
    . \
    LucinemaApplication

DEFINES += \
    DEBUG

#For building with profiling:
#QMAKE_CXXFLAGS_DEBUG += -pg
#QMAKE_LFLAGS_DEBUG += -pg

# Input
include( ./LucinemaApplication/LucinemaApplication.pri )
