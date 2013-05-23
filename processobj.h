#ifndef PROCESS_H
#define PROCESS_H

#include <QObject>
#include <QProcess>

class ProcessObj : public QObject
{
    Q_OBJECT
public:
    explicit ProcessObj(QObject *parent = 0);
    
signals:
    
public slots:
    void call();

private:
    QProcess * m_process;
    
};

#endif // PROCESS_H
