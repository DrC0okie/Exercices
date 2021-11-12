// File:        5.6.cpp
// Author:      Timothee Van Hove
// Date:        10.11.2021
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
    display(array1, size);
    permutation(array1, size);
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
    {
        if (array[i] != 0)
            cout << "[" << array[i] << "] ";
        else
            cout << "[]";
    }
    cout << endl;
}