#include "Vazir.h"

Vazir::Vazir(int X, int Y, QGraphicsScene *scene, QGraphicsPathItem *parent) : X(X), Y(Y),scene(scene),QGraphicsPixmapItem(parent) {

     pixmap=new QPixmap(":/images/vazir");
    *pixmap=pixmap->scaled(79,65);
    setPixmap(*pixmap);


}
