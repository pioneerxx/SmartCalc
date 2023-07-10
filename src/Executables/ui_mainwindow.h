/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *value;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button0;
    QPushButton *buttondot;
    QPushButton *buttonequal;
    QPushButton *buttondiv;
    QPushButton *buttonmult;
    QPushButton *buttonsub;
    QPushButton *buttonplus;
    QPushButton *buttondmod;
    QPushButton *buttonsin;
    QPushButton *buttoncos;
    QPushButton *buttontan;
    QPushButton *buttonsqrt;
    QPushButton *buttonasin;
    QPushButton *buttonacos;
    QPushButton *buttonatan;
    QPushButton *buttonpow;
    QPushButton *buttonlog;
    QPushButton *buttonln;
    QPushButton *buttonx;
    QPushButton *Economy;
    QPushButton *buttonclear;
    QPushButton *buttonbraceopen;
    QPushButton *buttonbraceclose;
    QCustomPlot *plotter;
    QPushButton *zoom_in;
    QPushButton *zoom_out;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QRadioButton *type1;
    QRadioButton *type2;
    QComboBox *whichmeasurement;
    QPushButton *calculate;
    QLabel *monthlypayment;
    QLabel *overpayment;
    QLabel *allpayment;
    QLabel *monthlypayment_2;
    QLabel *monthlypayment_3;
    QLabel *monthlypayment_4;
    QDoubleSpinBox *creditsum;
    QDoubleSpinBox *percent;
    QSpinBox *creditspan;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1166, 757);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QRadioButton {	\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        value = new QLabel(centralwidget);
        value->setObjectName(QString::fromUtf8("value"));
        value->setGeometry(QRect(0, 0, 640, 100));
        QFont font;
        font.setPointSize(50);
        value->setFont(font);
        value->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"	background-color: black;\n"
"}"));
        value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setGeometry(QRect(0, 100, 81, 81));
        button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setGeometry(QRect(80, 100, 81, 81));
        button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setGeometry(QRect(160, 100, 81, 81));
        button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setGeometry(QRect(0, 180, 81, 81));
        button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setGeometry(QRect(80, 180, 81, 81));
        button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setGeometry(QRect(160, 180, 81, 81));
        button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(0, 260, 81, 81));
        button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(80, 260, 81, 81));
        button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setGeometry(QRect(160, 260, 81, 81));
        button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        button0 = new QPushButton(centralwidget);
        button0->setObjectName(QString::fromUtf8("button0"));
        button0->setGeometry(QRect(80, 340, 81, 81));
        button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttondot = new QPushButton(centralwidget);
        buttondot->setObjectName(QString::fromUtf8("buttondot"));
        buttondot->setGeometry(QRect(0, 340, 81, 81));
        buttondot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonequal = new QPushButton(centralwidget);
        buttonequal->setObjectName(QString::fromUtf8("buttonequal"));
        buttonequal->setGeometry(QRect(240, 340, 81, 81));
        buttonequal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttondiv = new QPushButton(centralwidget);
        buttondiv->setObjectName(QString::fromUtf8("buttondiv"));
        buttondiv->setGeometry(QRect(320, 100, 81, 81));
        buttondiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonmult = new QPushButton(centralwidget);
        buttonmult->setObjectName(QString::fromUtf8("buttonmult"));
        buttonmult->setGeometry(QRect(320, 180, 81, 81));
        buttonmult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonsub = new QPushButton(centralwidget);
        buttonsub->setObjectName(QString::fromUtf8("buttonsub"));
        buttonsub->setGeometry(QRect(320, 260, 81, 81));
        buttonsub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonplus = new QPushButton(centralwidget);
        buttonplus->setObjectName(QString::fromUtf8("buttonplus"));
        buttonplus->setGeometry(QRect(320, 340, 81, 81));
        buttonplus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttondmod = new QPushButton(centralwidget);
        buttondmod->setObjectName(QString::fromUtf8("buttondmod"));
        buttondmod->setGeometry(QRect(400, 100, 81, 81));
        buttondmod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonsin = new QPushButton(centralwidget);
        buttonsin->setObjectName(QString::fromUtf8("buttonsin"));
        buttonsin->setGeometry(QRect(400, 180, 81, 81));
        buttonsin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttoncos = new QPushButton(centralwidget);
        buttoncos->setObjectName(QString::fromUtf8("buttoncos"));
        buttoncos->setGeometry(QRect(400, 260, 81, 81));
        buttoncos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttontan = new QPushButton(centralwidget);
        buttontan->setObjectName(QString::fromUtf8("buttontan"));
        buttontan->setGeometry(QRect(400, 340, 81, 81));
        buttontan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonsqrt = new QPushButton(centralwidget);
        buttonsqrt->setObjectName(QString::fromUtf8("buttonsqrt"));
        buttonsqrt->setGeometry(QRect(480, 100, 81, 81));
        buttonsqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonasin = new QPushButton(centralwidget);
        buttonasin->setObjectName(QString::fromUtf8("buttonasin"));
        buttonasin->setGeometry(QRect(480, 180, 81, 81));
        buttonasin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonacos = new QPushButton(centralwidget);
        buttonacos->setObjectName(QString::fromUtf8("buttonacos"));
        buttonacos->setGeometry(QRect(480, 260, 81, 81));
        buttonacos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonatan = new QPushButton(centralwidget);
        buttonatan->setObjectName(QString::fromUtf8("buttonatan"));
        buttonatan->setGeometry(QRect(480, 340, 81, 81));
        buttonatan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonpow = new QPushButton(centralwidget);
        buttonpow->setObjectName(QString::fromUtf8("buttonpow"));
        buttonpow->setGeometry(QRect(560, 100, 81, 81));
        buttonpow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonlog = new QPushButton(centralwidget);
        buttonlog->setObjectName(QString::fromUtf8("buttonlog"));
        buttonlog->setGeometry(QRect(560, 180, 81, 81));
        buttonlog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonln = new QPushButton(centralwidget);
        buttonln->setObjectName(QString::fromUtf8("buttonln"));
        buttonln->setGeometry(QRect(560, 260, 81, 81));
        buttonln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonx = new QPushButton(centralwidget);
        buttonx->setObjectName(QString::fromUtf8("buttonx"));
        buttonx->setGeometry(QRect(160, 340, 81, 81));
        buttonx->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        Economy = new QPushButton(centralwidget);
        Economy->setObjectName(QString::fromUtf8("Economy"));
        Economy->setGeometry(QRect(560, 340, 81, 81));
        Economy->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonclear = new QPushButton(centralwidget);
        buttonclear->setObjectName(QString::fromUtf8("buttonclear"));
        buttonclear->setGeometry(QRect(240, 100, 81, 81));
        buttonclear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonbraceopen = new QPushButton(centralwidget);
        buttonbraceopen->setObjectName(QString::fromUtf8("buttonbraceopen"));
        buttonbraceopen->setGeometry(QRect(240, 180, 81, 81));
        buttonbraceopen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        buttonbraceclose = new QPushButton(centralwidget);
        buttonbraceclose->setObjectName(QString::fromUtf8("buttonbraceclose"));
        buttonbraceclose->setGeometry(QRect(240, 260, 81, 81));
        buttonbraceclose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        plotter = new QCustomPlot(centralwidget);
        plotter->setObjectName(QString::fromUtf8("plotter"));
        plotter->setGeometry(QRect(0, 420, 560, 271));
        plotter->setStyleSheet(QString::fromUtf8("QCustomPlot {\n"
"	border: 2px soild black;\n"
"}"));
        zoom_in = new QPushButton(centralwidget);
        zoom_in->setObjectName(QString::fromUtf8("zoom_in"));
        zoom_in->setGeometry(QRect(560, 500, 40, 40));
        zoom_in->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        zoom_out = new QPushButton(centralwidget);
        zoom_out->setObjectName(QString::fromUtf8("zoom_out"));
        zoom_out->setGeometry(QRect(560, 540, 40, 40));
        zoom_out->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background-color: gray;\n"
