#include "free_serial_isp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FreeSerialIsp w;
    w.show();
    return a.exec();
}
