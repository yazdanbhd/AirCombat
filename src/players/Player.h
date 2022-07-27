#ifndef AIRCOMBAT_PLAYER_H
#define AIRCOMBAT_PLAYER_H

#include <QGraphicsPixmapItem>

class Player: public QGraphicsPixmapItem
{
private:
    int width{};
    int height{};
public:

    Player(int width,int height,const char* icon);

    void keyPressEvent(QKeyEvent *event) override;
    QRectF boundingRect() const override;
};


#endif //AIRCOMBAT_PLAYER_H
