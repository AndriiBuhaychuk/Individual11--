#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
    double x, y, R;
    cout << "Option 2" << endl;
    cout << " x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "R = ";
    cin >> R;
    if
        (x >= 0 && abs(x) <= R && y >= 0 && abs(y) <= R)
        cout << "The point falls into the painted area";
    else if
        (x <= 0 && abs(x) <= R && y <= 0 && abs(y) <= R)
        cout << "The point falls into the painted area";
    else if
        (x <= 0 && abs(x) <= R && y >= 0 && abs(y) <= R && y <= -1 * sqrt(sqrt(R) - sqrt(x + R)) + R)
        cout << "The point falls into the painted area";
    else if
        (x >= 0 && abs(x) <= R && y <= 0 && abs(y) <= R && y >= sqrt(sqrt(R) - sqrt(x - R)) - R)
        cout << "The point falls into the painted area";
    else
        cout << "The point do not falls into the painted area";
}
