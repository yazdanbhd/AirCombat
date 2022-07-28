#include "Bullet.h"
#include <QTimer>

Bullet::Bullet()
{
    QPixmap pixmap(":/images/bullet");
    pixmap = pixmap.scaled(58,35);
    setPixmap(pixmap);

    auto moveTimer = new QTimer();
    connect(moveTimer,&QTimer::timeout,this,&Bullet::move);
    moveTimer->start(30);
}
void Bullet::move()
{
    setPos(x(),y()-10);
}
