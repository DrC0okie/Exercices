#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
    float x, y;

public:
    Point(float x = 0, float y = 0);
    void deplacer(float translation_x, float translation_y);
    void afficher();
};

#endif