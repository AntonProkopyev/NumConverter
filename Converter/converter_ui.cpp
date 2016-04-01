#include "control.h"
#include "converter_ui.h"

ConverterUI::ConverterUI(QWidget *parent)
    : QMainWindow(parent)
    , m_control(make_shared<Control>())
{
    ui.m_control = m_control;
    ui.setupUi(this);
    

}

ConverterUI::~ConverterUI()
{
}
