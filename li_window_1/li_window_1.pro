#-------------------------------------------------
#
# Project created by QtCreator 2017-01-13T21:21:24
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

TARGET = li_window_1  printsupport
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    aboutdialog.cpp \
    getsensordata.cpp \
    motorcontrol.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    aboutdialog.h \
    DeviceListItem.h \
    ImuData.h \
    LpmsDefinitions.h \
    LpmsSensorI.h \
    LpmsSensorManagerI.h \
    getsensordata.h \
    motorcontrol.h

FORMS    += mainwindow.ui \
    aboutdialog.ui

RESOURCES += \
    li.qrc

QT  +=opengl

#LIBS += -lglu
#win32:LIBS += -lOpengl32 \
#                -lglu32 \
#                -lglut
QT += axcontainer
QT  +=  printsupport

LIBS += -LD:/Document_LW/UpperExtremity/QT/li_window_20180427/build-li_window_1-Desktop_Qt_5_9_1_MinGW_32bit-Debug/lib/x64/ -lLpSensor64
LIBS += -LD:/Document_LW/UpperExtremity/QT/li_window_20180427/build-li_window_1-Desktop_Qt_5_9_1_MinGW_32bit-Debug/lib/x64/ -lLpSensorD64

LIBS += \
    ../../../../../SFSetupPath/Qt/5.9.1/msvc2015_64/lib/Qt5OpenGLd.lib

