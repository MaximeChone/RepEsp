#include "mainwindow.h"
#include "Test.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    RepEsp *re = new RepEsp();
    Paquet *p = new Paquet("Anglais::Francais");
    Paquet *p2 = new Paquet("Espagnol::Anglais");
    re->ajouterPaquet(p);
    re->ajouterPaquet(p2);

    QApplication a(argc, argv);
    MainWindow w(re);
    w.show();

    return a.exec();
}
