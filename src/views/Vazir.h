#ifndef PROJECT_VAZIR_H
#define PROJECT_VAZIR_H

#include "QObject"
#include "QGraphicsPixmapItem"
class Vazir : public QObject, public QGraphicsPixmapItem {
Q_OBJECT

private:
    int X{};
    int Y{};
    QGraphicsScene *scene;
    QPixmap* pixmap;

public:
    Vazir(int X, int Y, QGraphicsScene *scene, QGraphicsPathItem *parent = nullptr);




};

#endif //PROJECT_VAZIR_H
