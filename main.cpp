#include "mainwindow.h"
#include "Test.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Test *t = new Test();

    t->test();

    return a.exec();
}
