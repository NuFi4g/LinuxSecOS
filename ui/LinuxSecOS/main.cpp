#include "linuxsecos.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LinuxSecOS w;
    w.show();
    return a.exec();
}
