#include "motorcontrol.h"

bool SendSuccFlag = 0;
bool MAXSPEEDFlag = 0;
unsigned int MAXSPEED = 3000;
bool ControlMode = 0;
unsigned int motorPar[6];

MotorControl::MotorControl(QObject *parent):QThread(parent)
{

}

void MotorControl::SerialInit(const QString portName, const QString baudRate, const QString dataBits, const QString stopBits)
{
    serial.setPortName(portName);
    if(baudRate==tr("9600"))
        serial.setBaudRate(QSerialPort::Baud9600);
    else if(baudRate==tr("115200"))
        serial.setBaudRate(QSerialPort::Baud115200);
    else if(baudRate==tr("2400"))
        serial.setBaudRate(QSerialPort::Baud2400);
    else if(baudRate==tr("4800"))
        serial.setBaudRate(QSerialPort::Baud4800);
    else if(baudRate==tr("19200"))
        serial.setBaudRate(QSerialPort::Baud19200);

    if(dataBits==tr("8"))
        serial.setDataBits(QSerialPort::Data8);
    else if(dataBits==tr("7"))
        serial.setDataBits(QSerialPort::Data7);
    else if(dataBits==tr("6"))
        serial.setDataBits(QSerialPort::Data6);

    if(stopBits==tr("1"))
        serial.setStopBits(QSerialPort::OneStop);
    else if(stopBits==tr("2"))
        serial.setStopBits(QSerialPort::TwoStop);

    serial.setFlowControl(QSerialPort::NoFlowControl);
    serial.setParity(QSerialPort::NoParity);
    serial.close();

    if(serial.open(QIODevice::ReadWrite))
    {
        connect(&serial,SIGNAL(readyRead()),this,SLOT(readMyCom()));

        QString SendData;
        SendData = QString::number(MAXSPEED);
        SendData = "SP" + SendData + "\r";
        serial.write(SendData.toLatin1());

        emit SerialOpenSucc();
    }
    else
    {
        emit SerialOpenFail();
        return;
    }
}

void MotorControl::SerialClose()
{
    serial.close();
}

void MotorControl::run()
{
    QString SendData;

    // 1.to avoid motor speed too fast
    //make sure MAXSPEED be set
    if(MAXSPEEDFlag == 0)
    {
        SendData = QString::number(MAXSPEED);
        SendData = "SP" + SendData + "\r";
        serial.write(SendData.toLatin1());
        SendSuccFlag = 0;
    }

    // 2.
    else
    {
        // Cable tension control mode
        if(ControlMode == 0)
        {
            while(SendSuccFlag == 0)
            {
                SendData = QString::number(motorPar[0]);
                SendData = "0C" + SendData + "\r";
                serial.write(SendData.toLatin1());

                SendData = QString::number(motorPar[1]);
                SendData = "1C" + SendData + "\r";
                serial.write(SendData.toLatin1());

                SendData = QString::number(motorPar[2]);
                SendData = "2C" + SendData + "\r";
                serial.write(SendData.toLatin1());

                SendData = QString::number(motorPar[3]);
                SendData = "3C" + SendData + "\r";
                serial.write(SendData.toLatin1());

                SendData = QString::number(motorPar[4]);
                SendData = "4C" + SendData + "\r";
                serial.write(SendData.toLatin1());

                SendData = QString::number(motorPar[5]);
                SendData = "5C" + SendData + "\r";
                serial.write(SendData.toLatin1());
            }
        }
        else
        {
            // do nothing for now
        }
    }
}

void MotorControl::readMyCom()
{
    QByteArray temp = serial.readAll();
    if(temp == "OK\r\n")
    {
        MAXSPEEDFlag = 1;
        SendSuccFlag = 1;
    }
}

//int
int MotorControl::QByteArray2Int(QByteArray temp)
{
    unsigned int i;
    int f;
    temp.resize(4);
    i=0;
    i|=((unsigned char)temp.at(0));
    qDebug()<<i<<endl;
    i=i<<4;
    qDebug()<<i<<endl;
    i|=((unsigned char)temp.at(1));
    qDebug()<<i<<endl;
    i=i<<4;
    i|=((unsigned char)temp.at(2));
    i=i<<4;
    i|=((unsigned char)temp.at(3));
    f=*(int*)&i;
    return f;

}


//
char MotorControl::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return ch-ch;
}

//16
QByteArray MotorControl::QString2Hex(QString str)
    {
        QByteArray senddata;
        int hexdata,lowhexdata;
        int hexdatalen = 0;
        int len = str.length();
        senddata.resize(len/2);
        char lstr,hstr;
        for(int i=0; i<len; )
        {
            hstr=str[i].toLatin1();
            if(hstr == ' ')
            {
                i++;
                continue;
            }
            i++;
            if(i >= len)
                break;
            lstr = str[i].toLatin1();
            hexdata = ConvertHexChar(hstr);
            lowhexdata = ConvertHexChar(lstr);
            if((hexdata == 16) || (lowhexdata == 16))
                break;
            else
                hexdata = hexdata*16+lowhexdata;
            i++;
            senddata[hexdatalen] = (char)hexdata;
            hexdatalen++;
        }
        senddata.resize(hexdatalen);
        return senddata;
 }

void MotorControl::MotorParamRec(bool TensionOrAngle, unsigned int *Data)
{
    ControlMode = TensionOrAngle;
    for(int i=0; i<6; i++)
    {
        motorPar[i] = Data[i];
    }
}
