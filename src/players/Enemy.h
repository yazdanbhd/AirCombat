#ifndef AIRCOMBAT_ENEMY_H
#define AIRCOMBAT_ENEMY_H

#include <QGraphicsPixmapItem>

class Enemy : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int width{};
    int height{};
public:
    Enemy(int width,int height,const char* icon);
    void move();

};


#endif //AIRCOMBAT_ENEMY_H
