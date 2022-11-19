#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include "QObject"
#include"QGraphicsView"
#include "QGraphicsPixmapItem"
#include "../views/Queen.h"

class Game :public QGraphicsView{
    Q_OBJECT
private:
    QGraphicsScene* BackgroundScene;
    QList<int*>array;
    QList<Queen*>queens{};
//    QGraphicsScene* playBackgroundScene;


public :
    Game();
    bool possible(int* a, int n, int k);
    void f(int* a, int n, int k);
};


#endif //PROJECT_GAME_H
