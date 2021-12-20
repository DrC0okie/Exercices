#include "Point.hpp"
#include <iostream>

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Point::deplacer(float translation_x, float translation_y)
{
    x += translation_x;
    y += translation_y;
}

void Point::afficher()
{
    std::cout << "Point x : " << x << std::endl
         << "Point y : " << y << std::endl;
}
