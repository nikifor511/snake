#include "game.h"

game::game()
{
    this->gameArray = new FType*[area_width];
    for (int i=0; i<area_width; i++)
        this->gameArray[i] = new FType[area_height];
    for (int i=0; i<area_width; i++)
        for(int j=0; j<area_height; j++)
            this->gameArray[i][j] = Empty;

    point h;
    h.x = 15;
    h.y = 10;
    mySnake  = new snake(5, h, 3);
    this->fill_gameArray();
}

void game::fill_gameArray()
{
    for (int i=0; i<area_width; i++)
        for(int j=0; j<area_height; j++)
            this->gameArray[i][j] = Empty;
    for (int i=0; i<mySnake->get_length(); i++)
        this->gameArray[mySnake->snakeArray[i].x][mySnake->snakeArray[i].y] = Snake_M;
//    for (int i=0; i<area_width; i++)
//        for(int j=0; j<area_height; j++)
//            qDebug() <<this->gameArray[i][j];
}
