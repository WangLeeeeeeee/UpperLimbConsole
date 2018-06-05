#include "motorcontrol.h"

MotorControl::MotorControl(QObject *parent):QThread(parent)
{

}

void MotorControl::SerialInit()
{
    serial.setPortName(ui->portNameComboBox->currentText());

    if(ui->baudRateCombox->currentText()==tr("9600"))
        serial.setBaudRate(QSerialPort::Baud9600);
    else if(ui->baudRateCombox->currentText()==tr("115200"))
        serial.setBaudRate(QSerialPort::Baud115200);
    else if(ui->baudRateCombox->currentText()==tr("2400"))
        serial.setBaudRate(QSerialPort::Baud2400);
    else if(ui->baudRateCombox->currentText()==tr("4800"))
        serial.setBaudRate(QSerialPort::Baud4800);
    else if(ui->baudRateCombox->currentText()==tr("19200"))
        serial.setBaudRate(QSerialPort::Baud19200);

    if(ui->dataBitsComboBox->currentText()==tr("8"))
        serial.setDataBits(QSerialPort::Data8);
    else if(ui->dataBitsComboBox->currentText()==tr("7"))
        serial.setDataBits(QSerialPort::Data7);
    else if(ui->dataBitsComboBox->currentText()==tr("6"))
        serial.setDataBits(QSerialPort::Data6);

    if(ui->stopBitsComboBox->currentText()==tr("1"))
        serial.setStopBits(QSerialPort::OneStop);
    else if(ui->stopBitsComboBox->currentText()==tr("2"))
        serial.setStopBits(QSerialPort::TwoStop);

    serial.setFlowControl(QSerialPort::NoFlowControl);
    serial.setParity(QSerialPort::NoParity);
    serial.close();
    if(serial.open(QIODevice::ReadWrite))
    {
        connect(&serial,SIGNAL(readyRead()),this,SLOT(readMyCom()));
        QMessageBox::information(this,tr("open sucessful"),tr("sucessful open com")+ui->portNameComboBox->currentText(),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(this,tr("open failed"),tr("cannot open com")+ui->portNameComboBox->currentText()+tr("\n com cannot be open or be used"),QMessageBox::Ok);
        return;
    }
}

void MotorControl::SerialClose()
{
    serial.close();
}

void MotorControl::run()
{
    //QString SendData="V1000\r";

    QString SendData;
    unsigned int speed = 2000;
    SendData = QString::number(speed);
    SendData = "V" + SendData + "\r";
    ui->elbpresPlot->addGraph();
    //MainWindow.serial.write(SendData.toLatin1());
    //MainWindow::serial.write(SendData.toLatin1());
    //serial.write(SendData.toLatin1());


    /*
    unsigned int speed;

    speed = 0;

    // Send some return to clean command before
    for(int i=0; i<5; i++)
    {
        myCom->write(RETURN);
    }

    // Speed control test
    for(int i=0; i<10; i++)
    {
        speed += 200;
        myCom->write(V);
        myCom->write(speed  /   1000    +   0x30);
        myCom->write(speed  %   1000    /   100 +   0x30);
        myCom->write(speed  %   100     /   10  +   0x30);
        myCom->write(speed  %   10      +   0x30);
        myCom->write(RETURN);
    }
    */
    /*
    QString Return = "\r";
    QString Head = "SP";
    QString speed_limit = "3000";
    myCom->write(QString2Hex(Return));
    myCom->write(QString2Hex(Return));
    myCom->write(QString2Hex(Return));
    myCom->write(QString2Hex(Return));
    myCom->write(QString2Hex(Head));
    myCom->write(QString2Hex(speed_limit));
    */
    /*
    QString t="0";
    QString neg="1";
    QString head="ff";
    QString end="aa";
    QString cabel_con="01";
    QString joint_con="02";

    myCom->write(QString2Hex(head));//

    //
    if(ui->cabel_RadioButton->isChecked())
    {
        myCom->write(QString2Hex(cabel_con));

        if(ui->horizontalSlider->value()<1000)
        {
            myCom->write(t.toAscii());
            myCom->write(ui->sendMsgLineEdit->text().toAscii());
        }
        else
            myCom->write(ui->sendMsgLineEdit->text().toAscii());
        if(ui->horizontalSlider2->value()<1000)
        {
            myCom->write(t.toAscii());
            myCom->write(ui->sendMsgLineEdit2->text().toAscii());
        }
        else
            myCom->write(ui->sendMsgLineEdit2->text().toAscii());
        if(ui->horizontalSlider3->value()<1000)
        {
            myCom->write(t.toAscii());
            myCom->write(ui->sendMsgLineEdit3->text().toAscii());
        }
        else
            myCom->write(ui->sendMsgLineEdit3->text().toAscii());
        if(ui->horizontalSlider4->value()<1000)
        {
            myCom->write(t.toAscii());
            myCom->write(ui->sendMsgLineEdit4->text().toAscii());
        }
        else
            myCom->write(ui->sendMsgLineEdit4->text().toAscii());
        if(ui->horizontalSlider5->value()<1000)
        {
            myCom->write(t.toAscii());
            myCom->write(ui->sendMsgLineEdit5->text().toAscii());
        }
        else
            myCom->write(ui->sendMsgLineEdit5->text().toAscii());
        if(ui->horizontalSlider6->value()<1000)
        {
            myCom->write(t.toAscii());
            myCom->write(ui->sendMsgLineEdit6->text().toAscii());
        }
        else
            myCom->write(ui->sendMsgLineEdit6->text().toAscii());
    }
    //
    else
    {
        myCom->write(QString2Hex(joint_con));
        //x
        if(ui->horizontalSlider7->value()<0)
        {
            myCom->write(neg.toAscii());
            QString send_shx=QString("%1").arg(-(ui->horizontalSlider7->value()));

            if(ui->horizontalSlider7->value()<-10)
            {
                myCom->write(send_shx.toAscii());
            }
            else
            {
                myCom->write(t.toAscii());
                myCom->write(send_shx.toAscii());
            }
        }
        else
        {
            myCom->write(t.toAscii());
            if(ui->horizontalSlider7->value()<10)
            {
                myCom->write(t.toAscii());
                myCom->write(ui->sendMsgLineEdit7->text().toAscii());
            }
            else
                myCom->write(ui->sendMsgLineEdit7->text().toAscii());
        }
        //y
        if(ui->horizontalSlider8->value()<0)
        {
            myCom->write(neg.toAscii());
            QString send_shy=QString("%1").arg(-(ui->horizontalSlider8->value()));

            if(ui->horizontalSlider8->value()<-10)
            {
                myCom->write(send_shy.toAscii());
            }
            else
            {
                myCom->write(t.toAscii());
                myCom->write(send_shy.toAscii());
            }
        }
        else
        {
            myCom->write(t.toAscii());
            if(ui->horizontalSlider8->value()<10)
            {
                myCom->write(t.toAscii());
                myCom->write(ui->sendMsgLineEdit8->text().toAscii());
            }
            else
                myCom->write(ui->sendMsgLineEdit8->text().toAscii());
        }
        //z
        if(ui->horizontalSlider9->value()<0)
        {
            myCom->write(neg.toAscii());
            QString send_shz=QString("%1").arg(-(ui->horizontalSlider9->value()));

            if(ui->horizontalSlider9->value()<-10)
            {
                myCom->write(send_shz.toAscii());
            }
            else
            {
                myCom->write(t.toAscii());
                myCom->write(send_shz.toAscii());
            }
        }
        else
        {
            myCom->write(t.toAscii());
            if(ui->horizontalSlider9->value()<10)
            {
                myCom->write(t.toAscii());
                myCom->write(ui->sendMsgLineEdit9->text().toAscii());
            }
            else
                myCom->write(ui->sendMsgLineEdit9->text().toAscii());
        }
        //
        if(ui->horizontalSlider10->value()<0)
        {
            myCom->write(neg.toAscii());
            QString send_el=QString("%1").arg(-(ui->horizontalSlider10->value()));

            if(ui->horizontalSlider10->value()<-10)
            {
                myCom->write(send_el.toAscii());
            }
            else
            {
                myCom->write(t.toAscii());
                myCom->write(send_el.toAscii());
            }
        }
        else
        {
            myCom->write(t.toAscii());
            if(ui->horizontalSlider10->value()<10)
            {
                myCom->write(t.toAscii());
                myCom->write(ui->sendMsgLineEdit10->text().toAscii());
            }
            else
                myCom->write(ui->sendMsgLineEdit10->text().toAscii());
        }
    }

    myCom->write(QString2Hex(end));

    ui->statusBar->showMessage(tr(""));
    */
}

void MotorControl::readMyCom()
{
    QByteArray temp = serial.readAll();
    unsigned char ReceiveFlag = 0;
    if(temp == "OK\r\n")
    {
        ReceiveFlag = 1;
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