"	border: 2px solid white;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 60, 131, 31));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 120, 131, 31));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 180, 131, 31));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(720, 0, 321, 41));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(660, 240, 181, 31));
        label_5->setAlignment(Qt::AlignCenter);
        type1 = new QRadioButton(centralwidget);
        type1->setObjectName(QString::fromUtf8("type1"));
        type1->setGeometry(QRect(860, 250, 121, 21));
        type1->setStyleSheet(QString::fromUtf8("QRadioButton {	\n"
"	background-color: darkGray;\n"
"	color: black;\n"
"}"));
        type1->setChecked(true);
        type2 = new QRadioButton(centralwidget);
        type2->setObjectName(QString::fromUtf8("type2"));
        type2->setGeometry(QRect(860, 280, 171, 20));
        type2->setStyleSheet(QString::fromUtf8("QRadioButton {	\n"
"	background-color: darkGray;\n"
"	color: black;\n"
"}"));
        whichmeasurement = new QComboBox(centralwidget);
        whichmeasurement->addItem(QString());
        whichmeasurement->addItem(QString());
        whichmeasurement->setObjectName(QString::fromUtf8("whichmeasurement"));
        whichmeasurement->setGeometry(QRect(1000, 126, 101, 20));
        whichmeasurement->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background-color: darkGray;\n"
"	color: black;\n"
"}"));
        calculate = new QPushButton(centralwidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(670, 270, 141, 31));
        calculate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: orange;\n"
"	border-radius: 2px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #9799fc);\n"
"}"));
        monthlypayment = new QLabel(centralwidget);
        monthlypayment->setObjectName(QString::fromUtf8("monthlypayment"));
        monthlypayment->setGeometry(QRect(970, 310, 161, 31));
        QFont font1;
        font1.setPointSize(13);
        monthlypayment->setFont(font1);
        monthlypayment->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: black;\n"
