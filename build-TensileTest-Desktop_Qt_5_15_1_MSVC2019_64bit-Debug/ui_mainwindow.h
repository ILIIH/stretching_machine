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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSet;
    QComboBox *comSet;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelSet_2;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QLCDNumber *lcdN;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *drawB;
    QPushButton *stopDB;
    QCustomPlot *wGraphic;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_9;
    QSplitter *splitter_4;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *length;
    QSplitter *splitter_3;
    QLabel *label_2;
    QLineEdit *force;
    QPushButton *addDot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(993, 748);
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
        horizontalLayout_13 = new QHBoxLayout(groupBox_2);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        labelSet = new QLabel(groupBox_2);
        labelSet->setObjectName(QString::fromUtf8("labelSet"));
        labelSet->setFont(font);

        verticalLayout_6->addWidget(labelSet);

        comSet = new QComboBox(groupBox_2);
        comSet->setObjectName(QString::fromUtf8("comSet"));

        verticalLayout_6->addWidget(comSet);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        horizontalLayout_12->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        labelSet_2 = new QLabel(groupBox_2);
        labelSet_2->setObjectName(QString::fromUtf8("labelSet_2"));
        labelSet_2->setFont(font);

        verticalLayout_7->addWidget(labelSet_2);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout_7->addWidget(spinBox);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        horizontalLayout_12->addLayout(verticalLayout_7);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        horizontalLayout_14->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_10 = new QHBoxLayout(groupBox_3);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        lcdN = new QLCDNumber(groupBox_3);
        lcdN->setObjectName(QString::fromUtf8("lcdN"));
        lcdN->setMinimumSize(QSize(0, 50));

        verticalLayout_8->addWidget(lcdN);

        verticalSpacer_3 = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_8->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        drawB = new QPushButton(groupBox_3);
        drawB->setObjectName(QString::fromUtf8("drawB"));
        drawB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));

        horizontalLayout_9->addWidget(drawB);

        stopDB = new QPushButton(groupBox_3);
        stopDB->setObjectName(QString::fromUtf8("stopDB"));
        stopDB->setEnabled(false);
        stopDB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        horizontalLayout_9->addWidget(stopDB);


        verticalLayout_8->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_8);


        horizontalLayout_14->addWidget(groupBox_3);


        verticalLayout_10->addLayout(horizontalLayout_14);

        wGraphic = new QCustomPlot(centralwidget);
        wGraphic->setObjectName(QString::fromUtf8("wGraphic"));
        wGraphic->setMinimumSize(QSize(0, 240));

        verticalLayout_10->addWidget(wGraphic);


        verticalLayout_11->addLayout(verticalLayout_10);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_15 = new QHBoxLayout(groupBox_4);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        splitter_4 = new QSplitter(groupBox_4);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QString::fromUtf8("label"));
        splitter_2->addWidget(label);
        length = new QLineEdit(splitter_2);
        length->setObjectName(QString::fromUtf8("length"));
        splitter_2->addWidget(length);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_3->addWidget(label_2);
        force = new QLineEdit(splitter_3);
        force->setObjectName(QString::fromUtf8("force"));
        splitter_3->addWidget(force);
        splitter_4->addWidget(splitter_3);

        verticalLayout_9->addWidget(splitter_4);

        addDot = new QPushButton(groupBox_4);
        addDot->setObjectName(QString::fromUtf8("addDot"));

        verticalLayout_9->addWidget(addDot);


        horizontalLayout_15->addLayout(verticalLayout_9);


        verticalLayout_11->addWidget(groupBox_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 993, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
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
        labelSet->setText(QCoreApplication::translate("MainWindow", "Series", nullptr));
        labelSet_2->setText(QCoreApplication::translate("MainWindow", "Experiment Number", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Drawing", nullptr));
        drawB->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        stopDB->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "length", nullptr));
        length->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "force", nullptr));
        force->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        addDot->setText(QCoreApplication::translate("MainWindow", "add a dot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
