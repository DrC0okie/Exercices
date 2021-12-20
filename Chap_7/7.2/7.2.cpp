#include <iostream>
#include "Point.hpp"

using namespace std;

int main()
{
    Point p(1, 3);
    cout << "x = " << p.abscisse() << "y = " << p.ordonnee() << endl;;
    p.deplacer(3.0, 12.0);
    cout << "x = " << p.abscisse() << "y = " << p.ordonnee();
}