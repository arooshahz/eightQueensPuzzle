#include "Controller.h"
Controller::Controller(Game *game) :game(game){
    setFlags(GraphicsItemFlag::ItemIsFocusable);
    setFocus();



}

void Controller::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsPixmapItem::paint(painter, option, widget);
}

void Controller::keyPressEvent(QKeyEvent *event) {
    QGraphicsItem::keyPressEvent(event);
    if(event->key()==Qt::Key::Key_Space){
        qInfo()<<counter;
        for(int i=0;i<8;i++){
            int y=(game->getArray().at((8*counter)+i));
        game->getQueens().at(i )->setPos(game->getX()+game->getBlockWidth()*y,game->getY()+game->getBlockHeight()*(i));

        }
        counter++;
    }
}
