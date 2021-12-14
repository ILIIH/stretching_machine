#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Tensile-Test");

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
    comBox();

    //Timers
    graphFromDB = new QTimer();

    //connect
    connect(timerDraw, &ThreadedTimer::signalForMainWindow, this, &MainWindow::clockDraw);
    connect(timerSerials, &ThreadedTimer::signalForMainWindow, this, &MainWindow::clockSerials);
    connect(graphFromDB, &QTimer::timeout, this, &MainWindow::clockExistingData);


    //vfd
    connect(ui->forwardButton, &QPushButton::clicked, &VFD, &vfd::forward);
    connect(ui->reverseButton, &QPushButton::clicked, &VFD, &vfd::reverse);

      
    ui->spinFrequency->setRange(0, 599);
    ui->spinFrequency->setSingleStep(5);
    ui->spinFrequency->setSuffix(" Hz"); 
      
    db = new DBConnector(this);
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
    ui->comLFrequency->clear();
    ui->comLFrequency->addItems(portList);
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

void MainWindow::on_openBFrequency_clicked()
{
    QString name = ui->comLFrequency->currentText();
    //int index = ui->comLLength->currentIndex();

    portList.removeOne(name);
    usedPorts.append(name);

    comBox();

    //set oportunity to click on the buttons
    ui->openBFrequency->setEnabled(false);
    ui->closeBFrequency->setEnabled(true);

    //set style and text of labels
    ui->labelPortFrequency->setText(name);
    ui->labelPortFrequency->setStyleSheet("color: rgb(0, 170, 0)");
    ui->labelConditionFrequency->setText("CONNECTED");
    ui->labelConditionFrequency->setStyleSheet("color: rgb(0, 170, 0)");

    //serial
    VFD.setName(name);
    VFD.open();
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

void MainWindow::on_closeBFrequency_clicked()
{
    usedPorts.removeOne(VFD.getName());
    portList.append(VFD.getName());

    comBox();

    //set opportunity to click on the buttons
    ui->openBFrequency->setEnabled(true);
    ui->closeBFrequency->setEnabled(false);

    //set style and text of labels
    ui->labelPortFrequency->setText("None");
    ui->labelPortFrequency->setStyleSheet("color: rgb(255, 0, 0)");
    ui->labelConditionFrequency->setText("None");
    ui->labelConditionFrequency->setStyleSheet("color: rgb(255, 0, 0)");
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

void MainWindow::on_comSeries_currentIndexChanged(int index)
{
    QSqlQuery qData = db->getExperiments(index + 1);
    while(qData.next())
    {
        ui->comExperiment->addItem(qData.value(0).toString());
    }
}


//TIME!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::on_drawB_clicked()
{
    //graph
    Graphic.clear();

    drawingTime = 0;
    if (ui->radioNew->isChecked())
    {
        if (Force.getConection() && Length.getConection())
        {
            QMessageBox::information(this, "Drawing", "New");

            //DataBase
            QString currentSeriesName = ui->lineSeries->text();

            if(!db->hasSeries(currentSeriesName))
            {
                currentSeriesNum = db->countSeries() + 1;   //QString material, int height, int width, int length, QStringList properties
                QString material = QInputDialog::getText(this, "New Series", "What's the material?");
                int length = QInputDialog::getInt(this, "New Series", "What's the length?");
                int width = QInputDialog::getInt(this, "New Series", "What's the width?");
                int height = QInputDialog::getInt(this, "New Series", "What's the height?");
                QStringList properties = QInputDialog::getText(this, "New Series", "Write the properties you want to calculate using ONLY comas").split(',');
                db->createSeries(currentSeriesNum, currentSeriesName, material, height, width, length, properties);
            }

            currentExperiment = QInputDialog::getInt(this, "New Experiment", "What's the number of the experiment?");

            //vfd
            VFD.run();
            VFD.setFrequency(ui->spinFrequency->value());
            //vfd

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


        }
        else
        {
            QMessageBox::information(this, "CAUTION!!!", "No connection");
        }
    }
    else if(ui->radioExisting->isChecked())
    {
        currentExperiment = ui->comExperiment->currentText().toInt();

        QMessageBox::information(this, "Drawing", "Existing");

        //Timer
        graphFromDB->start(100);

        //style button
        ui->drawB->setEnabled(false);
        ui->stopDB->setEnabled(true);
    }
    else
    {
        QMessageBox::information(this, "CAUTION!!!", "Chose the radiobutton");
    }
}

void MainWindow::clockDraw()
{
    Graphic.Replot();
}

void MainWindow::clockSerials()
{
    double f = Force.getSeria();
    double l;
    if (f <= 0.1)
    {
        l = Length.getSeria();

        Graphic.Add(l, f);

        db->insertData(currentSeriesNum, currentExperiment, drawingTime, f, l); // Nikita: drawing time? Roma: Yes

        //Widget
        ui->lcdN->display(drawingTime);
        ui->CurrentLengthLCD->display(l);
        ui->CurrentForceLCD->display(f);
        drawingTime += 0.1;
    }
}

void MainWindow::clockExistingData()
{

    QSqlQuery data = db->getData(currentSeriesNum, currentExperiment, drawingTime);

    double F;
    double delta_l;
    if(data.next()) //OK
    {
        F = data.value(0).toDouble();
        delta_l = data.value(1).toDouble();
    }
    else
    {
        graphFromDB->stop();
    }

    Graphic.Add(delta_l, F);

    //Graphic.clear();
    Graphic.Replot();

    //Widget
    ui->lcdN->display(drawingTime);
    ui->CurrentLengthLCD->display(delta_l);
    ui->CurrentForceLCD->display(F);
    drawingTime += 0.1;
}


void MainWindow::on_stopDB_clicked()
{
    if (ui->radioNew->isChecked())
    {
        //vfd
        VFD.stop();
        //vfd

        //serials
        Force.portClose();
        Length.portClose();

        //timers
        timerDraw->stopTimer();
        timerSerials->stopTimer();

        //graph
        //Graphic.clear();

        //style button
        ui->closeBForce->setEnabled(true);
        ui->closeBLength->setEnabled(true);
        ui->drawB->setEnabled(true);
        ui->stopDB->setEnabled(false);
    }
    else
    {
        //vfd
        VFD.stop();
        //vfd

        //Timer
        graphFromDB->stop();

        //graph
        //Graphic.clear();

        //style button
        ui->drawB->setEnabled(true);
        ui->stopDB->setEnabled(false);
    }
}



//FOLLOWTHELINK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void MainWindow::on_clickTheSettings_triggered()
{
    QMessageBox::information(this, "CAUTION!!!", "Chose the radiobutton");
}



//VFD!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void MainWindow::on_pushButton_clicked()
{
    VFD.setFrequency(ui->spinFrequency->value());

}



void MainWindow::on_pushButton_2_clicked()
{
    VFD.stop();
}

