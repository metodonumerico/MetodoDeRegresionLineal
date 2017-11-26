#include "regresionl.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    regresionL w;
    w.show();

    return a.exec();
}
