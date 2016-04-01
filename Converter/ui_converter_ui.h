/********************************************************************************
** Form generated from reading UI file 'converter_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTER_UI_H
#define UI_CONVERTER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QtWidgets/QSizePolicy>
#include "control.h"
#include "history_ui.h"

QT_BEGIN_NAMESPACE

class Ui_ConverterUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *ButtonNum0;
    QPushButton *ButtonNum1;
    QPushButton *ButtonNum2;
    QPushButton *ButtonNum3;
    QPushButton *ButtonNum4;
    QPushButton *ButtonNum5;
    QPushButton *ButtonNum6;
    QPushButton *ButtonNum7;
    QPushButton *ButtonNum8;
    QPushButton *ButtonNum9;
    QPushButton *ButtonNum10;
    QPushButton *ButtonNum11;
    QPushButton *ButtonNum12;
    QPushButton *ButtonNum13;
    QPushButton *ButtonNum14;
    QPushButton *ButtonNum15;
    QPushButton *ButtonSep;
    QPushButton *ButtonSign;
    QPushButton *ButtonBS;
    QPushButton *ButtonCL;
    QPushButton *ButtonConvert;
    QPushButton *ButtonHistory;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    HistoryUI *historyList;

    shared_ptr<Control> m_control;

    void setupUi(QMainWindow *ConverterUIClass)
    {
        if (ConverterUIClass->objectName().isEmpty())
            ConverterUIClass->setObjectName(QStringLiteral("ConverterUIClass"));
        historyList = new HistoryUI(0,m_control);
        ConverterUIClass->setFixedSize(215, 416);
        ConverterUIClass->setAcceptDrops(false);
        centralWidget = new QWidget(ConverterUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ButtonNum0 = new QPushButton(centralWidget);
        ButtonNum0->setObjectName(QStringLiteral("ButtonNum0"));
        ButtonNum0->setGeometry(QRect(10, 300, 45, 25));
        ButtonNum1 = new QPushButton(centralWidget);
        ButtonNum1->setObjectName(QStringLiteral("ButtonNum1"));
        ButtonNum1->setGeometry(QRect(10, 270, 45, 25));
        ButtonNum2 = new QPushButton(centralWidget);
        ButtonNum2->setObjectName(QStringLiteral("ButtonNum2"));
        ButtonNum2->setGeometry(QRect(60, 270, 45, 25));
        ButtonNum3 = new QPushButton(centralWidget);
        ButtonNum3->setObjectName(QStringLiteral("ButtonNum3"));
        ButtonNum3->setGeometry(QRect(110, 270, 45, 25));
        ButtonNum4 = new QPushButton(centralWidget);
        ButtonNum4->setObjectName(QStringLiteral("ButtonNum4"));
        ButtonNum4->setGeometry(QRect(160, 270, 45, 25));
        ButtonNum5 = new QPushButton(centralWidget);
        ButtonNum5->setObjectName(QStringLiteral("ButtonNum5"));
        ButtonNum5->setGeometry(QRect(10, 240, 45, 25));
        ButtonNum6 = new QPushButton(centralWidget);
        ButtonNum6->setObjectName(QStringLiteral("ButtonNum6"));
        ButtonNum6->setGeometry(QRect(60, 240, 45, 25));
        ButtonNum7 = new QPushButton(centralWidget);
        ButtonNum7->setObjectName(QStringLiteral("ButtonNum7"));
        ButtonNum7->setGeometry(QRect(110, 240, 45, 25));
        ButtonNum8 = new QPushButton(centralWidget);
        ButtonNum8->setObjectName(QStringLiteral("ButtonNum8"));
        ButtonNum8->setGeometry(QRect(160, 240, 45, 25));
        ButtonNum9 = new QPushButton(centralWidget);
        ButtonNum9->setObjectName(QStringLiteral("ButtonNum9"));
        ButtonNum9->setGeometry(QRect(10, 210, 45, 25));
        ButtonNum10 = new QPushButton(centralWidget);
        ButtonNum10->setObjectName(QStringLiteral("ButtonNum10"));
        ButtonNum10->setGeometry(QRect(60, 210, 45, 25));
        ButtonNum11 = new QPushButton(centralWidget);
        ButtonNum11->setObjectName(QStringLiteral("ButtonNum11"));
        ButtonNum11->setGeometry(QRect(110, 210, 45, 25));
        ButtonNum12 = new QPushButton(centralWidget);
        ButtonNum12->setObjectName(QStringLiteral("ButtonNum12"));
        ButtonNum12->setGeometry(QRect(160, 210, 45, 25));
        ButtonNum13 = new QPushButton(centralWidget);
        ButtonNum13->setObjectName(QStringLiteral("ButtonNum13"));
        ButtonNum13->setGeometry(QRect(10, 180, 45, 25));
        ButtonNum14 = new QPushButton(centralWidget);
        ButtonNum14->setObjectName(QStringLiteral("ButtonNum14"));
        ButtonNum14->setGeometry(QRect(60, 180, 45, 25));
        ButtonNum15 = new QPushButton(centralWidget);
        ButtonNum15->setObjectName(QStringLiteral("ButtonNum15"));
        ButtonNum15->setGeometry(QRect(110, 180, 45, 25));
        ButtonSep = new QPushButton(centralWidget);
        ButtonSep->setObjectName(QStringLiteral("ButtonSep"));
        ButtonSep->setGeometry(QRect(60, 300, 45, 25));
        ButtonSign = new QPushButton(centralWidget);
        ButtonSign->setObjectName(QStringLiteral("ButtonSign"));
        ButtonSign->setGeometry(QRect(110, 300, 45, 25));
        ButtonBS = new QPushButton(centralWidget);
        ButtonBS->setObjectName(QStringLiteral("ButtonBS"));
        ButtonBS->setGeometry(QRect(160, 300, 45, 25));
        ButtonCL = new QPushButton(centralWidget);
        ButtonCL->setObjectName(QStringLiteral("ButtonCL"));
        ButtonCL->setGeometry(QRect(160, 180, 45, 25));
        ButtonConvert = new QPushButton(centralWidget);
        ButtonConvert->setObjectName(QStringLiteral("ButtonConvert"));
        ButtonConvert->setGeometry(QRect(10, 330, 195, 25));
        ButtonHistory = new QPushButton(centralWidget);
        ButtonHistory->setObjectName(QStringLiteral("ButtonHistory"));
        ButtonHistory->setGeometry(QRect(10, 360, 195, 25));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 60, 165, 25));
        horizontalSlider->setAcceptDrops(false);
        horizontalSlider->setMinimum(2);
        horizontalSlider->setMaximum(16);
        horizontalSlider->setSliderPosition(16);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(1);
        horizontalSlider2 = new QSlider(centralWidget);
        horizontalSlider2->setObjectName(QStringLiteral("horizontalSlider2"));
        horizontalSlider2->setGeometry(QRect(10, 145, 165, 25));
        horizontalSlider2->setAcceptDrops(false);
        horizontalSlider2->setMinimum(2);
        horizontalSlider2->setMaximum(16);
        horizontalSlider2->setSliderPosition(16);
        horizontalSlider2->setOrientation(Qt::Horizontal);
        horizontalSlider2->setTickPosition(QSlider::TicksBelow);
        horizontalSlider2->setTickInterval(1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(185, 65, 40, 11));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(185, 150, 40, 11));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 25, 195, 25));
        lineEdit->setText("0");
        lineEdit2 = new QLineEdit(centralWidget);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(10, 115, 195, 25));
        lineEdit2->setText("");
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 40, 11));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 100, 40, 11));
        ConverterUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ConverterUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 199, 21));
        ConverterUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ConverterUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ConverterUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ConverterUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ConverterUIClass->setStatusBar(statusBar);

        retranslateUi(ConverterUIClass);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(horizontalSlider2, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));
        QObject::connect(horizontalSlider2, &QSlider::valueChanged, [=] (int i)
        {
            lineEdit2->setText("");
            m_control->SetP2(i);
        });
        QObject::connect(horizontalSlider, &QSlider::valueChanged, [=] (int i)
        {
            lineEdit->setText("0");
            m_control->SetP1(i);
            ButtonNum2->setEnabled(true);
            ButtonNum3->setEnabled(true);
            ButtonNum4->setEnabled(true);
            ButtonNum5->setEnabled(true);
            ButtonNum6->setEnabled(true);
            ButtonNum7->setEnabled(true);
            ButtonNum8->setEnabled(true);
            ButtonNum9->setEnabled(true);
            ButtonNum10->setEnabled(true);
            ButtonNum11->setEnabled(true);
            ButtonNum12->setEnabled(true);
            ButtonNum13->setEnabled(true);
            ButtonNum14->setEnabled(true);
            ButtonNum15->setEnabled(true);
            switch (i)
            {
                case 2:
                    ButtonNum2->setEnabled(false);
                case 3:
                    ButtonNum3->setEnabled(false);
                case 4:
                    ButtonNum4->setEnabled(false);
                case 5:
                    ButtonNum5->setEnabled(false);
                case 6:
                    ButtonNum6->setEnabled(false);
                case 7:
                    ButtonNum7->setEnabled(false);
                case 8:
                    ButtonNum8->setEnabled(false);
                case 9:
                    ButtonNum9->setEnabled(false);
                case 10:
                    ButtonNum10->setEnabled(false);
                case 11:
                    ButtonNum11->setEnabled(false);
                case 12:
                    ButtonNum12->setEnabled(false);
                case 13:
                    ButtonNum13->setEnabled(false);
                case 14:
                    ButtonNum14->setEnabled(false);
                case 15:
                    ButtonNum15->setEnabled(false);
                default:
                    break;
            }
        });
        QObject::connect(ButtonNum0, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(0)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum1, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(1)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum2, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(2)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum3, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(3)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum4, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(4)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum5, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(5)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum6, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(6)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum7, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(7)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum8, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(8)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum9, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(9)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum10, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(10)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum11, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(11)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum12, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(12)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum13, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(13)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum14, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(14)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonNum15, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(15)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonSep, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(16)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonSign, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(17)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonBS, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(18)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonCL, &QPushButton::clicked, [&]
        {
            lineEdit->setText(QString::fromStdString(m_control->SendCommand(19)));
            lineEdit2->setText("");
        });
        QObject::connect(ButtonConvert, &QPushButton::clicked, [&]
        {
            lineEdit2->setText(QString::fromStdString(m_control->SendCommand(21)));
            historyList->Refresh();
        });
        QObject::connect(ButtonHistory, &QPushButton::clicked, [&]
        {
            historyList->Show();
        });
        QMetaObject::connectSlotsByName(ConverterUIClass); 
    } // setupUi

    void retranslateUi(QMainWindow *ConverterUIClass)
    {
        ConverterUIClass->setWindowTitle(QApplication::translate("ConverterUIClass", "Converter", 0));
        ButtonNum0->setText(QApplication::translate("ConverterUIClass", "0", 0));
        ButtonNum1->setText(QApplication::translate("ConverterUIClass", "1", 0));
        ButtonNum2->setText(QApplication::translate("ConverterUIClass", "2", 0));
        ButtonNum3->setText(QApplication::translate("ConverterUIClass", "3", 0));
        ButtonNum4->setText(QApplication::translate("ConverterUIClass", "4", 0));
        ButtonNum5->setText(QApplication::translate("ConverterUIClass", "5", 0));
        ButtonNum6->setText(QApplication::translate("ConverterUIClass", "6", 0));
        ButtonNum7->setText(QApplication::translate("ConverterUIClass", "7", 0));
        ButtonNum8->setText(QApplication::translate("ConverterUIClass", "8", 0));
        ButtonNum9->setText(QApplication::translate("ConverterUIClass", "9", 0));
        ButtonNum10->setText(QApplication::translate("ConverterUIClass", "A", 0));
        ButtonNum11->setText(QApplication::translate("ConverterUIClass", "B", 0));
        ButtonNum12->setText(QApplication::translate("ConverterUIClass", "C", 0));
        ButtonNum13->setText(QApplication::translate("ConverterUIClass", "D", 0));
        ButtonNum14->setText(QApplication::translate("ConverterUIClass", "E", 0));
        ButtonNum15->setText(QApplication::translate("ConverterUIClass", "F", 0));
        ButtonSep->setText(QApplication::translate("ConverterUIClass", ".", 0));
        ButtonSign->setText(QApplication::translate("ConverterUIClass", "+/-", 0));
        ButtonBS->setText(QApplication::translate("ConverterUIClass", "BS", 0));
        ButtonCL->setText(QApplication::translate("ConverterUIClass", "CL", 0));
        ButtonConvert->setText(QApplication::translate("ConverterUIClass", "Convert", 0));
        ButtonHistory->setText(QApplication::translate("ConverterUIClass", "History", 0));
        label->setText(QApplication::translate("ConverterUIClass", "16", 0));
        label_3->setText(QApplication::translate("ConverterUIClass", "From", 0));
        label_4->setText(QApplication::translate("ConverterUIClass", "16", 0));
        label_6->setText(QApplication::translate("ConverterUIClass", "To", 0));
    } // retranslateUi

};

namespace Ui {
    class ConverterUIClass: public Ui_ConverterUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_UI_H
