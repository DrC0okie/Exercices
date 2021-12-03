#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool isOdd_v1(vector<int> &v);
bool isOdd_v2(vector<int> &v);
bool isOdd_v3(vector<int> &v);

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 3, 5, 7, 9};
    vector<int> v3 = {1, 2, 3, 4, 5};

    cout << boolalpha << isOdd_v1(v1) << endl;
    cout << boolalpha << isOdd_v2(v2) << endl;
    cout << boolalpha << isOdd_v3(v3) << endl;
}

bool isOdd_v1(const vector<int> &v)
{
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        if (*i % 2 == 0)
            return false;

    return true;
}

bool isOdd_v2(const vector<int> &v)
{
    for (size_t i = 0; i < v.size(); ++i)
        if (v.at(i) % 2 == 0)
            return false;

    return true;
}

bool isOdd_v3(const vector<int> &v)
{
    for (int val : v)
        if (v.at(val) % 2 == 0)
            return false;

    return true;
}