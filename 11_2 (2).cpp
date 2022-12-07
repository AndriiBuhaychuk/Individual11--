#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    setlocale(0, ".1251");

    int n = 100;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100 - 50;
    }

    cout << "array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}