#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include <QKeyEvent>
#include <QGraphicsScene>

Player::Player(int width,int height,const char* icon): width(width),height(height)
{
    QPixmap pixmap(icon);
    pixmap = pixmap.scaled(width,height);
    setPixmap(pixmap);

}

QRectF Player::boundingRect() const {
    auto player = QGraphicsPixmapItem::boundingRect();
    player.setWidth(width);
    player.setHeight(height);
    return QGraphicsPixmapItem::boundingRect();
}

void Player::keyPressEvent(QKeyEvent *event) {

    if(event->key() == Qt::Key_Left)
        setPos(x() - 11,y());
    if(event->key() == Qt::Key_Right)
        setPos(x() + 11,y());
    if(event->key() == Qt::Key_Space)
    {
        auto bulletsOFLeftWing = new Bullet();
        scene()->addItem(bulletsOFLeftWing);
        bulletsOFLeftWing->setPos(x() - 8, y());

        auto bulletsOFRightWing = new Bullet();
        scene()->addItem(bulletsOFRightWing);
        bulletsOFRightWing->setPos(x() + 35, y());

    }
}

void Player::spawn()
{

    auto enemy = new Enemy(84,68,":/images/plane2");
    scene()->addItem(enemy);

}
