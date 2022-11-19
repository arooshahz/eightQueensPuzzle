#include "Game.h"
#include "../views/Queen.h"
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

//    auto queen=new Queen(x, y, BackgroundScene);
//    BackgroundScene->addItem(queen);
//    queen->setPos(x,y);




    auto queen1 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen1);
    BackgroundScene->addItem(queen1);
    queen1->setPos(x,y);

    auto queen2 = new Queen(x+2*blockWidth, y, BackgroundScene);
    //blockwidth up here is extra do sth !!
    this->queens.append(queen2);
    BackgroundScene->addItem(queen2);
    queen2->setPos(x+blockWidth,y);

    auto queen3 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen3);
    BackgroundScene->addItem(queen3);
    queen3->setPos(x+2*blockWidth,y);

    auto queen4 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen4);
    BackgroundScene->addItem(queen4);
    queen4->setPos(x+3*blockWidth,y);

    auto queen5 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen5);
    BackgroundScene->addItem(queen5);
    queen5->setPos(x+4*blockWidth,y);

    auto queen6 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen6);
    BackgroundScene->addItem(queen6);
    queen6->setPos(x+5*blockWidth,y);

    auto queen7 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen7);
    BackgroundScene->addItem(queen7);
    queen7->setPos(x+6*blockWidth,y);

    auto queen8 = new Queen(x, y, BackgroundScene);
    this->queens.append(queen8);
    BackgroundScene->addItem(queen8);
    queen8->setPos(x+7*blockWidth,y);













    setScene(BackgroundScene);







}


bool Game::possible(int* a, int n, int k){
    bool t=true;


    for (int j = 0; j < k; j++) {
        if (a[k] == a[j] || abs(a[j] - a[k]) == abs(j - k)) {
            t = false;
            break;
        }}

    return t;



}

static bool flag=true;

void Game::f(int* a,int n,int k){

    if(k==n && flag==true){


         for(int i=0;i<n;i++){
             array.append(&a[i]);
//             cout<<a[i];
         }
        // cout<<endl;
        // ++counter;
        // flag=false;

    }
    else if(k<n){
        flag=true;
        if(!possible(a,n,k) ){return ;}

        for(int j=0;j<n;j++){

            a[k+1]=j;
            f(a,n,k+1);

        }
    }
}

































