#ifndef PROJECT_CONTROLLER_H
#define PROJECT_CONTROLLER_H
#include "QObject"
#include "QKeyEvent"
#include "../windows/Game.h"
#include "QGraphicsPixmapItem"


class Controller:public QObject, public QGraphicsPixmapItem{
Q_OBJECT
private:
    Game *game;

public:
    Controller(Game *game);



};


#endif //PROJECT_CONTROLLER_H
