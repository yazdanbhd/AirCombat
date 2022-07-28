#ifndef AIRCOMBAT_BULLET_H
#define AIRCOMBAT_BULLET_H


#include <QGraphicsPixmapItem>
#include <QObject>

class Bullet : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bullet();
public slots:
    void move();
};


#endif //AIRCOMBAT_BULLET_H
