#ifndef GAME_H
#define GAME_H

#include "snake.h"
#include <QDebug>

class game
{
public:
    game();
    void fill_gameArray();
    snake *mySnake;
    QList<snake> enemySnakes;

protected:
    FType **gameArray;


};

#endif // GAME_H
