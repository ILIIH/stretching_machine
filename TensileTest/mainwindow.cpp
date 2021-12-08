#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Tensile-Test");

    //Windows
    setting = new Settings;

    //Graphic
    Graphic.setQCustomPlot(ui->wGraphic);

    //Com Ports
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort port;
        port.setPort(info);
        if(port.open(QIODevice::ReadWrite))
        {
            portList.append(info.portName());
        }
    }
    ui->comLForce->addItems(portList);
    ui->comLLength->addItems(portList);

    //Timers
    graphFromDB = new QTimer();

    //connect
    connect(setting, &Settings::Open, this, &MainWindow::show);
    connect(timerDraw, &ThreadedTimer::signalForMainWindow, this, &MainWindow::clockDraw);
    connect(timerSerials, &ThreadedTimer::signalForMainWindow, this, &MainWindow::clockSerials);
    connect(graphFromDB, &QTimer::timeout, this, &MainWindow::clockExistingData);


    //vfd
    connect(ui->forwardButton, &QPushButton::clicked, &VFD, &vfd::forward);
    connect(ui->reverseButton, &QPushButton::clicked, &VFD, &vfd::reverse);

      
    ui->spinFrequency->setRange(0, 599);
    ui->spinFrequency->setSingleStep(5);
    ui->spinFrequency->setSuffix(" Hz"); 
      
    db = new DBConnector();
}


MainWindow::~MainWindow()
{
    //delete timerDraw;
    delete ui;
}

void MainWindow::serialRecieve()
{

}


//PLUG!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::comBox()
{
    ui->comLForce->clear();
    ui->comLForce->addItems(portList);
    ui->comLLength->clear();
    ui->comLLength->addItems(portList);
}

void MainWindow::on_openBForce_clicked()
{
    QString name = ui->comLForce->currentText();
    //int index = ui->comLForce->currentIndex();

    portList.removeOne(name);
    usedPorts.append(name);

    comBox();

    //set oportunity to click on the buttons
    ui->openBForce->setEnabled(false);
    ui->closeBForce->setEnabled(true);

    //set style and text of labels
    ui->labelPortForce->setText(name);
    ui->labelPortForce->setStyleSheet("color: rgb(0, 170, 0)");
    ui->labelConditionForce->setText("CONNECTED");
    ui->labelConditionForce->setStyleSheet("color: rgb(0, 170, 0)");

    //serial
    Force.setName(name);
    Force.switchConection();
}

void MainWindow::on_openBLength_clicked()
{
    QString name = ui->comLLength->currentText();
    //int index = ui->comLLength->currentIndex();

    portList.removeOne(name);
    usedPorts.append(name);

    comBox();

    //set oportunity to click on the buttons
    ui->openBLength->setEnabled(false);
    ui->closeBLength->setEnabled(true);

    //set style and text of labels
    ui->labelPortLength->setText(name);
    ui->labelPortLength->setStyleSheet("color: rgb(0, 170, 0)");
    ui->labelConditionLength->setText("CONNECTED");
    ui->labelConditionLength->setStyleSheet("color: rgb(0, 170, 0)");

    //serial
    Length.setName(name);
    Length.switchConection();
}

void MainWindow::on_closeBForce_clicked()
{
    usedPorts.removeOne(Force.getName());
    portList.append(Force.getName());

    comBox();

    //set opportunity to click on the buttons
    ui->openBForce->setEnabled(true);
    ui->closeBForce->setEnabled(false);

    //set style and text of labels
    ui->labelPortForce->setText("None");
    ui->labelPortForce->setStyleSheet("color: rgb(255, 0, 0)");
    ui->labelConditionForce->setText("None");
    ui->labelConditionForce->setStyleSheet("color: rgb(255, 0, 0)");

    Force.switchConection();
}

void MainWindow::on_closeBLength_clicked()
{
    usedPorts.removeOne(Length.getName());
    portList.append(Length.getName());

    comBox();

    //set opportunity to click on the buttons
    ui->openBLength->setEnabled(true);
    ui->closeBLength->setEnabled(false);

    //set style and text of labels
    ui->labelPortLength->setText("None");
    ui->labelPortLength->setStyleSheet("color: rgb(255, 0, 0)");
    ui->labelConditionLength->setText("None");
    ui->labelConditionLength->setStyleSheet("color: rgb(255, 0, 0)");

    Length.switchConection();
}



