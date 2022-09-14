#ifndef AIRCOMBAT_GAME_H
#define AIRCOMBAT_GAME_H

#include <QGraphicsView>
#include "../players/Player.h"


class Game: public QGraphicsView
{


public:
    Game();
    Player *player;


};


#endif //AIRCOMBAT_GAME_H
