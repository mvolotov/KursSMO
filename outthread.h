#ifndef OUTTHREAD_H
#define OUTTHREAD_H

#include <QObject>
#include <QString>

class OutThread:public QObject
{
Q_OBJECT
public:
    OutThread(int, QString, QString, QString, QString, QString,
              QString, QString, QString, QString, QString);
    double countPercents(double, double);
    int DistType = 0;
    int tempRuns;
    QString SC;
    QString BS;
    QString ST;
    QString LPMinT;
    QString LPMaxT;
    QString EL;
    QString LEMinT;
    QString LEMaxT;
    QString EAET;
public slots:
    void doWork();
signals:
    void send(QString, QString);
};

#endif // OUTTHREAD_H
