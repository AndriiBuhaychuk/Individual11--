#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, ".1251");

    int max, n, a, b;
    cout << "Enter the size of the array n ";
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 50 - 25;
    }

    cout << "масив:";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    max = A[0];
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(A[i]) > abs(max))
        {
            max = A[i];
            max1 = i;
        }
    }

    cout << "" << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 3)
        {
            sum = sum + A[i];
        }
    }
    cout << "The sum of array elements that are greater than 3: " << sum << endl;
    int dob = 1;
    max1 = max1 + 1;
    for (max1; max1 < n; max1++)
    {
        dob = dob * A[max1];
    }
    cout << "The product of array elements: " << dob << endl;

}
