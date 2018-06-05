/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_aboutdialog
{
public:
    QPushButton *close_pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;

    void setupUi(QDialog *aboutdialog)
    {
        if (aboutdialog->objectName().isEmpty())
            aboutdialog->setObjectName(QStringLiteral("aboutdialog"));
        aboutdialog->resize(612, 431);
        close_pushButton = new QPushButton(aboutdialog);
        close_pushButton->setObjectName(QStringLiteral("close_pushButton"));
        close_pushButton->setGeometry(QRect(260, 350, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(12);
        close_pushButton->setFont(font);
        label = new QLabel(aboutdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 91, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/li/li/robot_1.png")));
        label_2 = new QLabel(aboutdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 30, 421, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(aboutdialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 60, 91, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        textEdit = new QTextEdit(aboutdialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(100, 100, 451, 221));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        textEdit->setFont(font3);

        retranslateUi(aboutdialog);

        QMetaObject::connectSlotsByName(aboutdialog);
    } // setupUi

    void retranslateUi(QDialog *aboutdialog)
    {
        aboutdialog->setWindowTitle(QApplication::translate("aboutdialog", "Dialog", Q_NULLPTR));
        close_pushButton->setText(QApplication::translate("aboutdialog", "\345\205\263\351\227\255", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("aboutdialog", "\347\273\263\351\251\261\345\212\250\344\270\212\350\202\242\345\272\267\345\244\215\345\244\226\351\252\250\351\252\274\346\234\272\345\231\250\344\272\272\347\263\273\347\273\237\350\260\203\350\257\225\347\225\214\351\235\242", Q_NULLPTR));
        label_3->setText(QApplication::translate("aboutdialog", "\344\275\277\347\224\250\350\257\264\346\230\216", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("aboutdialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">/******************************************************************</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">**\344\275\234\350\200\205\357\274\232liwang</span></p>\n"
"<p style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">**\345\210\233\345\247\213\346\227\266\351\227\264\357\274\2322017-03-17</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">**\344\277\256\346\224\271\346\227\266\351\227\264\357\274\2322017-05-29</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">**\344\277\256\346\224\271\344\272\272\357\274\232liwang</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">**\344\277\256\346\224\271\345\206\205\345\256\271\357\274\232\345\242\236\345\212\240\344\275\277\347\224\250\350\257\264\346\230\216\347\225\214\351\235\242</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" f"
                        "ont-family:'SimSun';\">//=======================\344\275\277\347\224\250\346\226\271\346\263\225=====================//</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">1.\347\202\271\345\207\273\345\267\246\344\270\213\350\247\222\350\277\220\350\241\214\346\214\211\351\222\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2.\345\207\272\347\216\260\344\270\244\344\270\252\347\252\227\345\217\243\357\274\214\345\210\206\345\210\253\346\230\257\350\260\203\350\257\225\347\252\227\345\217\243\345\222\214opengl\345\233\276\345\275\242\346\230\276\347\244\272\347\252\227\345\217\243</span>"
                        "</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">3.\347\202\271\345\207\273\344\270\262\345\217\243\350\256\276\347\275\256\357\274\214\350\256\276\347\275\256\345\245\275</span><span style=\" font-family:'SimSun'; color:#000000;\">\344\270\262\345\217\243\345\217\202\346\225\260</span><span style=\" font-family:'SimSun';\">\357\274\214\347\202\271\345\207\273\345\267\246\344\270\212\350\247\222\346\211\223\345\274\200\344\270\262\345\217\243</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">4.\346\213\211\345\212\233\344\274\240\346\204\237\345\231\250\345\222\214IMU\344\274\240\346\204\237\345\231\250\346\225\260\346\215\256\345\260\206\344\273\245\346\233\262\347\272\277\345\275\242\345\274\217\346\230\276\347\244\272\345\234\250\347\252\227\345\217\243\344\270\255</"
                        "span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">5.\347\202\271\345\207\273\345\244\226\351\252\250\351\252\274\346\216\247\345\210\266\357\274\214\345\217\257\344\273\245\351\200\211\346\213\251\347\273\263\345\274\240\345\212\233\346\210\226\345\205\263\350\212\202\350\247\222\346\216\247\345\210\266</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">6.\350\256\276\347\275\256\345\245\275\345\217\202\346\225\260\345\220\216\347\202\271\345\207\273\347\241\256\345\256\232\346\214\211\351\222\256\357\274\214\345\217\202\346\225\260\345\217\221\351\200\201\347\273\231\344\270\213\344\275\215\346\234\272</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Si"
                        "mSun';\">7.\347\202\271\345\207\273\344\277\235\345\255\230\346\225\260\346\215\256\357\274\214\344\274\240\346\204\237\345\231\250\346\225\260\346\215\256\344\273\245TXT\346\226\207\346\234\254\346\240\274\345\274\217\344\277\235\345\255\230\345\234\250\346\241\214\351\235\242</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">8.\347\202\271\345\207\273\346\270\205\347\251\272\346\225\260\346\215\256\357\274\214\346\233\262\347\272\277\347\252\227\345\217\243\346\270\205\347\251\272\357\274\214\345\275\223\346\225\260\346\215\256\345\244\252\345\244\232\345\217\257\344\273\245\347\202\271\345\207\273</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">9.OpenGL\347\252\227\345\217\243\344\270\272\346\211\213\350\207\2023D\346\250\241\345\236\213\357\274\210\345\217\252"
                        "\346\234\211\350\202\251\345\205\263\350\212\202\345\222\214\350\202\230\345\205\263\350\212\202\357\274\214\345\276\210\344\270\221\357\274\214\350\275\273\345\226\267\357\274\211</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">//=======================\351\200\232\344\277\241\345\215\217\350\256\256====================//</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">//\344\270\213\344\275\215\346\234\272\345\217"
                        "\221\351\200\201 \344\270\212\344\275\215\346\234\272\346\216\245\346\224\266\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	Ti_H(Tension_high byte)---\346\213\211\345\212\233\344\274\240\346\204\237\345\231\250i\347\232\204\345\274\240\345\212\233\345\200\274\351\253\2308\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	Ti_L(Tension_low byte)---\346\213\211\345\212\233\344\274\240\346\204\237\345\231\250i\347\232\204\345\274\240\345\212\233\345\200\274\344\275\2168\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	i=0,1,2,3,4,5,6</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	shi_0(shoulder_0)---\350\202\251\345\205\263\350\212\202\350\247\222\345\272\246\346\255\243\350\264\237\345\210\244\346\226\255\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	sh_i(shoulder angle)---\350\202\251\345\205\263\350\212\202\350\247\222\345\272\246\345\200\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	eli_0(elbow_0)---\350\202\230\345\205\263\350\212\202\350\247\222\345\272\246\346\255\243\350\264\237\345\210\244\346\226\255\344\275\215</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	el_i(elbow angle)---\350\202\230\345\205\263\350\212\202\350\247\222\345\272\246\345\200\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	i=x,y,z(\344\273\243\350\241\250\347\273\225x,y,z\350\275\264\346\227\213\350\275\254\347\232\204\350\247\222\345\272\246)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  0xff </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \345\270\247\345\244\264</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  T1_H T1_L T2_H T2_L T3_H T3_L T4_H T4_L T5_H T5_L T6_H T6_L</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \346\225\260\346\215\256\344\275\215.....................................................</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px"
                        "; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  elz_0 el_z elx_0 el_x ely_0 el_y shz_0 sh_z shx_0 sh_x shy_0 sh_y    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  ...........................................................\346\225\260\346\215\256\344\275\215</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  0xaa</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \345\270\247\345\260\276</span></p>\n"
"<p sty"
                        "le=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">//\344\270\213\344\275\215\346\234\272\345\217\221\351\200\201 \344\270\212\344\275\215\346\234\272\346\216\245\346\224\266\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	con_sl(control_select)---\346\216\247\345\210\266\346\226\271\345\274\217\351\200\211\346\213\251\344\275\215</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	con_sl=0x01:\346\213\211\345\212\233\346\216\247\345\210\266</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	ti_th(tension_thousand)---\346\213\211\345\212\233i\347\232\204\345\215\203\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	ti_hu(tension_hundred)---\346\213\211\345\212\233i\347\232\204\347\231\276\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	ti_"
                        "te(tension_ten)---\346\213\211\345\212\233i\347\232\204\345\215\201\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	ti_un(tension_unit)---\346\213\211\345\212\233i\347\232\204\344\270\252\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	i=1,2,3,4,5,6</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	con_sl=0x02:\345\205\263\350\212\202\350\247\222\346\216\247\345\210\266</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	shi_0(shoulder_0)\350\202\251\345\205\263\350\212\202\350\247\222\347\232\204\346\255\243\350\264\237\345\210\244\346\226\255\344\275\215\357\274\2100\346\255\2431\350\264\237\357\274\211</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	shi_te(shoulder_ten)\350\202\251\345\205\263\350\212\202\350\247\222\347\232\204\345\215\201\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	shi_un(shoulder_unit)\350\202\251\345\205\263\350\212\202\350\247\222\347\232\204\344\270\252\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sim"
                        "Sun';\">	el_0(elbow_0)z\350\202\230\345\205\263\350\212\202\350\247\222\347\232\204\346\255\243\350\264\237\345\210\244\346\226\255\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	el_te(elbow_ten)\350\202\230\345\205\263\350\212\202\350\247\222\347\232\204\345\215\201\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	el_un(elbow_unit)\350\202\230\345\205\263\350\212\202\350\247\222\347\232\204\344\270\252\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">	i=x,y,z(\344\273\243\350\241\250\347\273\225x,y,z\350\275\264\346\227\213\350\275\254\347\232\204\350\247\222\345\272\246)</span></p>\n"
"<p style=\"-"
                        "qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  0xff</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \345\270\247\345\244\264</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  con_sl (t1_th t1_hu t1_te t1_un t2_th t2_hu t2_te t2_un t3_th</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \346\225\260\346\215\256\344\275\215......................................................</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  t3_hu t3_te t3_un t4_th t4_hu t4_te t4_un t5_th t5_hu t5_te t5_un</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  ................................................................</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family"
                        ":'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  t6_th t6_hu t6_te t6_un)/(shx_0 shx_te shx_un shy_0 shy_te shy_un</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  ..................................................................</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  shz_0 shz_te shz_un el_0 elg_te elg_un)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><"
                        "span style=\" font-family:'SimSun';\">  ................................\346\225\260\346\215\256\344\275\215</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  0xaa</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \345\270\247\345\260\276</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">***"
                        "***************************************************************/</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aboutdialog: public Ui_aboutdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
