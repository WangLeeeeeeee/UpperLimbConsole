#include "vrdisplay.h"



VRDisplay::VRDisplay(QObject *parent):QThread(parent)
{

}


void VRDisplay::run()
{

}

void VRDisplay::slotVRSerialOpen()
{
    vrSerial.setPortName("COM16");
    vrSerial.setBaudRate(QSerialPort::Baud9600);
    vrSerial.setDataBits(QSerialPort::Data8);
    vrSerial.setStopBits(QSerialPort::OneStop);
    vrSerial.setFlowControl(QSerialPort::NoFlowControl);
    vrSerial.setParity(QSerialPort::NoParity);
    vrSerial.close();

    if(vrSerial.open(QIODevice::ReadWrite))
    {
        connect(&vrSerial,SIGNAL(readyRead()),this,SLOT(slotReadVRcom()));
        QMessageBox::information(0,tr("open sucessful"),tr("sucessful open com"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(0,tr("open failed"),tr("cannot open com"),QMessageBox::Ok);
        return;
    }

    vrTimer = new QTimer(this);
    connect(vrTimer, SIGNAL(timeout()), this, SLOT(slotSendVRdata()));
    int send_interval = TIME_SEND_INTERVAL;
    vrTimer->start(send_interval);
}

void VRDisplay::slotSendVRdata()
{
    QString head = "f0";
    QString SendData;
    //double a = 100.03;
    //SendData = QString::number(int(420));
    // 发送帧头
    for(int i=0; i<8; i++)
    {
        vrSerial.write(QString2Hex(head));
    }
    qDebug()<<"shoulder_y:"<<shoulder_y[receive_count_angle-1]<<endl;
    qDebug()<<"shoulder_z:"<<shoulder_z[receive_count_angle-1]<<endl;
    qDebug()<<"shoulder_x:"<<shoulder_x[receive_count_angle-1]<<endl;
    qDebug()<<"elbow_y:"<<elbow_y[receive_count_angle-1]<<endl;
    SendData = QString::number(double(-(elbow_y[receive_count_angle-1]+8.15)));//elbow qianqu
    vrSerial.write(SendData.toLatin1());
    SendData = QString::number(double(-(shoulder_y[receive_count_angle-1]+5.13)+180));//shoulder qianqu
    vrSerial.write(SendData.toLatin1());
    SendData = QString::number(double(-(shoulder_x[receive_count_angle-1]-67)+115.2));//shoulder waizhan
    vrSerial.write(SendData.toLatin1());
    SendData = QString::number(double(shoulder_z[receive_count_angle-1]+45+172.36));//shoulder neixuan
    vrSerial.write(SendData.toLatin1());
}

void VRDisplay::slotReadVRcom()
{
    // do something here
    QString SendData1;
    SendData1 = "isahioashd";
    vrSerial.write(SendData1.toLatin1());
}

char VRDisplay::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return ch-ch;
}

QByteArray VRDisplay::QString2Hex(QString str)
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
