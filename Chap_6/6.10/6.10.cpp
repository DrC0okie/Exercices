//Exercice 6.10 Prénom, nom et acronyme (1)

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string input, name, surname;
    cout << "Entrez votre prenom et votre nom : ";
    getline(cin, input, '\0');

    size_t nameSize = input.find_first_of(' ');
    input.copy(name, nameSize,)
    cout << "Votre prenom est : " << name.substr((name.begin(),name.end(), ' ');

}
