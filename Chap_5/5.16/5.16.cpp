#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<int> append(const vector<int> &v1, const vector<int> &v2);
void displayArray(const vector<int> &v);

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 3, 5, 7, 9};
    cout << "Vector 1 = ";
    displayArray(v1);
    cout << "Vector 2 = ";
    displayArray(v2);
    vector<int> result = append(v1, v2);
    cout << "Append vectors = ";
    displayArray(result);

    cout << "Size = " << result.size() << " Capacity = " << result.capacity();
}

vector<int> append(const vector<int> &v1, const vector<int> &v2)
{
    vector<int> result = v1;
    for (size_t i = 0; i < v2.size(); i++)
        result.push_back(v2.at(i));
    return result;
}

void displayArray(const vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
        cout << "[" << v.at(i) << "] ";

    cout << endl;
}
