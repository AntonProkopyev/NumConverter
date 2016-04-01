#pragma once
#include "control.h"
#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QCloseEvent>
class HistoryUI : QWidget
{
    Q_OBJECT

    QListWidget* listView;
    QPushButton* refreshButton;
    shared_ptr<Control> m_control;
protected:
    void closeEvent(QCloseEvent * event)
    {
        this->hide();
        event->ignore();
    }
public:
    HistoryUI(QWidget * parent, shared_ptr<Control> control) 
        : QWidget(parent)
        , m_control(control)
    {
        this->setFixedSize(250, 335);
        listView = new QListWidget(this);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 0, 250, 290));
        refreshButton = new QPushButton(this);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setText("Clear");
        refreshButton->setGeometry(QRect(10, 300, 100, 25));
        QObject::connect(refreshButton, &QPushButton::clicked, [&]
        {
            m_control->ClearHistory();
            this->Refresh();
        });
        this->hide();
    }

    void Refresh()
    {
       listView->clear();
       auto p = m_control->GetHistory();
       for (auto it = p.first; it != p.second; it++)
           listView->addItem(QString::fromStdString(*it));
    }

    void Show()
    {
        this->show();
    }
};
