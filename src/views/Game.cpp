#include "Game.h"


Game::Game(): QGraphicsView()
{


    // set fixed size
    setFixedSize(1600,760);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    // create game scene
    auto scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,1600,760);
    scene->setBackgroundBrush(QBrush(QImage(":/images/background")));
    setScene(scene);


}
