#-------------------------------------------------
#
# Project created by QtCreator 2016-02-15T14:02:11
#
#-------------------------------------------------
#DEPTH = ..
#include(qjsonrpc.pri)
#include(/qjsonrpc/qjsonrpc.pri)

INCLUDEPATH += $${QJSONRPC_INCLUDEPATH} \
               $${QJSONRPC_INCLUDEPATH}/json
LIBS += -L$${DEPTH}/src $${QJSONRPC_LIBS}
QT = core network testlib
QT += gui
CONFIG -= app_bundle
CONFIG += testcase no_testcase_installs

unix:!macx:QMAKE_RPATHDIR += $${OUT_PWD}/$${DEPTH}/src
macx {
    QMAKE_RPATHDIR += @loader_path/$${DEPTH}/src
    QMAKE_LFLAGS += -Wl,-rpath,@loader_path/$${DEPTH}/src
}


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = earthdollar
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    farmsetting.cpp

HEADERS  += mainwindow.h \
    farmsetting.h

FORMS    += mainwindow.ui \
    farmsetting.ui

RESOURCES += \
    icon.qrc

RC_FILE = earthdollar.rc

#DISTFILES +=
