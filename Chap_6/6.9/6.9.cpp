// Exercice 6.9 Analyse d'un nombre entier (2)

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string nombre;
    cout << "Entrez un nombre entier >= 0 : ";
    cin >> nombre;

    cout << "Nombre saisi : " << nombre << endl;
    cout << endl << "Nombre de chiffres : " << nombre.size() << endl;
    cout << "Premier chiffre : " << nombre.front() << endl;
    cout << "Dernier chiffre : " << nombre .back() << endl;
}