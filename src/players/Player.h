#ifndef AIRCOMBAT_PLAYER_H
#define AIRCOMBAT_PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Player: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int width{};
    int height{};
public:

    Player(int width,int height,const char* icon);

    void keyPressEvent(QKeyEvent *event) override;
    QRectF boundingRect() const override;

public slots:
    void spawn();
};


#endif //AIRCOMBAT_PLAYER_H
