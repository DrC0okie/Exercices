#include "Point.hpp"

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

float Point::abscisse() const
{
    return x;
}

float Point::ordonnee() const
{
    return y;
}

Point Point::operator+(const Point &droite) const
{
    return Point(this->x + droite.x, this->y + droite.y);
}
