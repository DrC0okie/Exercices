// File:        5.6.cpp
// Author:      Timothee Van Hove
// Date:        10.11.2021
// Description: Exercise 5.6 "Permutation du premier et du dernier élément"
// Compiler:    g++ 11.2.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

#include <iostream>

using namespace std;

void display(const int array[], size_t size);
void permutation(int array[], size_t size);
int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    size_t size = sizeof(array1) / sizeof(int);
    cout << "Before replacing:" << endl;
    display(array1, size);

    permutation(array1, size);

    cout << endl << "After replacing:" << endl;
    display(array1, size);
}

/** @brief Rotate the first and last element of the array
 * @param array The array
 * @param size  The size of the array */
void permutation(int array[], size_t size)
{
    int tmp = array[0];
    array[0] = array[size - 1];
    array[size - 1] = tmp;
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