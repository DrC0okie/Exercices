#include <iostream>
#include "Point.hpp"

using namespace std;

int main()
{
    Point p(1, 3);
    cout << "x = " << p.abscisse() << "y = " << p.ordonnee() << endl;;
    p.deplacer(3.0, 12.0);
    cout << "x = " << p.abscisse() << "y = " << p.ordonnee();
    cout << p.rho() << " " << p.theta() << endl;
    p = Point(3.0, 0.0);
    for(int i = 0; i <= 8; i++)
    {
        p.rotation(PI/4);
        cout << p.abscisse() << "" << p.ordonnee() << endl;
    }
}