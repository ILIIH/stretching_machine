#include "graphic.h"

graphic::graphic()
{

}

graphic::graphic(QCustomPlot *Graphic)
{
    setQCustomPlot(Graphic);
}

graphic::~graphic()
{
    //delete plot;
    //delete Graphic;
}

void graphic::setQCustomPlot(QCustomPlot *Graphic)
{
    this->Graphic = Graphic;

    this->plot = new QCPCurve(this->Graphic->xAxis, this->Graphic->yAxis);

    this->plot->setPen(QPen(Qt::black));

    this->Graphic->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    this->Graphic->axisRect()->setupFullAxesBox();
    this->Graphic->rescaleAxes();
}

void graphic::Add(double l, double f)
{
    QCPCurveData recentData = QCPCurveData(dotIndex++, l, f);
    //Dots.append(recentData);
    //plot->data()->set(Dots, true);

    plot->data()->add(recentData);
}

void graphic::Replot()
{
    Graphic->replot();
}
