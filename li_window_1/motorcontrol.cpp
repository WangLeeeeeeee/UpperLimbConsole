#include "motorcontrol.h"

bool SendSuccFlag = 0;
bool MAXSPEEDFlag = 0;
bool ControlMode = 0;
unsigned int UI[6];
unsigned int MotorParam[6];

MotorControl::MotorControl(QObject *parent):QThread(parent)
{
    serial1.setPortName("COM16");
    serial1.setBaudRate(QSerialPort::Baud9600);
    serial1.setDataBits(QSerialPort::Data8);
    serial1.setStopBits(QSerialPort::OneStop);
    serial1.setFlowControl(QSerialPort::NoFlowControl);
    serial1.setParity(QSerialPort::NoParity);
    serial1.close();

    if(serial1.open(QIODevice::ReadWrite))
    {
        connect(&serial1,SIGNAL(readyRead()),this,SLOT(readMyCom1()));
        QMessageBox::information(0,tr("open sucessful"),tr("sucessful open com"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(0,tr("open failed"),tr("cannot open com"),QMessageBox::Ok);
        return;
    }

    send_timer = new QTimer(this);
    connect(send_timer, SIGNAL(timeout()), this, SLOT(sendCommand()));
    int send_interval = TIME_SEND_INTERVAL;
    send_timer->start(send_interval);
}


void MotorControl::run()
{

    for(int i=0; i<6; i++)
    {
        MotorParam[i] = UI[i];
    }
    emit MotorParamSend(MotorParam);
}



void MotorControl::UiParamRec(bool TensionOrAngle, unsigned int *Data)
{
    ControlMode = TensionOrAngle;
    for(int i=0; i<6; i++)
    {
        UI[i] = Data[i];
    }
    qDebug()<<UI;
}

void MotorControl::readMyCom1()
{
    // do something here
    QString SendData1;
    SendData1 = "isahioashd";
    serial1.write(SendData1.toLatin1());
}

void MotorControl::sendCommand()
{
    // do something here
    QString SendData1;
    SendData1 = "isahioashd";
    serial1.write(SendData1.toLatin1());
}
