#include "game.h"

game::game()
{
    gameArray = new FieldType*[30];
    for (int i=0; i<30; i++)
        this->gameArray[i] = new FieldType[20];
    for (int i=0; i<30; i++)
        for(int j=0; j<20; j++)
            this->gameArray[i][j] = Snake_A;
}
