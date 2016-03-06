#include "converter_ui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConverterUI w;
    w.show();
    return a.exec();
}
