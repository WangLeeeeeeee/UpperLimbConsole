#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include <QThread>
#include <QDebug>
#include "mainwindow.h"
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
//#include "currentpid.h"
#include "getsensordata.h"

typedef struct PID_TENSION
{
    float KP;
    float KI;
    float KD;
    float PreError;
    float LastError;
}PID_TENSION;


// set the com send interval
#define TIME_SEND_INTERVAL 50

class MotorControl:public QThread
{
    Q_OBJECT
public:
    explicit MotorControl(QObject *parent=0);

private:
    void run();
    QSerialPort serial1; // declare a serial com
    QTimer *send_timer;
    float PID_Calculate(PID_TENSION *pid_tension,float ThisError);
    void Tension_Control(int index,float i);
    void UpdateAllState(void);

private slots:
    void slotUiParRec(bool TensionOrAngle, unsigned int *Data);
    void readMyCom1();
    void sendCommand();
    void slotSerialInit();
    void slotBeforeTigh();


};

#endif // MOTORCONTROL_H
