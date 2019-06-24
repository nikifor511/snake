#ifndef CONFIG_H
#define CONFIG_H

struct point
{
    int x,y;
};

enum FieldType { Snake_M, Snake_A, Food, Empty };

const int area_delta = 20;
const int area_width = 30;
const int area_height = 20;

const int cell_width = 20;
const int cell_height = 20;

const int snake_max_length = 15;

#endif // CONFIG_H
