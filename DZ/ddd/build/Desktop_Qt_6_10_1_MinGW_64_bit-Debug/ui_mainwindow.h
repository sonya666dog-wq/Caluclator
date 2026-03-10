/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Button_minus;
    QPushButton *Button_sign;
    QPushButton *Button_1;
    QPushButton *Button_percent;
    QPushButton *Button_9;
    QPushButton *Button_6;
    QPushButton *Button_historyList;
    QPushButton *Button_5;
    QPushButton *Button_4;
    QPushButton *Button_plus;
    QPushButton *button_0;
    QPushButton *Button_ClearHistory;
    QPushButton *Button_8;
    QPushButton *Button_equal;
    QPushButton *Button_clear;
    QPushButton *Button_multiply;
    QPushButton *Button_point;
    QPushButton *Button_divide;
    QPushButton *Button_3;
    QPushButton *Button_7;
    QPushButton *Button_2;
    QListWidget *historyList;
    QLabel *display;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuCalculator;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 654);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 180, 801, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button_minus = new QPushButton(gridLayoutWidget);
        Button_minus->setObjectName("Button_minus");

        gridLayout->addWidget(Button_minus, 2, 5, 1, 1);

        Button_sign = new QPushButton(gridLayoutWidget);
        Button_sign->setObjectName("Button_sign");

        gridLayout->addWidget(Button_sign, 5, 2, 1, 4);

        Button_1 = new QPushButton(gridLayoutWidget);
        Button_1->setObjectName("Button_1");

        gridLayout->addWidget(Button_1, 2, 2, 1, 1);

        Button_percent = new QPushButton(gridLayoutWidget);
        Button_percent->setObjectName("Button_percent");

        gridLayout->addWidget(Button_percent, 4, 4, 1, 1);

        Button_9 = new QPushButton(gridLayoutWidget);
        Button_9->setObjectName("Button_9");

        gridLayout->addWidget(Button_9, 0, 4, 1, 1);

        Button_6 = new QPushButton(gridLayoutWidget);
        Button_6->setObjectName("Button_6");

        gridLayout->addWidget(Button_6, 1, 4, 1, 1);

        Button_historyList = new QPushButton(gridLayoutWidget);
        Button_historyList->setObjectName("Button_historyList");

        gridLayout->addWidget(Button_historyList, 4, 2, 1, 1);

        Button_5 = new QPushButton(gridLayoutWidget);
        Button_5->setObjectName("Button_5");

        gridLayout->addWidget(Button_5, 1, 3, 1, 1);

        Button_4 = new QPushButton(gridLayoutWidget);
        Button_4->setObjectName("Button_4");

        gridLayout->addWidget(Button_4, 1, 2, 1, 1);

        Button_plus = new QPushButton(gridLayoutWidget);
        Button_plus->setObjectName("Button_plus");

        gridLayout->addWidget(Button_plus, 1, 5, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName("button_0");

        gridLayout->addWidget(button_0, 3, 3, 1, 1);

        Button_ClearHistory = new QPushButton(gridLayoutWidget);
        Button_ClearHistory->setObjectName("Button_ClearHistory");

        gridLayout->addWidget(Button_ClearHistory, 4, 3, 1, 1);

        Button_8 = new QPushButton(gridLayoutWidget);
        Button_8->setObjectName("Button_8");

        gridLayout->addWidget(Button_8, 0, 3, 1, 1);

        Button_equal = new QPushButton(gridLayoutWidget);
        Button_equal->setObjectName("Button_equal");

        gridLayout->addWidget(Button_equal, 0, 5, 1, 1);

        Button_clear = new QPushButton(gridLayoutWidget);
        Button_clear->setObjectName("Button_clear");

        gridLayout->addWidget(Button_clear, 3, 2, 1, 1);

        Button_multiply = new QPushButton(gridLayoutWidget);
        Button_multiply->setObjectName("Button_multiply");

        gridLayout->addWidget(Button_multiply, 3, 4, 1, 1);

        Button_point = new QPushButton(gridLayoutWidget);
        Button_point->setObjectName("Button_point");

        gridLayout->addWidget(Button_point, 4, 5, 1, 1);

        Button_divide = new QPushButton(gridLayoutWidget);
        Button_divide->setObjectName("Button_divide");

        gridLayout->addWidget(Button_divide, 3, 5, 1, 1);

        Button_3 = new QPushButton(gridLayoutWidget);
        Button_3->setObjectName("Button_3");

        gridLayout->addWidget(Button_3, 2, 4, 1, 1);

        Button_7 = new QPushButton(gridLayoutWidget);
        Button_7->setObjectName("Button_7");

        gridLayout->addWidget(Button_7, 0, 2, 1, 1);

        Button_2 = new QPushButton(gridLayoutWidget);
        Button_2->setObjectName("Button_2");

        gridLayout->addWidget(Button_2, 2, 3, 1, 1);

        historyList = new QListWidget(gridLayoutWidget);
        historyList->setObjectName("historyList");

        gridLayout->addWidget(historyList, 6, 2, 1, 4);

        display = new QLabel(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(0, 0, 801, 181));
        display->setStyleSheet(QString::fromUtf8("font-size:48pt;"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_historyList->setText(QCoreApplication::translate("MainWindow", "historyList", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_ClearHistory->setText(QCoreApplication::translate("MainWindow", "ClearHistory", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Button_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        display->setText(QString());
        menuCalculator->setTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
