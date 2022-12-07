#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, ".1251");

    int max, min, n, max1 = 0, min1 = 0;
    cout << "Enter the value of the array n ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 40 - 20;
    }

    cout << "Масив: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            sum = sum + A[i];
        }
    }
    cout << "" << endl;
    cout << "The sum of positive elements: " << sum << endl;
    max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (abs(A[i]) > abs(max))
        {
            max = A[i];
            max1 = i;
        }
    }
    min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (abs(A[i]) < abs(min))
        {
            min = A[i];
            min1 = i;
        }
    }
    int dob = 1;
    if (max1 < min1)
    {
        max1++;
        for (max1; max1 < min1; max1++)
        {

            dob = dob * A[max1];
        }
    }
    else
    {
        min1++;
        for (min1; min1 < max1; min1++)
        {
            dob = dob * A[min1];
        }
    }

    cout << "The product of array elements: " << dob << endl;
    for (int i = 0; i < n - 1; ++i)
    {
        int Li = i;
        for (int Ci = i + 1; Ci < n; ++Ci)
        {
            if (A[Ci] > A[Li])
                Li = Ci;
        }
        swap(A[i], A[Li]);
    }
    cout << "Ordered array: "; //Упорядкований масив
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
