#include <QApplication>
#include <QPushButton>
#include "src/windows/Game.h"
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    (new Game())->show();
    return QCoreApplication::exec();
}
