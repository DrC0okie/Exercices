// File:        5.5.cpp
// Author:      Timothee Van Hove
// Date:        10.11.2021
// Description: Exercise 5.5 "Moyennes de notes"
// Compiler:    g++ 11.2.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

#include <iostream>

using namespace std;

double sum(const double tab[], size_t size);
double mean(const double array[], size_t size);
const int MAX = 10;

int main()
{
    double notes[MAX];
    cout << "Enter all the values to mean : ";
    size_t size = 0;
    for (size_t i = 0; i < MAX; i++)
    {
        cin >> notes[i];
        if(!notes[i])
            break;
        size ++;
    }

    double meanValue = mean(notes, size);

    cout << "The mean value is " << meanValue;
}

/**@param array tableau contenant les éléments à sommer
 *  @param size nombre d'éléments à sommer
 *  @return la somme des éléments*/
double sum(const double array[], size_t size)
{
    double sum = 0;
    for (size_t i = 0; i < size; ++i)
        sum += array[i];

    return sum;
}

/** @param array   the array
 *  @param size the number of elements to mean
 *  @return the mean value of all elements of the array*/
double mean(const double array[], size_t size)
{
    return size ? (sum(array, size) / size) : 0.0;
}