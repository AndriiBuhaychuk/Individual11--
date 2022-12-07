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
    cout << "Enter the value а ";
    cin >> a;
    cout << "Enter the value b ";
    cin >> b;
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
    cout << "The number of the largest module number : " << max1 << endl;
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            v = i;
            break;
        }
    }
    int sum = 0;

    for (int i = v + 1; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout << "The sum of the numbers after the first positive number: " << sum << endl;

    if (a < b)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] <= a || A[i] >= b)
            {
                for (int Ci = i + 1; Ci < n; ++Ci)
                {
                    if (A[Ci] >= a && A[Ci] <= b)
                    {
                        swap(A[i], A[Ci]);
                    }
                }

            }

        }
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] <= b || A[i] >= a)
            {
                for (int Ci = i + 1; Ci < n; ++Ci)
                {
                    if (A[Ci] >= b && A[Ci] <= a)
                    {
                        swap(A[i], A[Ci]);
                    }
                }

            }

        }
    }
    cout << "an array with values ​​in the interval  " << a << "," << b << ":  ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
