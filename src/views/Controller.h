#ifndef PROJECT_CONTROLLER_H
#define PROJECT_CONTROLLER_H

#include <QGraphicsItem>
#include <QKeyEvent>
#include <QObject>
#include "../windows/Game.h"


class Controller : public QObject ,public  QGraphicsPixmapItem{
Q_OBJECT
protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Game* game{};
    int counter=0;
public:
    Controller(Game* game);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};


#endif //PROJECT_CONTROLLER_H