"	color: white;	\n"
"}"));
        monthlypayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overpayment = new QLabel(centralwidget);
        overpayment->setObjectName(QString::fromUtf8("overpayment"));
        overpayment->setGeometry(QRect(970, 340, 161, 31));
        overpayment->setFont(font1);
        overpayment->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: black;\n"
"	color: white;	\n"
"}"));
        overpayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        allpayment = new QLabel(centralwidget);
        allpayment->setObjectName(QString::fromUtf8("allpayment"));
        allpayment->setGeometry(QRect(970, 370, 161, 31));
        allpayment->setFont(font1);
        allpayment->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: black;\n"
"	color: white;	\n"
"}"));
        allpayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        monthlypayment_2 = new QLabel(centralwidget);
        monthlypayment_2->setObjectName(QString::fromUtf8("monthlypayment_2"));
        monthlypayment_2->setGeometry(QRect(810, 310, 161, 31));
        monthlypayment_2->setFont(font1);
        monthlypayment_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: black;\n"
"	color: white;	\n"
"}"));
        monthlypayment_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        monthlypayment_3 = new QLabel(centralwidget);
        monthlypayment_3->setObjectName(QString::fromUtf8("monthlypayment_3"));
        monthlypayment_3->setGeometry(QRect(810, 340, 161, 31));
        monthlypayment_3->setFont(font1);
        monthlypayment_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: black;\n"
"	color: white;	\n"
"}"));
        monthlypayment_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        monthlypayment_4 = new QLabel(centralwidget);
        monthlypayment_4->setObjectName(QString::fromUtf8("monthlypayment_4"));
        monthlypayment_4->setGeometry(QRect(810, 370, 161, 31));
        monthlypayment_4->setFont(font1);
        monthlypayment_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: black;\n"
"	color: white;	\n"
"}"));
        monthlypayment_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditsum = new QDoubleSpinBox(centralwidget);
        creditsum->setObjectName(QString::fromUtf8("creditsum"));
        creditsum->setGeometry(QRect(800, 61, 191, 31));
        creditsum->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        creditsum->setDecimals(2);
        creditsum->setMaximum(999999999999999983222784.000000000000000);
        percent = new QDoubleSpinBox(centralwidget);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setGeometry(QRect(800, 180, 191, 31));
        percent->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        percent->setDecimals(2);
        percent->setMaximum(100.000000000000000);
        creditspan = new QSpinBox(centralwidget);
        creditspan->setObjectName(QString::fromUtf8("creditspan"));
        creditspan->setGeometry(QRect(800, 120, 191, 31));
        creditspan->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        creditspan->setMaximum(10000);
        MainWindow->setCentralWidget(centralwidget);
        button7->raise();
        button8->raise();
        button9->raise();
        button4->raise();
        button5->raise();
        button6->raise();
        button0->raise();
        buttondot->raise();
        buttonequal->raise();
        buttondiv->raise();
        buttonmult->raise();
        buttondmod->raise();
        buttonsin->raise();
        buttonsqrt->raise();
        buttonasin->raise();
        buttonpow->raise();
        buttonlog->raise();
        buttonx->raise();
        Economy->raise();
        buttonclear->raise();
        value->raise();
        buttonbraceopen->raise();
        button1->raise();
        button3->raise();
        buttonbraceclose->raise();
        buttonln->raise();
        button2->raise();
        buttonplus->raise();
        buttontan->raise();
        buttonatan->raise();
        buttonsub->raise();
        buttoncos->raise();
        buttonacos->raise();
        plotter->raise();
        zoom_in->raise();
        zoom_out->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        type1->raise();
        type2->raise();
        whichmeasurement->raise();
        calculate->raise();
        monthlypayment->raise();
        overpayment->raise();
        allpayment->raise();
        monthlypayment_2->raise();
        monthlypayment_3->raise();
        monthlypayment_4->raise();
        creditsum->raise();
        percent->raise();
        creditspan->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc", nullptr));
        value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        buttondot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        buttonequal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        buttondiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        buttonmult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonsub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonplus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttondmod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        buttonsin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        buttoncos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        buttontan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        buttonsqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232 ", nullptr));
        buttonasin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        buttonacos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        buttonatan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        buttonpow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        buttonlog->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        buttonln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        buttonx->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Economy->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        buttonclear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        buttonbraceopen->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        buttonbraceclose->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        zoom_in->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        zoom_out->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        type1->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\265", nullptr));
        type2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        whichmeasurement->setItemText(0, QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));
        whichmeasurement->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        calculate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        monthlypayment->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        overpayment->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        allpayment->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        monthlypayment_2->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        monthlypayment_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260", nullptr));
        monthlypayment_4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
