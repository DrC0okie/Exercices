#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char myChar;
    cout << "Please enter a character : ";
    cin >> myChar;

    cout << "Character : " << myChar << " Code : " << (int)myChar << endl;
    cout << "Is a letter? : " << boolalpha << (bool)isalpha(myChar) << endl;
    cout << "Is lower? : " << boolalpha << (bool)islower(myChar) << endl;
    cout << "Is a digit? : " << boolalpha << (bool)isdigit(myChar) << endl;
    cout << "Is a punct char ? : " << boolalpha << (bool)ispunct(myChar) << endl;

string s = "AB"; 
s += 'C'; 
cout << '|' << s << '|' << endl;
}