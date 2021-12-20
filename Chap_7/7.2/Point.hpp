#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
    float x, y;

public:
    Point(float x, float y);
    void deplacer(float translation_x, float translation_y);
    float abscisse() const;
    float ordonnee() const;
};

#endif