#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <qcustomplot.h>
#include <qvector.h>
#include <QDebug>

class graphic
{
    QCustomPlot* Graphic;   //it's a widget where you display a graphic
    QCPCurve* plot; //it's a curve which displays on the widget

    int dotIndex = 0;   //it's a number descriming dots order
    //QVector<QCPCurveData> Dots;   //whole dots array
public:
    graphic();
    graphic(QCustomPlot *Graphic);
    ~graphic();
    void setQCustomPlot(QCustomPlot *Graphic);  //method for determing Graphic and plot
    void Add(double l, double f);   //add a new dot to Dots and display one
    void Replot();
    void clear();
};

#endif // GRAPHIC_H
