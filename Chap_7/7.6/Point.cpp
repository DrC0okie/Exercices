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

float Point::rho() const
{
    return hypot(x, y);
}

float Point::theta() const
{
    if(y < 0.0f)
        return atan2(y, x) + 2.0f * PI;
    return atan2(y, x);
}

void Point::rotation(float angle)
{
    float r = rho(), t = theta() + angle;
    x = r * float(cos(t));
    y = r * float(sin(t));
}
