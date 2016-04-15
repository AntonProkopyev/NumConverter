#include "converter_ui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font;
    font.setFamily("Segoe UI");
    font.setPointSize(9);
    a.setFont(font);
    ConverterUI w;
    w.setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    w.show();
    return a.exec();
}
