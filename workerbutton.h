#ifndef WORKERBUTTON_H
#define WORKERBUTTON_H


#include <QObject>
#include <QMutex>
#include <QWaitCondition>

class workerButton : public QObject
{
    Q_OBJECT
public:
    explicit workerButton(QObject *parent = 0);


    void abort();

private:
    bool _abort;

    bool _interrupt;

    QMutex mutex;

    QWaitCondition condition;
signals:
    void valueChanged(const QString &value);

    void finished();

    void clickUpSignal();

    void clickRightSignal();

    void clickDownSignal();

    void clickLeftSignal();

    void clickSelectSignal();

public slots:

    void mainLoop();
};

#endif // WORKERBUTTON_H
