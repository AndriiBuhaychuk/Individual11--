#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(0, ".1251");

    int a;
    cout << "Enter the value of the array a ";
    cin >> a;
    int X[a];
    int sum0 = 0;
    int sum1 = 0;
    for (int i = 0; i < a; i++) //Вибирає вибіркові числа в масив
    {
        X[i] = rand() % 3;
        cout << X[i] << " ";
    }
    cout << "" << endl;

    for (int i = 0; i < a; i++) //Рахує кількість одиниць та нулів
    {
        if (X[i] == 0)
        {
            sum0++;
        }
        if (X[i] == 1)
        {
            sum1++;
        }
    }


    for (int i = 0; i < a; i++) //Переставляє числа в правильному порядку
    {
        if (sum0 != 0)
        {
            sum0--;
            X[i] = 0;
        }
        else if (sum1 != 0)
        {
            sum1--;
            X[i] = 1;
        }
        else
        {
            X[i] = 2;
        }
    }

    for (int i = 0; i < a; i++)
    {
        cout << X[i] << " ";
    }
}
