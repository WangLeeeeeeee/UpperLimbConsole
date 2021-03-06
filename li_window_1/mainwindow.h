#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QMessageBox>
#include <QInputDialog>
#include <QStandardItemModel>
#include <QFile>
#include <QFileDialog>
#include <QInputDialog>
#include <QTextStream>
#include <QSlider>
#include "qcustomplot.h"
#include "aboutdialog.h"
#include "getsensordata.h"
#include "plotcurves.h"
//#include "motorcontrol.h"
class MotorControl;
#include <QtSerialPort/QSerialPort>
//#include "myglwidget.h"

// set the read/write com delay
//#define TIME_OUT  2

// set the read com interval
//#define TIMER_INTERVAL 10

// set the plot interval
#define TIME_PLOT_INTERVAL 200


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void startInit();


protected:
    void setActionsEnable(bool status);
    void setComboxEnable(bool status);
    
private slots:
    void on_actionOpen_triggered();
    void on_actionClose_triggered();
    void on_actionInfor_triggered();
    void on_actionExit_triggered();
    void on_actionAdd_triggered();
    void on_actionSave_triggered();
    void on_actionClean_triggered();
    void on_sendmsgButton_clicked();
    void readMyCom();
    void plot();
    void setLine1EditValue();
    void setLine2EditValue();
    void setLine3EditValue();
    void setLine4EditValue();
    void setLine5EditValue();
    void setLine6EditValue();
    void setLine7EditValue();
    void setLine8EditValue();
    void setLine9EditValue();
    void setLine10EditValue();
    void Plot_Init();
    void MotorSendControl(unsigned int *Motparam);

    void on_Openglaction_triggered();

    void on_dataGetButton_clicked();

    void on_dataStopGetButton_clicked();

private:
    aboutdialog aboutdlg;
    QSerialPort serial; // declare a serial com
    QTimer *plot_timer;
    unsigned int plot_timerdly;//set the serial port receive/send interval
    unsigned int rece_timerdly;
    GetSensordata *getsensordata;
    MotorControl *motorcontrol;
    Ui::MainWindow *ui;

signals:
    void serialControl(bool TensionOrAngle, unsigned int *Data);
};

#endif // MAINWINDOW_H
