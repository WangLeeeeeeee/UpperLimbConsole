#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include <QThread>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include "mainwindow.h"
#include <QMessageBox>

Ui::MainWindow *ui;

class MotorControl:public QThread
{
    Q_OBJECT
public:
    explicit MotorControl(QObject *parent=0);

private:
    void run();
    int QByteArray2Int(QByteArray temp);
    static char ConvertHexChar(char ch);
    static QByteArray QString2Hex(QString str);
    void SendControlData();
    QSerialPort serial; // declare a serial com

private slots:
    void readMyCom();
    void SerialInit();
    void SerialClose();
};

#endif // MOTORCONTROL_H
