#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    double a, b, z, i, k;
    a = 0;
    i = 2;
    k = i;
    while (k <= i + 5)
    {
        a = a + (12.4 * sin(abs(k / 2 / 1)) + 9 * cos(9 - 1));
        k++;
    }
    i = 2;
    k = i;
    b = 0;
    while (k <= i + 6)
    {
        b = b + (12.4 * sin(abs(k / 2 / 1)) + 9 * cos(9 - 1));
        k++;
    }
    z = a * b;
    cout << "The value of the variable z = " << z << endl;
}

