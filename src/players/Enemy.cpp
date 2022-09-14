#include "Enemy.h"
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>

Enemy::Enemy(int width,int height,const char* icon) : QObject(),width{width},height{height}
{

    QPixmap pixmap(icon);
    pixmap = pixmap.scaled(width,height);
    setPixmap(pixmap);

    int RandomNumber = rand() % 1300;
    setPos(RandomNumber,0);

    auto moveTimer = new QTimer();
    connect(moveTimer,&QTimer::timeout,this,&Enemy::move);
    moveTimer->start(50);

}
void Enemy::move()
{
    setPos(x(),y()+10);
    if (pos().y() > 760)
    {
        scene()->removeItem(this);
        delete this;
    }
}





