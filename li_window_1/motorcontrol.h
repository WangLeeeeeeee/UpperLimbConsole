#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include <QThread>
#include <QDebug>
#include "mainwindow.h"
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>

//Ui::MainWindow *ui;

// set the com send interval
#define TIME_SEND_INTERVAL 200

class MotorControl:public QThread
{
    Q_OBJECT
public:
    explicit MotorControl(QObject *parent=0);

private:
    void run();
    QSerialPort serial1; // declare a serial com
    QTimer *send_timer;

private slots:
    void UiParamRec(bool TensionOrAngle, unsigned int *Data);
    void readMyCom1();
    void sendCommand();

signals:
    void MotorParamSend(unsigned int *torque);

};

#endif // MOTORCONTROL_H
