#include <iostream>
#include "Point.hpp"

using namespace std;

int main()
{
    Point p(1, 3);
    p.afficher();
    p.deplacer(3.0, 12.0);
    p.afficher();
}