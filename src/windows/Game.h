#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include "QObject"
#include"QGraphicsView"
#include "QGraphicsPixmapItem"

class Game :public QGraphicsView{
    Q_OBJECT
private:
    QGraphicsScene* BackgroundScene;
    QList<int*>array;
//    QGraphicsScene* playBackgroundScene;

public :
    Game();
};


#endif //PROJECT_GAME_H
