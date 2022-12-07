#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
    char k;
    cout << "Enter the task number" << endl;
    cin >> k;
    cout << endl;

    switch (k) {
    case('1'):
        int a, b, k;
        cout << "Enter two numbers" << endl;
        cout << "The first number:";
        cin >> a;
        cout << "The second number:";
        cin >> b;
        k = a + b;
        cout << "total = " << k << endl;
        return 0;
        break;

        //Друга задача не виходить.

    case('3'):
        float n, c;
        cout << "Write the number that = number of minutes: ";
        cin >> n;
        c = n / 2;
        cout << "Number of bacterias: " << c << endl;
        return 0;
        break;


    default:
        cout << "Error";
    }
    return 0;
}
