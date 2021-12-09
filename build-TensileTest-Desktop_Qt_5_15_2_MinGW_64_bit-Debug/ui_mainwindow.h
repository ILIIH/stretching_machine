/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *clickTheSettings;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_36;
    QSplitter *splitter_35;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_22;
    QSplitter *splitter_15;
    QLabel *taskForce;
    QSplitter *splitter_2;
    QLabel *portForce;
    QLabel *labelPortForce;
    QComboBox *comLForce;
    QSplitter *splitter_19;
    QSplitter *splitter_14;
    QLabel *conditionForce;
    QLabel *labelConditionForce;
    QSplitter *splitter_16;
    QPushButton *openBForce;
    QPushButton *closeBForce;
    QSplitter *splitter_23;
    QSplitter *splitter_24;
    QLabel *taskLength;
    QSplitter *splitter_25;
    QLabel *portLength;
    QLabel *labelPortLength;
    QComboBox *comLLength;
    QSplitter *splitter_26;
    QSplitter *splitter_27;
    QLabel *conditionLength;
    QLabel *labelConditionLength;
    QSplitter *splitter_28;
    QPushButton *openBLength;
    QPushButton *closeBLength;
    QSplitter *splitter_29;
    QSplitter *splitter_30;
    QLabel *taskFrequency;
    QSplitter *splitter_31;
    QLabel *portFrequency;
    QLabel *labelPortFrequency;
    QComboBox *comLFrequency;
    QSplitter *splitter_32;
    QSplitter *splitter_33;
    QLabel *conditionFrequency;
    QLabel *labelConditionFrequency;
    QSplitter *splitter_34;
    QPushButton *openBFrequency;
    QPushButton *closeBFrequency;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_12;
    QLabel *NDB;
    QSplitter *splitter_7;
    QLabel *labelSet;
    QLineEdit *lineSeries;
    QLabel *DFD;
    QSplitter *splitter_6;
    QSplitter *splitter;
    QLabel *drawFromDatabase;
    QComboBox *comSeries;
    QSplitter *splitter_5;
    QLabel *drawFromDatabase_2;
    QComboBox *comExperiment;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdN;
    QSplitter *splitter_11;
    QSplitter *splitter_8;
    QPushButton *forwardButton;
    QPushButton *reverseButton;
    QSplitter *splitter_10;
    QLabel *label_4;
    QDoubleSpinBox *spinFrequency;
    QSplitter *splitter_9;
    QRadioButton *radioNew;
    QRadioButton *radioExisting;
    QSplitter *splitter_37;
    QPushButton *drawB;
    QPushButton *stopDB;
    QCustomPlot *wGraphic;
    QSplitter *splitter_13;
    QSplitter *splitter_3;
    QLabel *labelCurrentForce;
    QLCDNumber *CurrentForceLCD;
    QSplitter *splitter_4;
    QLabel *labelCurrentLength;
    QLCDNumber *CurrentLengthLCD;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(862, 698);
        clickTheSettings = new QAction(MainWindow);
        clickTheSettings->setObjectName(QString::fromUtf8("clickTheSettings"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter_36 = new QSplitter(centralwidget);
        splitter_36->setObjectName(QString::fromUtf8("splitter_36"));
        splitter_36->setOrientation(Qt::Vertical);
        splitter_35 = new QSplitter(splitter_36);
        splitter_35->setObjectName(QString::fromUtf8("splitter_35"));
        splitter_35->setMinimumSize(QSize(0, 250));
        splitter_35->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_35);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 250));
        groupBox->setMaximumSize(QSize(16777215, 200));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter_22 = new QSplitter(groupBox);
        splitter_22->setObjectName(QString::fromUtf8("splitter_22"));
        splitter_22->setOrientation(Qt::Horizontal);
        splitter_15 = new QSplitter(splitter_22);
        splitter_15->setObjectName(QString::fromUtf8("splitter_15"));
        splitter_15->setOrientation(Qt::Vertical);
        taskForce = new QLabel(splitter_15);
        taskForce->setObjectName(QString::fromUtf8("taskForce"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(14);
        taskForce->setFont(font);
        splitter_15->addWidget(taskForce);
        splitter_2 = new QSplitter(splitter_15);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        portForce = new QLabel(splitter_2);
        portForce->setObjectName(QString::fromUtf8("portForce"));
        portForce->setFont(font);
        splitter_2->addWidget(portForce);
        labelPortForce = new QLabel(splitter_2);
        labelPortForce->setObjectName(QString::fromUtf8("labelPortForce"));
        labelPortForce->setFont(font);
        labelPortForce->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter_2->addWidget(labelPortForce);
        splitter_15->addWidget(splitter_2);
        comLForce = new QComboBox(splitter_15);
        comLForce->setObjectName(QString::fromUtf8("comLForce"));
        splitter_15->addWidget(comLForce);
        splitter_22->addWidget(splitter_15);
        splitter_19 = new QSplitter(splitter_22);
        splitter_19->setObjectName(QString::fromUtf8("splitter_19"));
        splitter_19->setOrientation(Qt::Vertical);
        splitter_14 = new QSplitter(splitter_19);
        splitter_14->setObjectName(QString::fromUtf8("splitter_14"));
        splitter_14->setOrientation(Qt::Horizontal);
        conditionForce = new QLabel(splitter_14);
        conditionForce->setObjectName(QString::fromUtf8("conditionForce"));
        conditionForce->setFont(font);
        splitter_14->addWidget(conditionForce);
        labelConditionForce = new QLabel(splitter_14);
        labelConditionForce->setObjectName(QString::fromUtf8("labelConditionForce"));
        labelConditionForce->setFont(font);
        labelConditionForce->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter_14->addWidget(labelConditionForce);
        splitter_19->addWidget(splitter_14);
        splitter_16 = new QSplitter(splitter_19);
        splitter_16->setObjectName(QString::fromUtf8("splitter_16"));
        splitter_16->setOrientation(Qt::Horizontal);
        openBForce = new QPushButton(splitter_16);
        openBForce->setObjectName(QString::fromUtf8("openBForce"));
        splitter_16->addWidget(openBForce);
        closeBForce = new QPushButton(splitter_16);
        closeBForce->setObjectName(QString::fromUtf8("closeBForce"));
        closeBForce->setEnabled(false);
        splitter_16->addWidget(closeBForce);
        splitter_19->addWidget(splitter_16);
        splitter_22->addWidget(splitter_19);

        verticalLayout->addWidget(splitter_22);

        splitter_23 = new QSplitter(groupBox);
        splitter_23->setObjectName(QString::fromUtf8("splitter_23"));
        splitter_23->setOrientation(Qt::Horizontal);
        splitter_24 = new QSplitter(splitter_23);
        splitter_24->setObjectName(QString::fromUtf8("splitter_24"));
        splitter_24->setOrientation(Qt::Vertical);
        taskLength = new QLabel(splitter_24);
        taskLength->setObjectName(QString::fromUtf8("taskLength"));
        taskLength->setFont(font);
        splitter_24->addWidget(taskLength);
        splitter_25 = new QSplitter(splitter_24);
        splitter_25->setObjectName(QString::fromUtf8("splitter_25"));
        splitter_25->setOrientation(Qt::Horizontal);
        portLength = new QLabel(splitter_25);
        portLength->setObjectName(QString::fromUtf8("portLength"));
        portLength->setFont(font);
        splitter_25->addWidget(portLength);
        labelPortLength = new QLabel(splitter_25);
        labelPortLength->setObjectName(QString::fromUtf8("labelPortLength"));
        labelPortLength->setFont(font);
        labelPortLength->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter_25->addWidget(labelPortLength);
        splitter_24->addWidget(splitter_25);
        comLLength = new QComboBox(splitter_24);
        comLLength->setObjectName(QString::fromUtf8("comLLength"));
        splitter_24->addWidget(comLLength);
        splitter_23->addWidget(splitter_24);
        splitter_26 = new QSplitter(splitter_23);
        splitter_26->setObjectName(QString::fromUtf8("splitter_26"));
        splitter_26->setOrientation(Qt::Vertical);
        splitter_27 = new QSplitter(splitter_26);
        splitter_27->setObjectName(QString::fromUtf8("splitter_27"));
        splitter_27->setOrientation(Qt::Horizontal);
        conditionLength = new QLabel(splitter_27);
        conditionLength->setObjectName(QString::fromUtf8("conditionLength"));
        conditionLength->setFont(font);
        splitter_27->addWidget(conditionLength);
        labelConditionLength = new QLabel(splitter_27);
        labelConditionLength->setObjectName(QString::fromUtf8("labelConditionLength"));
        labelConditionLength->setFont(font);
        labelConditionLength->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter_27->addWidget(labelConditionLength);
        splitter_26->addWidget(splitter_27);
        splitter_28 = new QSplitter(splitter_26);
        splitter_28->setObjectName(QString::fromUtf8("splitter_28"));
        splitter_28->setOrientation(Qt::Horizontal);
        openBLength = new QPushButton(splitter_28);
        openBLength->setObjectName(QString::fromUtf8("openBLength"));
        splitter_28->addWidget(openBLength);
        closeBLength = new QPushButton(splitter_28);
        closeBLength->setObjectName(QString::fromUtf8("closeBLength"));
        closeBLength->setEnabled(false);
        splitter_28->addWidget(closeBLength);
        splitter_26->addWidget(splitter_28);
        splitter_23->addWidget(splitter_26);

        verticalLayout->addWidget(splitter_23);

        splitter_29 = new QSplitter(groupBox);
        splitter_29->setObjectName(QString::fromUtf8("splitter_29"));
        splitter_29->setOrientation(Qt::Horizontal);
        splitter_30 = new QSplitter(splitter_29);
        splitter_30->setObjectName(QString::fromUtf8("splitter_30"));
        splitter_30->setOrientation(Qt::Vertical);
        taskFrequency = new QLabel(splitter_30);
        taskFrequency->setObjectName(QString::fromUtf8("taskFrequency"));
        taskFrequency->setFont(font);
        splitter_30->addWidget(taskFrequency);
        splitter_31 = new QSplitter(splitter_30);
        splitter_31->setObjectName(QString::fromUtf8("splitter_31"));
        splitter_31->setOrientation(Qt::Horizontal);
        portFrequency = new QLabel(splitter_31);
        portFrequency->setObjectName(QString::fromUtf8("portFrequency"));
        portFrequency->setFont(font);
        splitter_31->addWidget(portFrequency);
        labelPortFrequency = new QLabel(splitter_31);
        labelPortFrequency->setObjectName(QString::fromUtf8("labelPortFrequency"));
        labelPortFrequency->setFont(font);
        labelPortFrequency->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter_31->addWidget(labelPortFrequency);
        splitter_30->addWidget(splitter_31);
        comLFrequency = new QComboBox(splitter_30);
        comLFrequency->setObjectName(QString::fromUtf8("comLFrequency"));
        splitter_30->addWidget(comLFrequency);
        splitter_29->addWidget(splitter_30);
        splitter_32 = new QSplitter(splitter_29);
        splitter_32->setObjectName(QString::fromUtf8("splitter_32"));
        splitter_32->setOrientation(Qt::Vertical);
        splitter_33 = new QSplitter(splitter_32);
        splitter_33->setObjectName(QString::fromUtf8("splitter_33"));
        splitter_33->setOrientation(Qt::Horizontal);
        conditionFrequency = new QLabel(splitter_33);
        conditionFrequency->setObjectName(QString::fromUtf8("conditionFrequency"));
        conditionFrequency->setFont(font);
        splitter_33->addWidget(conditionFrequency);
        labelConditionFrequency = new QLabel(splitter_33);
        labelConditionFrequency->setObjectName(QString::fromUtf8("labelConditionFrequency"));
        labelConditionFrequency->setFont(font);
        labelConditionFrequency->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        splitter_33->addWidget(labelConditionFrequency);
        splitter_32->addWidget(splitter_33);
        splitter_34 = new QSplitter(splitter_32);
        splitter_34->setObjectName(QString::fromUtf8("splitter_34"));
        splitter_34->setOrientation(Qt::Horizontal);
        openBFrequency = new QPushButton(splitter_34);
        openBFrequency->setObjectName(QString::fromUtf8("openBFrequency"));
        splitter_34->addWidget(openBFrequency);
        closeBFrequency = new QPushButton(splitter_34);
        closeBFrequency->setObjectName(QString::fromUtf8("closeBFrequency"));
        closeBFrequency->setEnabled(false);
        splitter_34->addWidget(closeBFrequency);
        splitter_32->addWidget(splitter_34);
        splitter_29->addWidget(splitter_32);

        verticalLayout->addWidget(splitter_29);

        splitter_35->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter_35);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 250));
        groupBox_2->setMaximumSize(QSize(16777215, 200));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        splitter_12 = new QSplitter(groupBox_2);
        splitter_12->setObjectName(QString::fromUtf8("splitter_12"));
        splitter_12->setOrientation(Qt::Vertical);
        NDB = new QLabel(splitter_12);
        NDB->setObjectName(QString::fromUtf8("NDB"));
        NDB->setFont(font);
        splitter_12->addWidget(NDB);
        splitter_7 = new QSplitter(splitter_12);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        labelSet = new QLabel(splitter_7);
        labelSet->setObjectName(QString::fromUtf8("labelSet"));
        labelSet->setFont(font);
        splitter_7->addWidget(labelSet);
        lineSeries = new QLineEdit(splitter_7);
        lineSeries->setObjectName(QString::fromUtf8("lineSeries"));
        splitter_7->addWidget(lineSeries);
        splitter_12->addWidget(splitter_7);
        DFD = new QLabel(splitter_12);
        DFD->setObjectName(QString::fromUtf8("DFD"));
        DFD->setFont(font);
        splitter_12->addWidget(DFD);
        splitter_6 = new QSplitter(splitter_12);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_6);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        drawFromDatabase = new QLabel(splitter);
        drawFromDatabase->setObjectName(QString::fromUtf8("drawFromDatabase"));
        drawFromDatabase->setFont(font);
        splitter->addWidget(drawFromDatabase);
        comSeries = new QComboBox(splitter);
        comSeries->setObjectName(QString::fromUtf8("comSeries"));
        comSeries->setEnabled(false);
        splitter->addWidget(comSeries);
        splitter_6->addWidget(splitter);
        splitter_5 = new QSplitter(splitter_6);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        drawFromDatabase_2 = new QLabel(splitter_5);
        drawFromDatabase_2->setObjectName(QString::fromUtf8("drawFromDatabase_2"));
        drawFromDatabase_2->setFont(font);
        splitter_5->addWidget(drawFromDatabase_2);
        comExperiment = new QComboBox(splitter_5);
        comExperiment->setObjectName(QString::fromUtf8("comExperiment"));
        comExperiment->setEnabled(false);
        splitter_5->addWidget(comExperiment);
        splitter_6->addWidget(splitter_5);
        splitter_12->addWidget(splitter_6);

        verticalLayout_7->addWidget(splitter_12);

        splitter_35->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter_35);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 250));
        groupBox_3->setMaximumSize(QSize(16777215, 200));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lcdN = new QLCDNumber(groupBox_3);
        lcdN->setObjectName(QString::fromUtf8("lcdN"));
        lcdN->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(lcdN);

        splitter_11 = new QSplitter(groupBox_3);
        splitter_11->setObjectName(QString::fromUtf8("splitter_11"));
        splitter_11->setOrientation(Qt::Vertical);
        splitter_8 = new QSplitter(splitter_11);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        forwardButton = new QPushButton(splitter_8);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));
        splitter_8->addWidget(forwardButton);
        reverseButton = new QPushButton(splitter_8);
        reverseButton->setObjectName(QString::fromUtf8("reverseButton"));
        splitter_8->addWidget(reverseButton);
        splitter_11->addWidget(splitter_8);
        splitter_10 = new QSplitter(splitter_11);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        splitter_10->addWidget(label_4);
        spinFrequency = new QDoubleSpinBox(splitter_10);
        spinFrequency->setObjectName(QString::fromUtf8("spinFrequency"));
        splitter_10->addWidget(spinFrequency);
        splitter_11->addWidget(splitter_10);
        splitter_9 = new QSplitter(splitter_11);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        radioNew = new QRadioButton(splitter_9);
        radioNew->setObjectName(QString::fromUtf8("radioNew"));
        radioNew->setEnabled(true);
        radioNew->setCheckable(true);
        radioNew->setChecked(true);
        splitter_9->addWidget(radioNew);
        radioExisting = new QRadioButton(splitter_9);
        radioExisting->setObjectName(QString::fromUtf8("radioExisting"));
        splitter_9->addWidget(radioExisting);
        splitter_11->addWidget(splitter_9);
        splitter_37 = new QSplitter(splitter_11);
        splitter_37->setObjectName(QString::fromUtf8("splitter_37"));
        splitter_37->setOrientation(Qt::Horizontal);
        drawB = new QPushButton(splitter_37);
        drawB->setObjectName(QString::fromUtf8("drawB"));
        drawB->setEnabled(true);
        drawB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        splitter_37->addWidget(drawB);
        stopDB = new QPushButton(splitter_37);
        stopDB->setObjectName(QString::fromUtf8("stopDB"));
        stopDB->setEnabled(false);
        stopDB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        splitter_37->addWidget(stopDB);
        splitter_11->addWidget(splitter_37);

        verticalLayout_3->addWidget(splitter_11);

        splitter_35->addWidget(groupBox_3);
        splitter_36->addWidget(splitter_35);
        wGraphic = new QCustomPlot(splitter_36);
        wGraphic->setObjectName(QString::fromUtf8("wGraphic"));
        wGraphic->setMinimumSize(QSize(0, 240));
        splitter_36->addWidget(wGraphic);

        verticalLayout_2->addWidget(splitter_36);

        splitter_13 = new QSplitter(centralwidget);
        splitter_13->setObjectName(QString::fromUtf8("splitter_13"));
        splitter_13->setOrientation(Qt::Horizontal);
        splitter_3 = new QSplitter(splitter_13);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        labelCurrentForce = new QLabel(splitter_3);
        labelCurrentForce->setObjectName(QString::fromUtf8("labelCurrentForce"));
        labelCurrentForce->setFont(font);
        splitter_3->addWidget(labelCurrentForce);
        CurrentForceLCD = new QLCDNumber(splitter_3);
        CurrentForceLCD->setObjectName(QString::fromUtf8("CurrentForceLCD"));
        splitter_3->addWidget(CurrentForceLCD);
        splitter_13->addWidget(splitter_3);
        splitter_4 = new QSplitter(splitter_13);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        labelCurrentLength = new QLabel(splitter_4);
        labelCurrentLength->setObjectName(QString::fromUtf8("labelCurrentLength"));
        labelCurrentLength->setFont(font);
        splitter_4->addWidget(labelCurrentLength);
        CurrentLengthLCD = new QLCDNumber(splitter_4);
        CurrentLengthLCD->setObjectName(QString::fromUtf8("CurrentLengthLCD"));
        splitter_4->addWidget(CurrentLengthLCD);
        splitter_13->addWidget(splitter_4);

        verticalLayout_2->addWidget(splitter_13);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 862, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(clickTheSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clickTheSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        clickTheSettings->setToolTip(QCoreApplication::translate("MainWindow", "to run the machine", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Com ports", nullptr));
        taskForce->setText(QCoreApplication::translate("MainWindow", "Force", nullptr));
        portForce->setText(QCoreApplication::translate("MainWindow", "PORT:", nullptr));
        labelPortForce->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        conditionForce->setText(QCoreApplication::translate("MainWindow", "CONDITION:", nullptr));
        labelConditionForce->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        openBForce->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        closeBForce->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        taskLength->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        portLength->setText(QCoreApplication::translate("MainWindow", "PORT:", nullptr));
        labelPortLength->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        conditionLength->setText(QCoreApplication::translate("MainWindow", "CONDITION:", nullptr));
        labelConditionLength->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        openBLength->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        closeBLength->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        taskFrequency->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        portFrequency->setText(QCoreApplication::translate("MainWindow", "PORT:", nullptr));
        labelPortFrequency->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        conditionFrequency->setText(QCoreApplication::translate("MainWindow", "CONDITION:", nullptr));
        labelConditionFrequency->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        openBFrequency->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        closeBFrequency->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Database", nullptr));
        NDB->setText(QCoreApplication::translate("MainWindow", "NEW:", nullptr));
        labelSet->setText(QCoreApplication::translate("MainWindow", "Series:", nullptr));
        lineSeries->setText(QCoreApplication::translate("MainWindow", "New Series", nullptr));
        DFD->setText(QCoreApplication::translate("MainWindow", "DRAW FROM DATABASE:", nullptr));
        drawFromDatabase->setText(QCoreApplication::translate("MainWindow", "Series", nullptr));
        drawFromDatabase_2->setText(QCoreApplication::translate("MainWindow", "Experiment", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Drawing", nullptr));
        forwardButton->setText(QCoreApplication::translate("MainWindow", "forward", nullptr));
        reverseButton->setText(QCoreApplication::translate("MainWindow", "reverse", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Frequency:", nullptr));
        radioNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        radioExisting->setText(QCoreApplication::translate("MainWindow", "Existing", nullptr));
        drawB->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        stopDB->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        labelCurrentForce->setText(QCoreApplication::translate("MainWindow", "Current force:", nullptr));
        labelCurrentLength->setText(QCoreApplication::translate("MainWindow", "Current length delta:", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
