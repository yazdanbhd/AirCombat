#include <QApplication>
#include <QPushButton>
#include "src/views/Game.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    (new Game())->show();
    return QApplication::exec();
}
