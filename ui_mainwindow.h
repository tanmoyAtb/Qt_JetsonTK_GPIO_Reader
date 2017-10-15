/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *settingsPage;
    QStackedWidget *stackedWidget_2;
    QWidget *generalPage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *saveGeneral;
    QPushButton *backGeneral;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *VISUAL;
    QRadioButton *AUDIENCE;
    QRadioButton *VISUALAUDIENCE;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *OBJECTS;
    QRadioButton *LANE;
    QRadioButton *OBJECTLANE;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *REAL;
    QRadioButton *ANIMATED;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *ENGLISH;
    QRadioButton *BANGLA;
    QWidget *advancedPage;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QSlider *objectSlider;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QSlider *LaneSlider;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QSlider *volumeSlider;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *saveAdvanced;
    QPushButton *backAdvanced;
    QWidget *logPage;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_9;
    QPushButton *motionButton;
    QPushButton *gpsButton;
    QPushButton *videoButton;
    QPushButton *formatButton;
    QPushButton *unmountButton;
    QPushButton *logBackButton;
    QWidget *profilePage;
    QWidget *layoutWidget8;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout;
    QPushButton *generalButton;
    QPushButton *advancedButton;
    QPushButton *logButton;
    QPushButton *profileButton;
    QPushButton *backButton;
    QWidget *onPage;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout;
    QPushButton *onButton;
    QPushButton *settingsButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(656, 418);
        MainWindow->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    \n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QRadioButton:focus {\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QSlider:focus {\n"
"    border: 2px solid QLinearGradie"
                        "nt( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QStringLiteral(""));
        settingsPage = new QWidget();
        settingsPage->setObjectName(QStringLiteral("settingsPage"));
        settingsPage->setStyleSheet(QStringLiteral(""));
        stackedWidget_2 = new QStackedWidget(settingsPage);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(90, 0, 551, 401));
        generalPage = new QWidget();
        generalPage->setObjectName(QStringLiteral("generalPage"));
        layoutWidget = new QWidget(generalPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 360, 221, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        saveGeneral = new QPushButton(layoutWidget);
        saveGeneral->setObjectName(QStringLiteral("saveGeneral"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveGeneral->sizePolicy().hasHeightForWidth());
        saveGeneral->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(saveGeneral);

        backGeneral = new QPushButton(layoutWidget);
        backGeneral->setObjectName(QStringLiteral("backGeneral"));
        sizePolicy.setHeightForWidth(backGeneral->sizePolicy().hasHeightForWidth());
        backGeneral->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(backGeneral);

        layoutWidget1 = new QWidget(generalPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 160, 401, 55));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        VISUAL = new QRadioButton(layoutWidget1);
        VISUAL->setObjectName(QStringLiteral("VISUAL"));

        horizontalLayout_4->addWidget(VISUAL);

        AUDIENCE = new QRadioButton(layoutWidget1);
        AUDIENCE->setObjectName(QStringLiteral("AUDIENCE"));

        horizontalLayout_4->addWidget(AUDIENCE);

        VISUALAUDIENCE = new QRadioButton(layoutWidget1);
        VISUALAUDIENCE->setObjectName(QStringLiteral("VISUALAUDIENCE"));

        horizontalLayout_4->addWidget(VISUALAUDIENCE);


        verticalLayout_4->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(generalPage);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 90, 367, 55));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        OBJECTS = new QRadioButton(layoutWidget2);
        OBJECTS->setObjectName(QStringLiteral("OBJECTS"));

        horizontalLayout_3->addWidget(OBJECTS);

        LANE = new QRadioButton(layoutWidget2);
        LANE->setObjectName(QStringLiteral("LANE"));

        horizontalLayout_3->addWidget(LANE);

        OBJECTLANE = new QRadioButton(layoutWidget2);
        OBJECTLANE->setObjectName(QStringLiteral("OBJECTLANE"));

        horizontalLayout_3->addWidget(OBJECTLANE);


        verticalLayout_3->addLayout(horizontalLayout_3);

        layoutWidget3 = new QWidget(generalPage);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 20, 261, 55));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        REAL = new QRadioButton(layoutWidget3);
        REAL->setObjectName(QStringLiteral("REAL"));

        horizontalLayout_2->addWidget(REAL);

        ANIMATED = new QRadioButton(layoutWidget3);
        ANIMATED->setObjectName(QStringLiteral("ANIMATED"));

        horizontalLayout_2->addWidget(ANIMATED);


        verticalLayout_2->addLayout(horizontalLayout_2);

        layoutWidget4 = new QWidget(generalPage);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 240, 241, 55));
        verticalLayout_10 = new QVBoxLayout(layoutWidget4);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_10->addWidget(label_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        ENGLISH = new QRadioButton(layoutWidget4);
        ENGLISH->setObjectName(QStringLiteral("ENGLISH"));

        horizontalLayout_7->addWidget(ENGLISH);

        BANGLA = new QRadioButton(layoutWidget4);
        BANGLA->setObjectName(QStringLiteral("BANGLA"));

        horizontalLayout_7->addWidget(BANGLA);


        verticalLayout_10->addLayout(horizontalLayout_7);

        stackedWidget_2->addWidget(generalPage);
        advancedPage = new QWidget();
        advancedPage->setObjectName(QStringLiteral("advancedPage"));
        layoutWidget5 = new QWidget(advancedPage);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(30, 20, 411, 184));
        verticalLayout_8 = new QVBoxLayout(layoutWidget5);
        verticalLayout_8->setSpacing(10);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        objectSlider = new QSlider(layoutWidget5);
        objectSlider->setObjectName(QStringLiteral("objectSlider"));
        objectSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(objectSlider);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_6->addWidget(label_5);

        LaneSlider = new QSlider(layoutWidget5);
        LaneSlider->setObjectName(QStringLiteral("LaneSlider"));
        LaneSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(LaneSlider);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);

        volumeSlider = new QSlider(layoutWidget5);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(volumeSlider);


        verticalLayout_8->addLayout(verticalLayout_7);

        layoutWidget6 = new QWidget(advancedPage);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(30, 360, 221, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        saveAdvanced = new QPushButton(layoutWidget6);
        saveAdvanced->setObjectName(QStringLiteral("saveAdvanced"));
        sizePolicy.setHeightForWidth(saveAdvanced->sizePolicy().hasHeightForWidth());
        saveAdvanced->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(saveAdvanced);

        backAdvanced = new QPushButton(layoutWidget6);
        backAdvanced->setObjectName(QStringLiteral("backAdvanced"));
        sizePolicy.setHeightForWidth(backAdvanced->sizePolicy().hasHeightForWidth());
        backAdvanced->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(backAdvanced);

        stackedWidget_2->addWidget(advancedPage);
        logPage = new QWidget();
        logPage->setObjectName(QStringLiteral("logPage"));
        layoutWidget7 = new QWidget(logPage);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(220, 60, 127, 241));
        verticalLayout_9 = new QVBoxLayout(layoutWidget7);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        motionButton = new QPushButton(layoutWidget7);
        motionButton->setObjectName(QStringLiteral("motionButton"));
        sizePolicy.setHeightForWidth(motionButton->sizePolicy().hasHeightForWidth());
        motionButton->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(motionButton);

        gpsButton = new QPushButton(layoutWidget7);
        gpsButton->setObjectName(QStringLiteral("gpsButton"));
        sizePolicy.setHeightForWidth(gpsButton->sizePolicy().hasHeightForWidth());
        gpsButton->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(gpsButton);

        videoButton = new QPushButton(layoutWidget7);
        videoButton->setObjectName(QStringLiteral("videoButton"));
        sizePolicy.setHeightForWidth(videoButton->sizePolicy().hasHeightForWidth());
        videoButton->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(videoButton);

        formatButton = new QPushButton(layoutWidget7);
        formatButton->setObjectName(QStringLiteral("formatButton"));
        sizePolicy.setHeightForWidth(formatButton->sizePolicy().hasHeightForWidth());
        formatButton->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(formatButton);

        unmountButton = new QPushButton(layoutWidget7);
        unmountButton->setObjectName(QStringLiteral("unmountButton"));
        sizePolicy.setHeightForWidth(unmountButton->sizePolicy().hasHeightForWidth());
        unmountButton->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(unmountButton);

        logBackButton = new QPushButton(layoutWidget7);
        logBackButton->setObjectName(QStringLiteral("logBackButton"));
        sizePolicy.setHeightForWidth(logBackButton->sizePolicy().hasHeightForWidth());
        logBackButton->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(logBackButton);

        stackedWidget_2->addWidget(logPage);
        profilePage = new QWidget();
        profilePage->setObjectName(QStringLiteral("profilePage"));
        layoutWidget8 = new QWidget(profilePage);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(30, 20, 401, 62));
        formLayout = new QFormLayout(layoutWidget8);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(20);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget8);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit = new QLineEdit(layoutWidget8);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_2 = new QLineEdit(layoutWidget8);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        stackedWidget_2->addWidget(profilePage);
        layoutWidget9 = new QWidget(settingsPage);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(0, 0, 91, 391));
        verticalLayout = new QVBoxLayout(layoutWidget9);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        generalButton = new QPushButton(layoutWidget9);
        generalButton->setObjectName(QStringLiteral("generalButton"));
        sizePolicy.setHeightForWidth(generalButton->sizePolicy().hasHeightForWidth());
        generalButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(generalButton);

        advancedButton = new QPushButton(layoutWidget9);
        advancedButton->setObjectName(QStringLiteral("advancedButton"));
        sizePolicy.setHeightForWidth(advancedButton->sizePolicy().hasHeightForWidth());
        advancedButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(advancedButton);

        logButton = new QPushButton(layoutWidget9);
        logButton->setObjectName(QStringLiteral("logButton"));
        sizePolicy.setHeightForWidth(logButton->sizePolicy().hasHeightForWidth());
        logButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(logButton);

        profileButton = new QPushButton(layoutWidget9);
        profileButton->setObjectName(QStringLiteral("profileButton"));
        sizePolicy.setHeightForWidth(profileButton->sizePolicy().hasHeightForWidth());
        profileButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(profileButton);

        backButton = new QPushButton(layoutWidget9);
        backButton->setObjectName(QStringLiteral("backButton"));
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(backButton);

        stackedWidget->addWidget(settingsPage);
        onPage = new QWidget();
        onPage->setObjectName(QStringLiteral("onPage"));
        onPage->setStyleSheet(QStringLiteral(""));
        layoutWidget10 = new QWidget(onPage);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(180, 110, 231, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget10);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        onButton = new QPushButton(layoutWidget10);
        onButton->setObjectName(QStringLiteral("onButton"));
        sizePolicy.setHeightForWidth(onButton->sizePolicy().hasHeightForWidth());
        onButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(onButton);

        settingsButton = new QPushButton(layoutWidget10);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        sizePolicy.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(settingsButton);

        stackedWidget->addWidget(onPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(onButton, settingsButton);
        QWidget::setTabOrder(settingsButton, generalButton);
        QWidget::setTabOrder(generalButton, advancedButton);
        QWidget::setTabOrder(advancedButton, logButton);
        QWidget::setTabOrder(logButton, profileButton);
        QWidget::setTabOrder(profileButton, backButton);
        QWidget::setTabOrder(backButton, REAL);
        QWidget::setTabOrder(REAL, ANIMATED);
        QWidget::setTabOrder(ANIMATED, OBJECTS);
        QWidget::setTabOrder(OBJECTS, LANE);
        QWidget::setTabOrder(LANE, OBJECTLANE);
        QWidget::setTabOrder(OBJECTLANE, VISUAL);
        QWidget::setTabOrder(VISUAL, AUDIENCE);
        QWidget::setTabOrder(AUDIENCE, VISUALAUDIENCE);
        QWidget::setTabOrder(VISUALAUDIENCE, ENGLISH);
        QWidget::setTabOrder(ENGLISH, BANGLA);
        QWidget::setTabOrder(BANGLA, saveGeneral);
        QWidget::setTabOrder(saveGeneral, backGeneral);
        QWidget::setTabOrder(backGeneral, objectSlider);
        QWidget::setTabOrder(objectSlider, LaneSlider);
        QWidget::setTabOrder(LaneSlider, volumeSlider);
        QWidget::setTabOrder(volumeSlider, saveAdvanced);
        QWidget::setTabOrder(saveAdvanced, backAdvanced);
        QWidget::setTabOrder(backAdvanced, motionButton);
        QWidget::setTabOrder(motionButton, gpsButton);
        QWidget::setTabOrder(gpsButton, videoButton);
        QWidget::setTabOrder(videoButton, formatButton);
        QWidget::setTabOrder(formatButton, unmountButton);
        QWidget::setTabOrder(unmountButton, logBackButton);
        QWidget::setTabOrder(logBackButton, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", " ADAMS KIT V1", 0));
        saveGeneral->setText(QApplication::translate("MainWindow", "SAVE", 0));
        backGeneral->setText(QApplication::translate("MainWindow", "BACK", 0));
        label_3->setText(QApplication::translate("MainWindow", "WARNING TYPE", 0));
        VISUAL->setText(QApplication::translate("MainWindow", "VISUAL", 0));
        AUDIENCE->setText(QApplication::translate("MainWindow", "AUDIENCE", 0));
        VISUALAUDIENCE->setText(QApplication::translate("MainWindow", "VISUAL / AUDIENCE", 0));
        label_2->setText(QApplication::translate("MainWindow", "DETECTION TYPE", 0));
        OBJECTS->setText(QApplication::translate("MainWindow", "OBJECTS", 0));
        LANE->setText(QApplication::translate("MainWindow", "LANE", 0));
        OBJECTLANE->setText(QApplication::translate("MainWindow", "OBJECT / LANE", 0));
        label->setText(QApplication::translate("MainWindow", "VIEW TYPE", 0));
        REAL->setText(QApplication::translate("MainWindow", "REAL VIEW", 0));
        ANIMATED->setText(QApplication::translate("MainWindow", "ANIMATED VIEW", 0));
        label_9->setText(QApplication::translate("MainWindow", "LANGUAGE", 0));
        ENGLISH->setText(QApplication::translate("MainWindow", "ENGLISH", 0));
        BANGLA->setText(QApplication::translate("MainWindow", "BANGLA", 0));
        label_4->setText(QApplication::translate("MainWindow", "OBJECT DETECTION", 0));
        label_5->setText(QApplication::translate("MainWindow", "LANE DETECTION", 0));
        label_6->setText(QApplication::translate("MainWindow", "VOLUME", 0));
        saveAdvanced->setText(QApplication::translate("MainWindow", "SAVE", 0));
        backAdvanced->setText(QApplication::translate("MainWindow", "BACK", 0));
        motionButton->setText(QApplication::translate("MainWindow", "MOTION", 0));
        gpsButton->setText(QApplication::translate("MainWindow", "GPS", 0));
        videoButton->setText(QApplication::translate("MainWindow", "VIDEO", 0));
        formatButton->setText(QApplication::translate("MainWindow", "FORMAT SD CARD", 0));
        unmountButton->setText(QApplication::translate("MainWindow", "UNMOUNT SD CARD", 0));
        logBackButton->setText(QApplication::translate("MainWindow", "BACK", 0));
        label_7->setText(QApplication::translate("MainWindow", "PERFORMANCE INDEX", 0));
        label_8->setText(QApplication::translate("MainWindow", "LICENSE", 0));
        generalButton->setText(QApplication::translate("MainWindow", "GENERAL", 0));
        advancedButton->setText(QApplication::translate("MainWindow", "ADVANCED", 0));
        logButton->setText(QApplication::translate("MainWindow", "LOG", 0));
        profileButton->setText(QApplication::translate("MainWindow", "PROFILE", 0));
        backButton->setText(QApplication::translate("MainWindow", "BACK", 0));
        onButton->setText(QApplication::translate("MainWindow", "TURN ON", 0));
        settingsButton->setText(QApplication::translate("MainWindow", "SETTINGS", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
