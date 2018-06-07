#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include <QThread>
#include <QDebug>
#include "mainwindow.h"
#include <QMessageBox>

//Ui::MainWindow *ui;

class MotorControl:public QThread
{
    Q_OBJECT
public:
    explicit MotorControl(QObject *parent=0);

private:
    void run();

private slots:
    void UiParamRec(bool TensionOrAngle, unsigned int *Data);

signals:
    void MotorParamSend(unsigned int *torque);

};

#endif // MOTORCONTROL_H
