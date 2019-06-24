#include "snake.h"

snake::snake(int length, point head, unsigned char direction)
{
    this->length = length;
    this->direction = direction;
    point null_point;
    null_point.x = 0;
    null_point.y = 0;
    int i;
    for (i=0; i<snake_max_length; i++)
        this->snakeArray[i] = null_point;
    this->snakeArray[0] = head;
    if (this->length > 1)
        for (i=1; i<this->length; i++)
            if (this->direction == 0)
            {
                this->snakeArray[i].y = this->snakeArray[0].y;
                this->snakeArray[i].x = this->snakeArray[0].x - i;
            }
            else if (this->direction == 1)
            {
                this->snakeArray[i].x = this->snakeArray[0].x;
                this->snakeArray[i].y = this->snakeArray[0].y + i;
            }
            else if (this->direction == 2)
            {
                this->snakeArray[i].y = this->snakeArray[0].y;
                this->snakeArray[i].x = this->snakeArray[0].x + i;
            }
            else if (this->direction == 3)
            {
                this->snakeArray[i].x = this->snakeArray[0].x;
                this->snakeArray[i].y = this->snakeArray[0].y - i;
            }
}

int snake::get_length()
{
    return this->length;
}
