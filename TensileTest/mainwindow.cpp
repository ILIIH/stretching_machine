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

    Graphic.setQCustomPlot(ui->wGraphic);

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

    timerDraw.setFrequancy(1000);
    connect(&threadDraw, &QThread::started, &timerDraw, &Timer::start);
    connect(&timerDraw, &Timer::process, this, &MainWindow::clockDraw);
    connect(&timerDraw, &Timer::finished, this, &MainWindow::finishGraphThread);

    timerSerial.setFrequancy(100);
    connect(&threadSerial, &QThread::started, &timerSerial, &Timer::start);
    connect(&timerSerial, &Timer::process, this, &MainWindow::clockSerial);
    connect(&timerSerial, &Timer::finished, this, &MainWindow::finishSerialThread);

    timerDraw.moveToThread(&threadDraw);
    timerSerial.moveToThread(&threadSerial);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addDot_clicked()
{
    double l = ui->length->text().toDouble();
    double f = ui->force->text().toDouble();
    Graphic.Add(l, f);
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
    int index = ui->comLForce->currentIndex();

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
    Force.setName(name, index);
    Force.switchConection();
}

void MainWindow::on_openBLength_clicked()
{
    QString name = ui->comLLength->currentText();
    int index = ui->comLLength->currentIndex();

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
    Length.setName(name, index);
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
}



//TIME!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::on_drawB_clicked()
{
    if (ui->radioNew->isCheckable())
    {
        if(Force.getConection() && Length.getConection())
        {
            QMessageBox::information(this, "Drawing", "New");

            threadDraw.start();
            threadSerial.start();

            //style button
            ui->closeBForce->setEnabled(false);
            ui->closeBLength->setEnabled(false);
            ui->drawB->setEnabled(false);
            ui->stopDB->setEnabled(true);
        }
        else
        {
            QMessageBox::information(this, "CAUTION!!!", "No connection");
        }
    }
    else
    {
        QMessageBox::information(this, "Drawing", "Existing");
    }
}

void MainWindow::clockDraw()
{
    Graphic.replot();
}

void MainWindow::clockSerial()
{
    Graphic.Add(x, x * x);
    x += 1;
}

void MainWindow::on_stopDB_clicked()
{
    timerDraw.stop();
    timerSerial.stop();

    //style button
    ui->closeBForce->setEnabled(true);
    ui->closeBLength->setEnabled(true);
    ui->drawB->setEnabled(true);
    ui->stopDB->setEnabled(false);
}



//THREADS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::finishGraphThread()
{
    threadDraw.quit();
    threadDraw.wait();
}

void MainWindow::finishSerialThread()
{
    threadSerial.quit();
    threadSerial.wait();
}

