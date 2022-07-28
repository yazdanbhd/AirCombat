#include "Player.h"
#include "Bullet.h"
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
        setPos(x() - 7,y());
    if(event->key() == Qt::Key_Right)
        setPos(x() + 7,y());
    if(event->key() == Qt::Key_Space)
    {
        auto bullet = new Bullet();
        scene()->addItem(bullet);
        bullet->setPos(x()+60, y() + 25);
    }
}
