#include "motorcontrol.h"

bool SendSuccFlag = 0;
bool MAXSPEEDFlag = 0;
bool control_mode = 0;
unsigned int UI[6];
unsigned int MotorParam[6];
/*
float KP_TENSION[6] = {1,1,1,1,1};
float KI_TENSION[6] = {0,0,0,0,0};
float KD_TENSION[6] = {0,0,0,0,0};
float PERROR_TENSION[6] = {0,0,0,0,0};
float LERROR_TENSION[6] = {0,0,0,0,0};
double tensionCnt[6];
*/

typedef struct Control
{
    float TensionCnt;
    float Tension_error;
    float Vel_out;
    float Error_Integer;
}Control;
PID_TENSION TENSION_PID[6]={{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0}};
PID_TENSION TENSION_PID_1[6]={{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0},{1.6,0,0.5,0,0}};
Control Now;
Control Past;
float MAXSPEED=300;
float MINSPEED=-200;
float tension_cnt[6];
float tension_ctrlval[6];

MotorControl::MotorControl(QObject *parent):QThread(parent)
{

}


void MotorControl::run()
{

}



void MotorControl::slotUiParRec(bool TensionOrAngle, unsigned int *Data)
{
    if(TensionOrAngle == 0)
    {
        control_mode = 1;
        for(int i=0; i<4; i++)
        {
            tension_ctrlval[i] = Data[i];
        }
    }

    /*
    ControlMode = TensionOrAngle;
    for(int i=0; i<6; i++)
    {
        UI[i] = Data[i];
    }




    qDebug()<<UI;
    */
}

void MotorControl::readMyCom1()
{
    // do something here
    QString SendData1;
    SendData1 = "isahioashd";
    serial1.write(SendData1.toLatin1());
}

// Send the command data every fixed time interval
void MotorControl::sendCommand()
{
    switch(control_mode){
    case 0:
        qDebug()<<"now the control mode is 0"; break; // do nothing
    case 1:
        for(int i=0; i<6; i++){
            Tension_Control(i,tension_ctrlval[i]);
        }break;

    }

}

// Com open configure which connect with the 'open com' button
void MotorControl::slotSerialInit()
{
    serial1.setPortName("COM10");
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

// Get the tension data and the angle data
void MotorControl::UpdateAllState()
{
    tension_cnt[0] = tension_y[receive_count_tension-1];
    tension_cnt[1] = tension_y2[receive_count_tension-1];
    tension_cnt[2] = tension_y3[receive_count_tension-1];
    tension_cnt[3] = tension_y4[receive_count_tension-1];
    tension_cnt[4] = tension_y5[receive_count_tension-1];
    tension_cnt[5] = tension_y6[receive_count_tension-1];

    qDebug()<<"now the tension is: "<<tension_cnt[2]<<endl;
}

// Calculate PID
float MotorControl::PID_Calculate(PID_TENSION *pid_tension,float ThisError)
{
    float pError,dError,iError,temp;
    pError=ThisError-pid_tension->LastError;
    iError=ThisError;
    dError=ThisError-2*(pid_tension->LastError)+pid_tension->PreError;

    temp=pid_tension->KP*pError+pid_tension->KI*iError+pid_tension->KD*dError;

    pid_tension->PreError=pid_tension->LastError;
    pid_tension->LastError=ThisError;

    return temp;
}

// Control the index motor with i tension value
void MotorControl::Tension_Control(int index,float i)
{
    QString SendData;
    float speed_out;

    UpdateAllState();
    qDebug()<<"the aim tension is:"<<i<<endl;

    Now.TensionCnt=tension_cnt[index];
    Now.Tension_error=i-Now.TensionCnt;

    if(Now.Tension_error>100)
    {
        static float Vel_out_last=0;
        Now.Vel_out=PID_Calculate((TENSION_PID+index),Now.Tension_error);
        Past.Tension_error=Now.Tension_error;
        Past.Vel_out=Now.Vel_out;
        Past.Error_Integer=Now.Error_Integer;
        Past.TensionCnt=Now.TensionCnt;
        speed_out=Now.Vel_out+Vel_out_last;

        //if(speed_out>MAXSPEED)	speed_out=MAXSPEED;
        //if(speed_out<MINSPEED)	speed_out=MINSPEED;

        Vel_out_last=speed_out;
    }
    else if(Now.Tension_error<-100)
    {
        static float Vel_out_last=0;
        Now.Vel_out=PID_Calculate((TENSION_PID_1+index),Now.Tension_error);
        Past.Tension_error=Now.Tension_error;
        Past.Vel_out=Now.Vel_out;
        Past.Error_Integer=Now.Error_Integer;
        Past.TensionCnt=Now.TensionCnt;
        speed_out=Now.Vel_out+Vel_out_last;

        //if(speed_out>MAXSPEED)	speed_out=MAXSPEED;
        //if(speed_out<MINSPEED)	speed_out=MINSPEED;

        Vel_out_last=speed_out;
    }
    /*
    if((Now.Tension_error>100)||(Now.Tension_error<-100))
    {
        static float Vel_out_last=0;
        Now.Vel_out=PID_Calculate((TENSION_PID+index),Now.Tension_error);
        Past.Tension_error=Now.Tension_error;
        Past.Vel_out=Now.Vel_out;
        Past.Error_Integer=Now.Error_Integer;
        Past.TensionCnt=Now.TensionCnt;
        speed_out=Now.Vel_out+Vel_out_last;

        //if(speed_out>MAXSPEED)	speed_out=MAXSPEED;
        //if(speed_out<MINSPEED)	speed_out=MINSPEED;

        Vel_out_last=speed_out;
    }
    */
    else speed_out=0;

    SendData = QString::number(long(index)) + "SP" + QString::number(long(MAXSPEED)) + "\r";
    serial1.write(SendData.toLatin1());
    SendData = QString::number(long(index)) + "LR" + QString::number(long(speed_out)) + "\r";
    qDebug()<<SendData<<endl;
    serial1.write(SendData.toLatin1());
    SendData = "M\r";
    serial1.write(SendData.toLatin1());
}

void MotorControl::slotBeforeTigh()
{
    control_mode = 1;
    for(int i=0; i<6; i++)
        tension_ctrlval[i] = 400;
}
