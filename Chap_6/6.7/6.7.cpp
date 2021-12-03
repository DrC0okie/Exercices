// Exercice 6.7 Milieu d'une chaîne de caractères

#include <string>
#include <iostream>

using namespace std;

string getMidString(string s);

int main()
{

    string myString1 = "ABC", myString2 = "ABCD";
    cout << getMidString(myString1) << " " << getMidString(myString2);
}

string getMidString(string s)
{
    if (s.size() % 2 == 0)
        return s.substr(s.size() / 2 - 1, 2);
    else
        return s.substr(s.size() / 2, 1);
}