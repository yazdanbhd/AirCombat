#include "Game.h"
#include "../players/Player.h"
#include "../players/Enemy.h"
#include <QTimer>


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
    player = new Player(84,68,":/images/plane1");
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);
    player->setPos(750,600);

     //add enemies to game
    auto SpawnTimer = new QTimer();
    connect(SpawnTimer,&QTimer::timeout,player,&Player::spawn);
    SpawnTimer->start(3500);


}





