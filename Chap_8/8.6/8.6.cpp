#include <cstdlib>
#include <iostream>
template <typename T, size_t n>
class Array
{
public:
    Array(const T &valeur)
    {
        for (size_t i = 0; i < n; i++)
            tab[i] = valeur;
    }

    void afficher() const
    {
        std::cout << "[";
        for (size_t i = 0; i < n; i++)
        {
            std::cout << tab[i];
            if (i < n-1)
                std::cout << ", ";
        }
        std::cout << "]";
    }
private:
    T tab[n];
};
using namespace std;
int main()
{
    Array<int, 3> a1(1);
    a1.afficher();
    cout << endl;
    Array<double, 4> a2(1.5);
    a2.afficher();
    cout << endl;
    return EXIT_SUCCESS;
}