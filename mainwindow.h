#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "workerbutton.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QThread *thread;
    /**
     * @brief Object which contains methods that should be runned in another thread
     */
    workerButton *workerbutton;

public slots:
    void clickUpSlot();

    void clickRightSlot();

    void clickDownSlot();

    void clickLeftSlot();

    void clickSelectSlot();
private slots:
    void on_settingsButton_pressed();
    void on_onButton_pressed();
    void on_backButton_pressed();
    void on_generalButton_pressed();
    void on_advancedButton_pressed();
    void on_backGeneral_pressed();
    void on_backAdvanced_pressed();
    void on_logButton_pressed();
    void on_profileButton_pressed();
    void on_logBackButton_pressed();
};

#endif // MAINWINDOW_H
