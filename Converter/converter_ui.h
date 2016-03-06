#ifndef CONVERTER_UI_H
#define CONVERTER_UI_H

#include <QtWidgets/QMainWindow>
#include "ui_converter_ui.h"

class ConverterUI : public QMainWindow
{
    Q_OBJECT

public:
    ConverterUI(QWidget *parent = 0);
    ~ConverterUI();

private:
    Ui::ConverterUIClass ui;
};

#endif // CONVERTER_UI_H
