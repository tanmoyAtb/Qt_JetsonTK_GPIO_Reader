#include "workerbutton.h"
#include <QTimer>
#include <QEventLoop>


#include <iostream>
#include <string>
#include <unistd.h>
#include <QThread>
#include <QDebug>
#include <SimpleGPIO.h>


unsigned int LEDGPIO = 57;   // GPIO1_28 = (1x32) + 28 = 60
unsigned int ButtonGPIO_UP = 160;   // GPIO0_15 = (0x32) + 15 = 15
unsigned int ButtonGPIO_LEFT = 161;
unsigned int ButtonGPIO_RIGHT = 163;
unsigned int ButtonGPIO_DOWN = 164;
unsigned int ButtonGPIO_SELECT = 165;

workerButton::workerButton(QObject *parent) :
    QObject(parent)
{
    _abort = false;
    _interrupt = false;
}


void workerButton::abort()
{
    qDebug()<<"Request worker aborting in Thread "<<thread()->currentThreadId();
    QMutexLocker locker(&mutex);
    _abort = true;
    condition.wakeOne();
}


void workerButton::mainLoop()
{
    qDebug()<<"Starting worker mainLoop in Thread "<<thread()->currentThreadId();

    forever {
        mutex.lock();


        if (_abort) {
            qDebug()<<"Aborting worker mainLoop in Thread "<<thread()->currentThreadId();
            mutex.unlock();
            emit finished();
            return;
        }
        mutex.unlock();

        qDebug()<<"Starting Method3 in Thread "<<thread()->currentThreadId();

        for (int i = 0; i < 30; i ++) {

            mutex.lock();
            bool abort = _abort;
            bool interrupt = _interrupt;
            mutex.unlock();

            if (abort || interrupt) {
                qDebug()<<"Interrupting Method3 in Thread "<<thread()->currentThreadId();
                break;
            }

            qDebug() << "Testing the GPIO Pins" << endl;

            gpio_export(LEDGPIO);    // The LED
            gpio_export(ButtonGPIO_UP);   // The push button switch
            gpio_export(ButtonGPIO_LEFT);
            gpio_export(ButtonGPIO_RIGHT);
            gpio_export(ButtonGPIO_DOWN);
            gpio_export(ButtonGPIO_SELECT);


            gpio_set_dir(LEDGPIO, OUTPUT_PIN);   // The LED is an output

            gpio_set_dir(ButtonGPIO_UP, INPUT_PIN);   // The push button input
            gpio_set_dir(ButtonGPIO_LEFT, INPUT_PIN);
            gpio_set_dir(ButtonGPIO_RIGHT, INPUT_PIN);
            gpio_set_dir(ButtonGPIO_DOWN, INPUT_PIN);
            gpio_set_dir(ButtonGPIO_SELECT, INPUT_PIN);


            // Wait for the push button to be pressed
            qDebug() << "Please press any button!" << endl;

            unsigned int value = LOW;

            while(1)
            {
                gpio_get_value(ButtonGPIO_UP, &value);
                if(value == HIGH) {
                    emit clickUpSignal();


                }
                usleep(30000);
                gpio_get_value(ButtonGPIO_DOWN, &value);
                if(value == HIGH) {
                    emit clickDownSignal();

                }
                usleep(30000);
                gpio_get_value(ButtonGPIO_LEFT, &value);
                if(value == HIGH) {
                    emit clickLeftSignal();

                }
                usleep(30000);
                gpio_get_value(ButtonGPIO_RIGHT, &value);
                if(value == HIGH) {
                    emit clickRightSignal();

                }
                usleep(30000);
                gpio_get_value(ButtonGPIO_SELECT, &value);
                if(value == HIGH){
                     emit clickSelectSignal();

                }
                usleep(30000);
            }

            qDebug() << "Finished Testing the GPIO Pins" << endl;
            gpio_unexport(LEDGPIO);     // unexport the LED
            gpio_unexport(ButtonGPIO_UP);  // unexport the push button
            gpio_unexport(ButtonGPIO_DOWN);
            gpio_unexport(ButtonGPIO_LEFT);
            gpio_unexport(ButtonGPIO_RIGHT);
            gpio_unexport(ButtonGPIO_SELECT);
        }

    }
}
