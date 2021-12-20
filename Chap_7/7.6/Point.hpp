#ifndef POINT_HPP
#define POINT_HPP
#include <cmath>

const float PI = float(std::atan2(0.0,-1.0));
class Point
{
private:
    float x, y;

public:
    Point(float x, float y);
    void deplacer(float translation_x, float translation_y);
    float abscisse() const;
    float ordonnee() const;
    float rho() const;
    float theta() const;
    Point operator+(const Point &droite) const;
    void rotation (float angle);

};

#endif