#include "MainQMW.h"

#include <QApplication>

int main(int argc, char* argv[]) {

    QApplication a(argc, argv);

    MainQMW w;
    w.show();

    return a.exec();
}
