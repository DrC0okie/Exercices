//File: 		    2.11.cpp
//Author:		    Timothee Van Hove
//Date:			    06.10.2021
//[Compiler][opt]   [g++][-Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic -std=c++20]
//std compatible    c++98 and above

#include <iostream>
#include <cstdio>
#include <limits>

// used to empty the cin buffer before asking a new entry
#define EMPTY_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n');

using namespace std;

int main()
{

    double r1 = 0.0, r2 = 0.0, h1 = 0.0, h2 = 0.0, h3 = 0.0;
    cout "All values are in cm"; 
    cout << "Please enter r1: ";
    cin >> r1;
    cout << endl << "Please enter r2: ";
    cin >> r2;
    cout << endl << "Please enter h1: ";
    cin >> h1;
    cout << endl << "Please enter h3: ";
    cin >> h2;
    cout << endl << "Please enter h3: ";
    cin >> h3;


}