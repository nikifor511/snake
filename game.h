#ifndef GAME_H
#define GAME_H

#include "snake.h"
#include <QDebug>

class game
{
public:
    game();
    void fill_gameArray();

protected:
    FType **gameArray;
    snake *mySnake;

};

#endif // GAME_H
