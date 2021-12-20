// Exercice 7.7 Surcharges d'opérateurs

#include <iostream>

class C
{
private:
    int x;

public:
    C(int i) : x(i) {}
    C() : x(0){};

    friend std::ostream &operator<<(std::ostream &out, const C &i);

    C &operator++();   // Préfixé
    C operator++(int); // Postfixé

    bool operator==(const C &right) const;
    bool operator!=(const C &right) const;

    C &operator+=(const C &right);
    C operator+(const C &right) const;
};

C &C::operator++()
{
    x++;
    return *this;
}
C C::operator++(int _)
{
    C tmp = *this;
    ++(*this);
    return tmp;
}

bool C::operator==(const C &right) const
{
    return x == right.x;
}

bool C::operator!=(const C &right) const
{
    return !(*this == right);
}

C &C::operator+=(const C &right)
{
    x += right.x;
    return *this;
}

C C::operator+(const C &right) const
{
    C temp = *this;
    return (temp += right);
}

std::ostream &operator<<(std::ostream &out, const C &i)
{
    out << i.x;
    return out;
}

using namespace std;

int main()
{
    C c0, c1(1), c2 = 5;
    const C C3{7};
    cout << c0 << endl
         << c1 << endl;
    cout << boolalpha;
    cout << (c0 == c1) << endl;
    cout << (c0 != c1) << endl;
    cout << noboolalpha;
    cout << c1++ << endl;
    cout << c1 << endl;
    cout << ++c1 << endl;
    cout << c1 + c2 << endl;
    c1 += c2;
    cout << c1 << endl;
    cout << C3 + c2 << endl;
    return EXIT_SUCCESS;
}