#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isOdd(int a) { return a % 2; }

const int SIZE = 4;

int main()
{
    vector<int> v1{1, 3, 5, 6};
    int array[SIZE] = {1, 3, 5, 7};

    // For a vector
    if (all_of(v1.begin(), v1.end(), isOdd))
        cout << "The vector contains only odd values" << endl;
    else
        cout << "The vector contains at least one even value" << endl;

    // For an c-type array
    if (all_of(array, array + SIZE, isOdd))
        cout << "The array contains only odd values" << endl;
    else
        cout << "The array contains at least one even value" << endl;
}