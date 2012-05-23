#include <QtGui/QApplication>
#include "lemonadelauncher.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LemonadeLauncher w;
    w.show();
    
    return a.exec();
}
