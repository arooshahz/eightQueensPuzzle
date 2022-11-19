#ifndef PROJECT_QUEEN_H
#define PROJECT_QUEEN_H

#include "QObject"
#include "QGraphicsPixmapItem"
class Queen : public QObject, public QGraphicsPixmapItem {
Q_OBJECT

private:
    int X{};
    int Y{};
    QGraphicsScene *scene;
    QPixmap* pixmap;

public:
    Queen(int X, int Y, QGraphicsScene *scene, QGraphicsPathItem *parent = nullptr);




};

#endif //PROJECT_QUEEN_H
