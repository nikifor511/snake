#ifndef SNAKE_H
#define SNAKE_H

#include "config.h"

class snake
{
public:
    snake(int length, point head, unsigned char direction);
    int get_length();
    point snakeArray[15];
    void move

protected:
    int length;

    unsigned char direction;

};

#endif // SNAKE_H
