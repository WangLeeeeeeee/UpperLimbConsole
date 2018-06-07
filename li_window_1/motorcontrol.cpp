#include "motorcontrol.h"

bool SendSuccFlag = 0;
bool MAXSPEEDFlag = 0;
bool ControlMode = 0;
unsigned int UI[6];
unsigned int MotorParam[6];

MotorControl::MotorControl(QObject *parent):QThread(parent)
{

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
