#include "dbconnector.h"
#include <QDebug>

DBConnector::DBConnector()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("DataBase.db");

    if(db.open())
    {
        qDebug() << "ok";
        query = new QSqlQuery();
    }
}

DBConnector::~DBConnector()
{
    db.close();
    delete query;
    query = nullptr;
}

void DBConnector::insertData(int seriesNum, int experimentNum, double time, double F, double deltaL)
{
    query->prepare("INSERT INTO experiment_data (series_num,experiment_num,time,F,delta_l) VALUES (?,?,?,?,?)");
    query->addBindValue(seriesNum);
    query->addBindValue(experimentNum);
    query->addBindValue(time);
    query->addBindValue(F);
    query->addBindValue(deltaL);
    query->exec();

    query->clear();
}

void DBConnector::createSeries(int seriesNum, QString seriesName, QString material, int height, int width, int length, QStringList properties)
{
    query->prepare("INSERT INTO experiment_info (series_num,series_name,height,width,material,length) VALUES (?,?,?,?,?,?)");
    query->addBindValue(seriesNum);
    query->addBindValue(seriesName);
    query->addBindValue(height);
    query->addBindValue(width);
    query->addBindValue(material);
    query->addBindValue(length);
    query->exec();

    query->clear();

    query->prepare("CREATE TABLE ? (\"series_num\"  INTEGER NOT NULL, \"experiment_num\"  INTEGER NOT NULL, ? FOREIGN KEY(\"series_num\") REFERENCES \"experiment_info\"(\"series_num\") PRIMARY KEY(\"series_num\",\"experiment_num\");");
    query->addBindValue("series_" + QString::number(seriesNum) + "_info");
    query->addBindValue(properties.join(" REAL NOT NULL,") + " REAL NOT NULL,");
    query->exec();

    query->clear();
}

void DBConnector::deleteSeries(int seriesNum)
{
    query->prepare("DELETE FROM series_info WHERE series_num = ?");
    query->addBindValue(seriesNum);
}

QSqlQuery DBConnector::getSeriesNames()
{
    query->prepare("SELECT series_name FROM  experiment_info");
    query->exec();

    return *query;
}

bool DBConnector::hasSeries(QString name)
{
    query->prepare("SELECT series_num FROM  experiment_info WHERE series_name = ?");
    query->addBindValue(name);

    query->exec();

    if(query->next())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int DBConnector::countSeries()
{
    query->prepare("SELECT COUNT(*) FROM  experiment_info");

    query->exec();
    query->next();

    return query->value(0).toInt();
}

QSqlQuery DBConnector::getData(int seriesNum, int experimentNum, double time)
{
    query->prepare("SELECT F, delta_l FROM  experiment_data WHERE series_num = ? AND experiment_num = ? AND time = ?");
    query->addBindValue(seriesNum);
    query->addBindValue(experimentNum);
    query->addBindValue(time);
    query->exec();

    return *query;
}
