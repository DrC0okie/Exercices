// File:        5.7.cpp
// Author:      Timothee Van Hove
// Date:        10.11.2021
// Description: Exercise 5.7 "Remplacement de valeurs par une valeur donnée"
// Compiler:    g++ 11.2.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

#include <iostream>

using namespace std;

void display(const int array[], size_t size);
void replaceEven(int array[], size_t size, int value);
int main()
{
    cout << "Please enter a value used to replace the even values in the array: ";
    int value;
    cin >> value;

    // Display the arrays that will be tested
    cout << "Before replacing:" << endl;
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    size_t size1 = sizeof(array1) / sizeof(int);
    size_t size2 = sizeof(array2) / sizeof(int);

    display(array1, size1);
    display(array2, size2);

    replaceEven(array1, size1, value);
    replaceEven(array2, size2, value);

    cout << endl << "After replacing: " << endl;
    display(array1, size1);
    display(array2, size2);
}

/** @brief Replace the even values of the array by a given value
 * @param array The array
 * @param size  The size of the array */
void replaceEven(int array[], size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
        if (array[i] % 2 == 0)
            array[i] = value;
}

/**  @brief Display the content of an array
 * @param array The array
 * @param size The size of the array*/
void display(const int array[], size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << "[" << array[i] << "] ";

    cout << endl;
}