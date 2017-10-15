#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    thread = new QThread();
    workerbutton = new workerButton();

    workerbutton->moveToThread(thread);
    connect(thread, SIGNAL(started()), workerbutton, SLOT(mainLoop()));
    connect(workerbutton, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);

    qDebug()<<"Starting thread in Thread "<<this->QObject::thread()->currentThreadId();
    thread->start();

    ui->stackedWidget->setCurrentIndex(1);

    connect(workerbutton, SIGNAL(clickUpSignal()), this, SLOT(clickUpSlot()));
    connect(workerbutton, SIGNAL(clickDownSignal()), this, SLOT(clickDownSlot()));
    connect(workerbutton, SIGNAL(clickRightSignal()), this, SLOT(clickRightSlot()));
    connect(workerbutton, SIGNAL(clickLeftSignal()), this, SLOT(clickLeftSlot()));
    connect(workerbutton, SIGNAL(clickSelectSignal()), this, SLOT(clickSelectSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::clickUpSlot(){
    qDebug()<<"Up";
    if(this->focusWidget()!=ui->generalButton && this->focusWidget()!=ui->onButton
            && this->focusWidget()!=ui->motionButton && this->focusWidget()!=ui->REAL && this->focusWidget()!=ui->objectSlider){
        this->focusWidget()->previousInFocusChain()->setFocus();
    }
}

void MainWindow::clickRightSlot(){
    qDebug()<<"Right";
    if(this->focusWidget()==ui->onButton){
        ui->settingsButton->setFocus();
    }
    else if(ui->stackedWidget->currentIndex()==0 && ui->stackedWidget_2->currentIndex()==1){
        QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Up, Qt::NoModifier);
        QCoreApplication::postEvent (this->focusWidget(), event);

        event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Up, Qt::NoModifier);
        QCoreApplication::postEvent (this->focusWidget(), event);
    }
    else if(ui->stackedWidget->currentIndex()==0 && ui->stackedWidget_2->currentIndex()==0){
        if(this->focusWidget()!=ui->backButton && this->focusWidget()!= ui->backGeneral
                && this->focusWidget()!=ui->backAdvanced && this->focusWidget()!=ui->settingsButton
                && this->focusWidget()!=ui->unmountButton) {
            this->focusWidget()->nextInFocusChain()->setFocus();
        }
    }

}

void MainWindow::clickDownSlot(){
    qDebug()<<"Down";
    if(this->focusWidget()!=ui->backButton && this->focusWidget()!= ui->backGeneral
            && this->focusWidget()!=ui->backAdvanced && this->focusWidget()!=ui->settingsButton
            && this->focusWidget()!=ui->logBackButton) {
        this->focusWidget()->nextInFocusChain()->setFocus();
    }
}

void MainWindow::clickLeftSlot(){
    qDebug()<<"Left";
    if(this->focusWidget()==ui->settingsButton){
        ui->onButton->setFocus();
    }
    else if(ui->stackedWidget->currentIndex()==0 && ui->stackedWidget_2->currentIndex()==1){
        QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Down, Qt::NoModifier);
        QCoreApplication::postEvent (this->focusWidget(), event);

        event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Down, Qt::NoModifier);
        QCoreApplication::postEvent (this->focusWidget(), event);
    }
    else if(ui->stackedWidget->currentIndex()==0 && ui->stackedWidget_2->currentIndex()==0){
        if(this->focusWidget()!=ui->generalButton && this->focusWidget()!=ui->onButton
                && this->focusWidget()!=ui->motionButton && this->focusWidget()!=ui->REAL && this->focusWidget()!=ui->objectSlider){
            this->focusWidget()->previousInFocusChain()->setFocus();
        }
    }
}

void MainWindow::clickSelectSlot(){
    qDebug()<<"Select";

    QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Space, Qt::NoModifier);
    QCoreApplication::postEvent (this->focusWidget(), event);

    event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Space, Qt::NoModifier);
    QCoreApplication::postEvent (this->focusWidget(), event);
}


void MainWindow::on_settingsButton_pressed()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->generalButton->setFocus();
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_onButton_pressed()
{
    if(ui->onButton->text()=="TURN ON"){
        qDebug()<<"ADAMS ON";
        ui->onButton->setText("TURN OFF");
    }
    else if(ui->onButton->text()=="TURN OFF"){
        qDebug()<<"ADAMS OFF";
        ui->onButton->setText("TURN ON");
    }
}

void MainWindow::on_backButton_pressed()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_generalButton_pressed()
{
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->REAL->setFocus();
}

void MainWindow::on_advancedButton_pressed()
{
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->objectSlider->setFocus();
}

void MainWindow::on_backGeneral_pressed()
{
    ui->generalButton->setFocus();
}

void MainWindow::on_backAdvanced_pressed()
{
    ui->advancedButton->setFocus();
}

void MainWindow::on_logButton_pressed()
{
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->motionButton->setFocus();
}

void MainWindow::on_profileButton_pressed()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_logBackButton_pressed()
{
    ui->logButton->setFocus();
}
