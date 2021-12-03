// File:        5.4.cpp
// Author:      Timothee Van Hove
// Date:        10.11.2021
// Compiler:    g++ 11.2.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

#include <iostream>

using namespace std;
void display(const int array[], size_t size);

int main()
{
    int t1[] = {0}, t2[] = {1}, t3[] = {1, 2};

    display(t1, sizeof(t1) / sizeof(int));
    display(t2, sizeof(t2) / sizeof(int));
    display(t3,sizeof(t3) / sizeof(int));
}

void display(const int array[], size_t size)
{
    cout << "[";
    for (size_t i = 0; i < size; i++)
    {
        
        if(array[i] != 0)
            cout << "[" << array[i] << "] ";
        else
           cout << "[]"; 
    }
    cout << endl;
}