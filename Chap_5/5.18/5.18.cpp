#include <iostream>
#include <vector>
using namespace std;

using Line = vector<int>;
using Matrix = vector<Line>;

void diagSum(const Matrix &m, int &sumDiagLeft, int &sumDiagRight)
{
    size_t lineNb = m.size();
    sumDiagLeft = 0;
    sumDiagRight = 0;
    for (size_t i = 0; i < lineNb; ++i)
    {
        sumDiagLeft += m.at(i).at(i);
        sumDiagRight += m.at(i).at(lineNb - 1 - i);
    }
}

int main()
{
    Matrix m = {{1, 0, 1},
               {0, 1, 0},
               {1, 1, 0}};
    int sumDiagLeft, sumDiagRight;
    diagSum(m, sumDiagLeft, sumDiagRight);

    cout << sumDiagLeft << " - " << sumDiagRight;
}