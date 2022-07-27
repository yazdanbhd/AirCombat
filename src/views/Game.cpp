#include "Game.h"
#include "../players/Player.h"


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

    // add player to game
    player = new Player(178,155,":/images/plane1");
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);
    player->setPos(750,600);

}

