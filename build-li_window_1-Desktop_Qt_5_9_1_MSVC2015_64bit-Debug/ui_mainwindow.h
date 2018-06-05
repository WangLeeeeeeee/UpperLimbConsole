/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionInfor;
    QAction *actionSave;
    QAction *actionClean;
    QAction *Openglaction;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QCustomPlot *qCustomPlot;
    QCustomPlot *qCustomPlot2;
    QCustomPlot *qCustomPlot3;
    QCustomPlot *qCustomPlot4;
    QCustomPlot *qCustomPlot5;
    QCustomPlot *qCustomPlot6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *tab_5;
    QCustomPlot *elbpresPlot;
    QLabel *label_30;
    QCustomPlot *shopresPlot;
    QLabel *label_31;
    QWidget *tab_2;
    QCustomPlot *qCustomPlot7;
    QCustomPlot *qCustomPlot8;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *tab_4;
    QCustomPlot *Motor1Plot;
    QCustomPlot *Motor2Plot;
    QCustomPlot *Motor3Plot;
    QCustomPlot *Motor4Plot;
    QCustomPlot *Motor5Plot;
    QCustomPlot *Motor6Plot;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *portNameComboBox;
    QLabel *label_2;
    QComboBox *baudRateCombox;
    QLabel *label_3;
    QComboBox *dataBitsComboBox;
    QLabel *label_4;
    QComboBox *parityComboBox;
    QLabel *label_5;
    QComboBox *stopBitsComboBox;
    QPushButton *dataGetButton;
    QPushButton *dataStopGetButton;
    QWidget *tab_3;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QLineEdit *sendMsgLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSlider *horizontalSlider2;
    QLineEdit *sendMsgLineEdit2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSlider *horizontalSlider3;
    QLineEdit *sendMsgLineEdit3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QSlider *horizontalSlider4;
    QLineEdit *sendMsgLineEdit4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSlider *horizontalSlider5;
    QLineEdit *sendMsgLineEdit5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QSlider *horizontalSlider6;
    QLineEdit *sendMsgLineEdit6;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QSlider *horizontalSlider7;
    QLineEdit *sendMsgLineEdit7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_21;
    QSlider *horizontalSlider8;
    QLineEdit *sendMsgLineEdit8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_22;
    QSlider *horizontalSlider9;
    QLineEdit *sendMsgLineEdit9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_23;
    QSlider *horizontalSlider10;
    QLineEdit *sendMsgLineEdit10;
    QPushButton *sendmsgButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *cabel_RadioButton;
    QRadioButton *joint_RadioButton;
    QMenuBar *menuBar;
    QMenu *menu_N;
    QMenu *menu_I;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1219, 587);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/li/li/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/li/li/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/li/li/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/li/li/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionInfor = new QAction(MainWindow);
        actionInfor->setObjectName(QStringLiteral("actionInfor"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/li/li/mesage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfor->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/li/li/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionClean = new QAction(MainWindow);
        actionClean->setObjectName(QStringLiteral("actionClean"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/li/li/cleanport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClean->setIcon(icon6);
        Openglaction = new QAction(MainWindow);
        Openglaction->setObjectName(QStringLiteral("Openglaction"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/li/li/plot.png"), QSize(), QIcon::Normal, QIcon::Off);
        Openglaction->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 851, 471));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        qCustomPlot = new QCustomPlot(tab_1);
        qCustomPlot->setObjectName(QStringLiteral("qCustomPlot"));
        qCustomPlot->setGeometry(QRect(10, 10, 261, 161));
        qCustomPlot2 = new QCustomPlot(tab_1);
        qCustomPlot2->setObjectName(QStringLiteral("qCustomPlot2"));
        qCustomPlot2->setGeometry(QRect(280, 10, 261, 161));
        qCustomPlot3 = new QCustomPlot(tab_1);
        qCustomPlot3->setObjectName(QStringLiteral("qCustomPlot3"));
        qCustomPlot3->setGeometry(QRect(560, 10, 261, 161));
        qCustomPlot4 = new QCustomPlot(tab_1);
        qCustomPlot4->setObjectName(QStringLiteral("qCustomPlot4"));
        qCustomPlot4->setGeometry(QRect(10, 210, 261, 161));
        qCustomPlot5 = new QCustomPlot(tab_1);
        qCustomPlot5->setObjectName(QStringLiteral("qCustomPlot5"));
        qCustomPlot5->setGeometry(QRect(280, 210, 261, 161));
        qCustomPlot6 = new QCustomPlot(tab_1);
        qCustomPlot6->setObjectName(QStringLiteral("qCustomPlot6"));
        qCustomPlot6->setGeometry(QRect(560, 210, 261, 161));
        label_12 = new QLabel(tab_1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 170, 51, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font.setPointSize(10);
        label_12->setFont(font);
        label_13 = new QLabel(tab_1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(390, 170, 51, 21));
        label_13->setFont(font);
        label_14 = new QLabel(tab_1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(670, 170, 51, 21));
        label_14->setFont(font);
        label_15 = new QLabel(tab_1);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 370, 51, 21));
        label_15->setFont(font);
        label_16 = new QLabel(tab_1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(390, 370, 51, 21));
        label_16->setFont(font);
        label_17 = new QLabel(tab_1);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(670, 370, 51, 21));
        label_17->setFont(font);
        tabWidget->addTab(tab_1, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        elbpresPlot = new QCustomPlot(tab_5);
        elbpresPlot->setObjectName(QStringLiteral("elbpresPlot"));
        elbpresPlot->setGeometry(QRect(50, 20, 781, 201));
        label_30 = new QLabel(tab_5);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(0, 100, 41, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("3ds Light"));
        font1.setPointSize(10);
        label_30->setFont(font1);
        label_30->setWordWrap(false);
        shopresPlot = new QCustomPlot(tab_5);
        shopresPlot->setObjectName(QStringLiteral("shopresPlot"));
        shopresPlot->setGeometry(QRect(50, 240, 781, 201));
        label_31 = new QLabel(tab_5);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(0, 320, 41, 16));
        label_31->setFont(font1);
        label_31->setWordWrap(false);
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        qCustomPlot7 = new QCustomPlot(tab_2);
        qCustomPlot7->setObjectName(QStringLiteral("qCustomPlot7"));
        qCustomPlot7->setGeometry(QRect(60, 10, 761, 181));
        qCustomPlot8 = new QCustomPlot(tab_2);
        qCustomPlot8->setObjectName(QStringLiteral("qCustomPlot8"));
        qCustomPlot8->setGeometry(QRect(60, 220, 761, 181));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 100, 41, 16));
        label_18->setFont(font1);
        label_18->setWordWrap(false);
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 300, 51, 20));
        label_19->setFont(font1);
        label_19->setWordWrap(false);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        Motor1Plot = new QCustomPlot(tab_4);
        Motor1Plot->setObjectName(QStringLiteral("Motor1Plot"));
        Motor1Plot->setGeometry(QRect(10, 10, 261, 161));
        Motor2Plot = new QCustomPlot(tab_4);
        Motor2Plot->setObjectName(QStringLiteral("Motor2Plot"));
        Motor2Plot->setGeometry(QRect(290, 10, 261, 161));
        Motor3Plot = new QCustomPlot(tab_4);
        Motor3Plot->setObjectName(QStringLiteral("Motor3Plot"));
        Motor3Plot->setGeometry(QRect(570, 10, 261, 161));
        Motor4Plot = new QCustomPlot(tab_4);
        Motor4Plot->setObjectName(QStringLiteral("Motor4Plot"));
        Motor4Plot->setGeometry(QRect(10, 210, 261, 161));
        Motor5Plot = new QCustomPlot(tab_4);
        Motor5Plot->setObjectName(QStringLiteral("Motor5Plot"));
        Motor5Plot->setGeometry(QRect(290, 210, 261, 161));
        Motor6Plot = new QCustomPlot(tab_4);
        Motor6Plot->setObjectName(QStringLiteral("Motor6Plot"));
        Motor6Plot->setGeometry(QRect(570, 210, 261, 161));
        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(100, 180, 51, 21));
        label_24->setFont(font);
        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(380, 180, 51, 21));
        label_25->setFont(font);
        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(670, 180, 51, 21));
        label_26->setFont(font);
        label_27 = new QLabel(tab_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 380, 51, 21));
        label_27->setFont(font);
        label_28 = new QLabel(tab_4);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(380, 380, 51, 21));
        label_28->setFont(font);
        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(660, 380, 51, 21));
        label_29->setFont(font);
        tabWidget->addTab(tab_4, QString());
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(870, 10, 311, 501));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 271, 291));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 201, 232));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        portNameComboBox = new QComboBox(layoutWidget);
        portNameComboBox->setObjectName(QStringLiteral("portNameComboBox"));

        verticalLayout->addWidget(portNameComboBox);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        baudRateCombox = new QComboBox(layoutWidget);
        baudRateCombox->setObjectName(QStringLiteral("baudRateCombox"));

        verticalLayout->addWidget(baudRateCombox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        dataBitsComboBox = new QComboBox(layoutWidget);
        dataBitsComboBox->setObjectName(QStringLiteral("dataBitsComboBox"));

        verticalLayout->addWidget(dataBitsComboBox);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        parityComboBox = new QComboBox(layoutWidget);
        parityComboBox->setObjectName(QStringLiteral("parityComboBox"));

        verticalLayout->addWidget(parityComboBox);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        stopBitsComboBox = new QComboBox(layoutWidget);
        stopBitsComboBox->setObjectName(QStringLiteral("stopBitsComboBox"));

        verticalLayout->addWidget(stopBitsComboBox);

        dataGetButton = new QPushButton(tab);
        dataGetButton->setObjectName(QStringLiteral("dataGetButton"));
        dataGetButton->setGeometry(QRect(90, 330, 111, 31));
        dataStopGetButton = new QPushButton(tab);
        dataStopGetButton->setObjectName(QStringLiteral("dataStopGetButton"));
        dataStopGetButton->setGeometry(QRect(90, 380, 111, 31));
        tabWidget_2->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 291, 241));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(10);
        groupBox_2->setFont(font2);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1, 21, 281, 219));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label_6);

        horizontalSlider = new QSlider(layoutWidget1);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout->addWidget(horizontalSlider);

        sendMsgLineEdit = new QLineEdit(layoutWidget1);
        sendMsgLineEdit->setObjectName(QStringLiteral("sendMsgLineEdit"));

        horizontalLayout->addWidget(sendMsgLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        label_7->setFont(font3);
        label_7->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(label_7);

        horizontalSlider2 = new QSlider(layoutWidget1);
        horizontalSlider2->setObjectName(QStringLiteral("horizontalSlider2"));
        horizontalSlider2->setOrientation(Qt::Horizontal);
        horizontalSlider2->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_2->addWidget(horizontalSlider2);

        sendMsgLineEdit2 = new QLineEdit(layoutWidget1);
        sendMsgLineEdit2->setObjectName(QStringLiteral("sendMsgLineEdit2"));

        horizontalLayout_2->addWidget(sendMsgLineEdit2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setTextFormat(Qt::AutoText);

        horizontalLayout_3->addWidget(label_8);

        horizontalSlider3 = new QSlider(layoutWidget1);
        horizontalSlider3->setObjectName(QStringLiteral("horizontalSlider3"));
        horizontalSlider3->setOrientation(Qt::Horizontal);
        horizontalSlider3->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_3->addWidget(horizontalSlider3);

        sendMsgLineEdit3 = new QLineEdit(layoutWidget1);
        sendMsgLineEdit3->setObjectName(QStringLiteral("sendMsgLineEdit3"));

        horizontalLayout_3->addWidget(sendMsgLineEdit3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);
        label_9->setTextFormat(Qt::AutoText);

        horizontalLayout_4->addWidget(label_9);

        horizontalSlider4 = new QSlider(layoutWidget1);
        horizontalSlider4->setObjectName(QStringLiteral("horizontalSlider4"));
        horizontalSlider4->setOrientation(Qt::Horizontal);
        horizontalSlider4->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_4->addWidget(horizontalSlider4);

        sendMsgLineEdit4 = new QLineEdit(layoutWidget1);
        sendMsgLineEdit4->setObjectName(QStringLiteral("sendMsgLineEdit4"));

        horizontalLayout_4->addWidget(sendMsgLineEdit4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 4, -1, -1);
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);
        label_10->setTextFormat(Qt::AutoText);

        horizontalLayout_5->addWidget(label_10);

        horizontalSlider5 = new QSlider(layoutWidget1);
        horizontalSlider5->setObjectName(QStringLiteral("horizontalSlider5"));
        horizontalSlider5->setOrientation(Qt::Horizontal);
        horizontalSlider5->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_5->addWidget(horizontalSlider5);

        sendMsgLineEdit5 = new QLineEdit(layoutWidget1);
        sendMsgLineEdit5->setObjectName(QStringLiteral("sendMsgLineEdit5"));

        horizontalLayout_5->addWidget(sendMsgLineEdit5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font3);
        label_11->setTextFormat(Qt::AutoText);

        horizontalLayout_6->addWidget(label_11);

        horizontalSlider6 = new QSlider(layoutWidget1);
        horizontalSlider6->setObjectName(QStringLiteral("horizontalSlider6"));
        horizontalSlider6->setOrientation(Qt::Horizontal);
        horizontalSlider6->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_6->addWidget(horizontalSlider6);

        sendMsgLineEdit6 = new QLineEdit(layoutWidget1);
        sendMsgLineEdit6->setObjectName(QStringLiteral("sendMsgLineEdit6"));

        horizontalLayout_6->addWidget(sendMsgLineEdit6);


        verticalLayout_2->addLayout(horizontalLayout_6);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 280, 291, 151));
        groupBox_3->setFont(font2);
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 281, 142));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_7->addWidget(label_20);

        horizontalSlider7 = new QSlider(layoutWidget2);
        horizontalSlider7->setObjectName(QStringLiteral("horizontalSlider7"));
        horizontalSlider7->setOrientation(Qt::Horizontal);
        horizontalSlider7->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_7->addWidget(horizontalSlider7);

        sendMsgLineEdit7 = new QLineEdit(layoutWidget2);
        sendMsgLineEdit7->setObjectName(QStringLiteral("sendMsgLineEdit7"));

        horizontalLayout_7->addWidget(sendMsgLineEdit7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_8->addWidget(label_21);

        horizontalSlider8 = new QSlider(layoutWidget2);
        horizontalSlider8->setObjectName(QStringLiteral("horizontalSlider8"));
        horizontalSlider8->setOrientation(Qt::Horizontal);
        horizontalSlider8->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_8->addWidget(horizontalSlider8);

        sendMsgLineEdit8 = new QLineEdit(layoutWidget2);
        sendMsgLineEdit8->setObjectName(QStringLiteral("sendMsgLineEdit8"));

        horizontalLayout_8->addWidget(sendMsgLineEdit8);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_9->addWidget(label_22);

        horizontalSlider9 = new QSlider(layoutWidget2);
        horizontalSlider9->setObjectName(QStringLiteral("horizontalSlider9"));
        horizontalSlider9->setOrientation(Qt::Horizontal);
        horizontalSlider9->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_9->addWidget(horizontalSlider9);

        sendMsgLineEdit9 = new QLineEdit(layoutWidget2);
        sendMsgLineEdit9->setObjectName(QStringLiteral("sendMsgLineEdit9"));

        horizontalLayout_9->addWidget(sendMsgLineEdit9);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_10->addWidget(label_23);

        horizontalSlider10 = new QSlider(layoutWidget2);
        horizontalSlider10->setObjectName(QStringLiteral("horizontalSlider10"));
        horizontalSlider10->setOrientation(Qt::Horizontal);
        horizontalSlider10->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_10->addWidget(horizontalSlider10);

        sendMsgLineEdit10 = new QLineEdit(layoutWidget2);
        sendMsgLineEdit10->setObjectName(QStringLiteral("sendMsgLineEdit10"));

        horizontalLayout_10->addWidget(sendMsgLineEdit10);


        verticalLayout_3->addLayout(horizontalLayout_10);

        sendmsgButton = new QPushButton(tab_3);
        sendmsgButton->setObjectName(QStringLiteral("sendmsgButton"));
        sendmsgButton->setGeometry(QRect(90, 440, 101, 31));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/li/li/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendmsgButton->setIcon(icon8);
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 10, 130, 20));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        cabel_RadioButton = new QRadioButton(layoutWidget3);
        cabel_RadioButton->setObjectName(QStringLiteral("cabel_RadioButton"));

        horizontalLayout_11->addWidget(cabel_RadioButton);

        joint_RadioButton = new QRadioButton(layoutWidget3);
        joint_RadioButton->setObjectName(QStringLiteral("joint_RadioButton"));

        horizontalLayout_11->addWidget(joint_RadioButton);

        tabWidget_2->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1219, 23));
        menu_N = new QMenu(menuBar);
        menu_N->setObjectName(QStringLiteral("menu_N"));
        menu_I = new QMenu(menuBar);
        menu_I->setObjectName(QStringLiteral("menu_I"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_N->menuAction());
        menuBar->addAction(menu_I->menuAction());
        menu_N->addAction(actionAdd);
        menu_N->addAction(actionOpen);
        menu_N->addAction(actionClose);
        menu_N->addAction(actionSave);
        menu_N->addAction(actionExit);
        menu_I->addAction(actionInfor);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionExit);
        mainToolBar->addAction(actionClean);
        mainToolBar->addAction(actionInfor);
        mainToolBar->addAction(Openglaction);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\262\345\217\243", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
        actionInfor->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", Q_NULLPTR));
        actionClean->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClean->setToolTip(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Openglaction->setText(QApplication::translate("MainWindow", "\345\233\276\345\275\242\347\225\214\351\235\242", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\347\273\2631\345\274\240\345\212\233", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\347\273\2632\345\274\240\345\212\233", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\347\273\2633\345\274\240\345\212\233", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\347\273\2634\345\274\240\345\212\233", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\347\273\2635\345\274\240\345\212\233", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\347\273\2636\345\274\240\345\212\233", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\345\274\240\345\212\233\344\274\240\346\204\237\345\231\250", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "elbow", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "shoul", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "sur_pressure", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "elbow", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "shoulder", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "IMU\344\274\240\346\204\237\345\231\250", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "1\345\217\267\347\224\265\346\234\272", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "2\345\217\267\347\224\265\346\234\272", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "3\345\217\267\347\224\265\346\234\272", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "4\345\217\267\347\224\265\346\234\272", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "5\345\217\267\347\224\265\346\234\272", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "6\345\217\267\347\224\265\346\234\272", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\347\224\265\346\234\272\347\274\226\347\240\201\345\231\250", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", Q_NULLPTR));
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "COM1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM16", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM13", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM14", Q_NULLPTR)
         << QApplication::translate("MainWindow", "COM15", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baudRateCombox->clear();
        baudRateCombox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QString()
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\245\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\201\266", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        dataGetButton->setText(QApplication::translate("MainWindow", "DataGetStart", Q_NULLPTR));
        dataStopGetButton->setText(QApplication::translate("MainWindow", "DataGetStop", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\273\263\345\274\240\345\212\233\350\256\276\347\275\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\347\273\2631\345\274\240\345\212\233", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\347\273\2632\345\274\240\345\212\233", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\347\273\2633\345\274\240\345\212\233", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\347\273\2634\345\274\240\345\212\233", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\347\273\2635\345\274\240\345\212\233", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\347\273\2636\346\213\211\345\212\233", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\205\263\350\212\202\350\247\222\346\216\247\345\210\266", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "\350\202\251\345\205\263\350\212\202X\350\275\264", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "\350\202\251\345\205\263\350\212\202Y\350\275\264", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "\350\202\251\345\205\263\350\212\202Z\350\275\264", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "\350\202\230\345\205\263\350\212\202", Q_NULLPTR));
        sendmsgButton->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        cabel_RadioButton->setText(QApplication::translate("MainWindow", "\347\273\263\345\274\240\345\212\233", Q_NULLPTR));
        joint_RadioButton->setText(QApplication::translate("MainWindow", "\345\205\263\350\212\202\350\247\222", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "\345\244\226\351\252\250\351\252\274\346\216\247\345\210\266", Q_NULLPTR));
        menu_N->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234(&N)", Q_NULLPTR));
        menu_I->setTitle(QApplication::translate("MainWindow", "\350\257\264\346\230\216(&I)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
