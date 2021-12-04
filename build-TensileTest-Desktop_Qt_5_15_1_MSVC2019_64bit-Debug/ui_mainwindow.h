/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_14;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *taskForce;
    QHBoxLayout *horizontalLayout;
    QLabel *portForce;
    QLabel *labelPortForce;
    QComboBox *comLForce;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *conditionForce;
    QLabel *labelConditionForce;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openBForce;
    QPushButton *closeBForce;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *taskLength;
    QHBoxLayout *horizontalLayout_5;
    QLabel *portLength;
    QLabel *labelPortLength;
    QComboBox *comLLength;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *conditionLength;
    QLabel *labelConditionLength;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *openBLength;
    QPushButton *closeBLength;
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
    QHBoxLayout *horizontalLayout_12;
    QSplitter *splitter_11;
    QLCDNumber *lcdN;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter_8;
    QLabel *labelForce;
    QDoubleSpinBox *spinForce;
    QSplitter *splitter_10;
    QLabel *label_4;
    QDoubleSpinBox *spinFrequency;
    QSplitter *splitter_9;
    QRadioButton *radioNew;
    QRadioButton *radioExisting;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *drawB;
    QPushButton *stopDB;
    QCustomPlot *wGraphic;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(993, 748);
        clickTheSettings = new QAction(MainWindow);
        clickTheSettings->setObjectName(QString::fromUtf8("clickTheSettings"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(7);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_14->setContentsMargins(-1, -1, -1, 20);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_11 = new QHBoxLayout(groupBox);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        taskForce = new QLabel(groupBox);
        taskForce->setObjectName(QString::fromUtf8("taskForce"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(14);
        taskForce->setFont(font);

        verticalLayout->addWidget(taskForce);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        portForce = new QLabel(groupBox);
        portForce->setObjectName(QString::fromUtf8("portForce"));
        portForce->setFont(font);

        horizontalLayout->addWidget(portForce);

        labelPortForce = new QLabel(groupBox);
        labelPortForce->setObjectName(QString::fromUtf8("labelPortForce"));
        labelPortForce->setFont(font);
        labelPortForce->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(labelPortForce);


        verticalLayout->addLayout(horizontalLayout);

        comLForce = new QComboBox(groupBox);
        comLForce->setObjectName(QString::fromUtf8("comLForce"));

        verticalLayout->addWidget(comLForce);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        conditionForce = new QLabel(groupBox);
        conditionForce->setObjectName(QString::fromUtf8("conditionForce"));
        conditionForce->setFont(font);

        horizontalLayout_2->addWidget(conditionForce);

        labelConditionForce = new QLabel(groupBox);
        labelConditionForce->setObjectName(QString::fromUtf8("labelConditionForce"));
        labelConditionForce->setFont(font);
        labelConditionForce->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(labelConditionForce);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        openBForce = new QPushButton(groupBox);
        openBForce->setObjectName(QString::fromUtf8("openBForce"));

        horizontalLayout_3->addWidget(openBForce);

        closeBForce = new QPushButton(groupBox);
        closeBForce->setObjectName(QString::fromUtf8("closeBForce"));
        closeBForce->setEnabled(false);

        horizontalLayout_3->addWidget(closeBForce);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        taskLength = new QLabel(groupBox);
        taskLength->setObjectName(QString::fromUtf8("taskLength"));
        taskLength->setFont(font);

        verticalLayout_3->addWidget(taskLength);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        portLength = new QLabel(groupBox);
        portLength->setObjectName(QString::fromUtf8("portLength"));
        portLength->setFont(font);

        horizontalLayout_5->addWidget(portLength);

        labelPortLength = new QLabel(groupBox);
        labelPortLength->setObjectName(QString::fromUtf8("labelPortLength"));
        labelPortLength->setFont(font);
        labelPortLength->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_5->addWidget(labelPortLength);


        verticalLayout_3->addLayout(horizontalLayout_5);

        comLLength = new QComboBox(groupBox);
        comLLength->setObjectName(QString::fromUtf8("comLLength"));

        verticalLayout_3->addWidget(comLLength);


        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        conditionLength = new QLabel(groupBox);
        conditionLength->setObjectName(QString::fromUtf8("conditionLength"));
        conditionLength->setFont(font);

        horizontalLayout_6->addWidget(conditionLength);

        labelConditionLength = new QLabel(groupBox);
        labelConditionLength->setObjectName(QString::fromUtf8("labelConditionLength"));
        labelConditionLength->setFont(font);
        labelConditionLength->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_6->addWidget(labelConditionLength);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        openBLength = new QPushButton(groupBox);
        openBLength->setObjectName(QString::fromUtf8("openBLength"));

        horizontalLayout_7->addWidget(openBLength);

        closeBLength = new QPushButton(groupBox);
        closeBLength->setObjectName(QString::fromUtf8("closeBLength"));
        closeBLength->setEnabled(false);

        horizontalLayout_7->addWidget(closeBLength);


        verticalLayout_4->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_11->addLayout(verticalLayout_5);


        horizontalLayout_14->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
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


        horizontalLayout_14->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_12 = new QHBoxLayout(groupBox_3);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        splitter_11 = new QSplitter(groupBox_3);
        splitter_11->setObjectName(QString::fromUtf8("splitter_11"));
        splitter_11->setOrientation(Qt::Vertical);
        lcdN = new QLCDNumber(splitter_11);
        lcdN->setObjectName(QString::fromUtf8("lcdN"));
        lcdN->setMinimumSize(QSize(0, 50));
        splitter_11->addWidget(lcdN);
        layoutWidget = new QWidget(splitter_11);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        splitter_8 = new QSplitter(layoutWidget);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        labelForce = new QLabel(splitter_8);
        labelForce->setObjectName(QString::fromUtf8("labelForce"));
        labelForce->setFont(font);
        splitter_8->addWidget(labelForce);
        spinForce = new QDoubleSpinBox(splitter_8);
        spinForce->setObjectName(QString::fromUtf8("spinForce"));
        splitter_8->addWidget(spinForce);

        verticalLayout_6->addWidget(splitter_8);

        splitter_10 = new QSplitter(layoutWidget);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        splitter_10->addWidget(label_4);
        spinFrequency = new QDoubleSpinBox(splitter_10);
        spinFrequency->setObjectName(QString::fromUtf8("spinFrequency"));
        splitter_10->addWidget(spinFrequency);

        verticalLayout_6->addWidget(splitter_10);

        splitter_9 = new QSplitter(layoutWidget);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        radioNew = new QRadioButton(splitter_9);
        radioNew->setObjectName(QString::fromUtf8("radioNew"));
        radioNew->setChecked(true);
        splitter_9->addWidget(radioNew);
        radioExisting = new QRadioButton(splitter_9);
        radioExisting->setObjectName(QString::fromUtf8("radioExisting"));
        splitter_9->addWidget(radioExisting);

        verticalLayout_6->addWidget(splitter_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        drawB = new QPushButton(layoutWidget);
        drawB->setObjectName(QString::fromUtf8("drawB"));
        drawB->setEnabled(true);
        drawB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));

        horizontalLayout_9->addWidget(drawB);

        stopDB = new QPushButton(layoutWidget);
        stopDB->setObjectName(QString::fromUtf8("stopDB"));
        stopDB->setEnabled(false);
        stopDB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        horizontalLayout_9->addWidget(stopDB);


        verticalLayout_6->addLayout(horizontalLayout_9);

        splitter_11->addWidget(layoutWidget);

        horizontalLayout_12->addWidget(splitter_11);


        horizontalLayout_14->addWidget(groupBox_3);


        verticalLayout_10->addLayout(horizontalLayout_14);

        wGraphic = new QCustomPlot(centralwidget);
        wGraphic->setObjectName(QString::fromUtf8("wGraphic"));
        wGraphic->setMinimumSize(QSize(0, 240));

        verticalLayout_10->addWidget(wGraphic);


        verticalLayout_11->addLayout(verticalLayout_10);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 993, 21));
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
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Database", nullptr));
        NDB->setText(QCoreApplication::translate("MainWindow", "NEW:", nullptr));
        labelSet->setText(QCoreApplication::translate("MainWindow", "Series:", nullptr));
        lineSeries->setText(QCoreApplication::translate("MainWindow", "New Series", nullptr));
        DFD->setText(QCoreApplication::translate("MainWindow", "DRAW FROM DATABASE:", nullptr));
        drawFromDatabase->setText(QCoreApplication::translate("MainWindow", "Series", nullptr));
        drawFromDatabase_2->setText(QCoreApplication::translate("MainWindow", "Experiment", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Drawing", nullptr));
        labelForce->setText(QCoreApplication::translate("MainWindow", "Force:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Frequency:", nullptr));
        radioNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        radioExisting->setText(QCoreApplication::translate("MainWindow", "Existing", nullptr));
        drawB->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        stopDB->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