//MODE NEW/EXISTING!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::on_radioNew_clicked()
{
    ui->lineSeries->setEnabled(true);

    //other widgets
    ui->comSeries->setEnabled(false);
    ui->comExperiment->setEnabled(false);
}

void MainWindow::on_radioExisting_clicked()
{
    ui->comSeries->setEnabled(true);
    ui->comExperiment->setEnabled(true);

    //another widget
    ui->lineSeries->setEnabled(false);

    QSqlQuery qData = db->getSeriesNames();
    while(qData.next())
    {
        ui->comSeries->addItem(qData.value(0).toString());
    }
}



//TIME!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::on_drawB_clicked()
{
    //vfd
    VFD.run();
    VFD.setFrequency(ui->spinFrequency->value());
    //vfd


    drawingTime = 0;
    if (ui->radioNew->isChecked())
    {
        if (Force.getConection() && Length.getConection())
        {
            QMessageBox::information(this, "Drawing", "New");

            //serials
            Length.addPort();
            Length.portOpen();
            Force.addPort();
            Force.portOpen();

            //timers
            timerDraw->startTimer(1000);
            timerSerials->startTimer(100);

            //style button
            ui->closeBForce->setEnabled(false);
            ui->closeBLength->setEnabled(false);
            ui->drawB->setEnabled(false);
            ui->stopDB->setEnabled(true);

            QString currentSeriesName = ui->lineSeries->text();

            if(!db->hasSeries(currentSeriesName))
            {
                currentSeriesNum = db->countSeries() + 1;
                db->createSeries(currentSeriesNum, currentSeriesName/* I need more lineEdits to obtain all the needed info */);
            }
        }
        else
        {
            QMessageBox::information(this, "CAUTION!!!", "No connection");
        }
    }
    else
    {
        QMessageBox::information(this, "Drawing", "Existing");

        //Timer
        graphFromDB->start(100);

        //style button
        ui->drawB->setEnabled(false);
        ui->stopDB->setEnabled(true);
    }
}

void MainWindow::clockDraw()
{
    Graphic.Replot();
}

void MainWindow::clockSerials()
{
    double l = Length.getSeria();
    double f = Force.getSeria();
    Graphic.Add(l, f);

    db->insertData(currentSeriesNum, currentExperiment, drawingTime, f, l); // drawing time?

    //Widget
    ui->lcdN->display(drawingTime);
    drawingTime += 0.1;
}

void MainWindow::clockExistingData()
{

    QSqlQuery data = db->getData(currentSeriesNum, currentExperiment, drawingTime);

    if(data.next()) //OK
    {
        double F = data.value(0).toDouble();
        double delta_l = data.value(1).toDouble();
    }
    else
    {
        // not OK
    }

    Graphic.Add(x, x * x);
    x += 1;
    //Graphic.clear();
    Graphic.Replot();

    //Widget
    ui->lcdN->display(drawingTime);
    drawingTime += 0.1;
}


void MainWindow::on_stopDB_clicked()
{
    //vfd
    VFD.stop();
    //vfd

    if (ui->radioNew->isChecked())
    {
        //serials
        Force.portClose();
        Length.portClose();

        //timers
        timerDraw->stopTimer();
        timerSerials->stopTimer();

        //graph
        Graphic.clear();

        //style button
        ui->closeBForce->setEnabled(true);
        ui->closeBLength->setEnabled(true);
        ui->drawB->setEnabled(true);
        ui->stopDB->setEnabled(false);
    }
    else
    {
        //Timer
        graphFromDB->stop();

        //graph
        Graphic.clear();

        //style button
        ui->drawB->setEnabled(true);
        ui->stopDB->setEnabled(false);
    }
}



//FOLLOWTHELINK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


void MainWindow::on_clickTheSettings_triggered()
{
    setting->show();
    this->close();
}
