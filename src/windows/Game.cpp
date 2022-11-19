#include "Game.h"
#include "../views/Vazir.h"
Game::Game() {

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    showFullScreen();
    setFrameShape(NoFrame);

    BackgroundScene = new QGraphicsScene(this);
    BackgroundScene->setSceneRect(0, 0, width(), height());
    QPixmap* pixmap=new QPixmap(":/images/bg");
    *pixmap=pixmap->scaled(width(),height(),Qt::KeepAspectRatioByExpanding);
    setBackgroundBrush(QPixmap(*pixmap));




    double blockWidth = width()/16.78;
    double blockHeight = height()/10.5;
    double x=width()/5.58;
    double y=height()/10.45;

    auto vazir=new Vazir(x,y,BackgroundScene);
    BackgroundScene->addItem(vazir);
    vazir->setPos(x,y);









    setScene(BackgroundScene);







}