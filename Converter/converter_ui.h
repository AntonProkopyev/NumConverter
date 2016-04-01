#ifndef CONVERTER_UI_H
#define CONVERTER_UI_H

#include <QtWidgets/QMainWindow>
#include "control.h"
#include "ui_converter_ui.h"

class ConverterUI : public QMainWindow
{
    Q_OBJECT

public:
    ConverterUI(QWidget *parent = 0);
    ~ConverterUI();
protected:
    void closeEvent(QCloseEvent *event)
    {
        delete ui.historyList;
        event->accept();
    }

private:
    shared_ptr<Control> m_control;
    Ui::ConverterUIClass ui;
};

#endif // CONVERTER_UI_H
