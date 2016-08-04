TEMPLATE = subdirs
SUBDIRS += src \
           tests
CONFIG += ordered

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/src/release/ -lqjsonrpc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/src/debug/ -lqjsonrpc
else:unix: LIBS += -L$$OUT_PWD/src/ -lqjsonrpc

INCLUDEPATH += $$PWD/src
DEPENDPATH += $$PWD/src
