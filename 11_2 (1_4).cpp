#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, ".1251");

    int min, n, a, b;
    cout << "Enter the size of the array a ";
    cin >> n;
    cout << "������ �������� � ";
    cin >> a;
    cout << "������ �������� b ";
    cin >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = rand() % 50 - 25;
    }

    cout << "�����: ";
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << " ";
    }
    min = A[0];
    int min1 = 0;
    for (int i = 0; i < a; i++)
    {
        if (abs(A[i]) < abs(min))
        {
            min = A[i];
            min1 = i;
        }
    }
    cout << "" << endl;
    cout << "����� ���������� �� ������� ����� " << min << endl;
    int v = 0;
    for (int i = 0; i < a; i++)
    {
        if (A[i] < 0)
        {
            v = i;
            break;
        }
    }
    int sum = 0;

    for (int i = v + 1; i < a; i++)
    {
        sum = sum + abs(A[i]);
    }
    cout << "���� ������ ���� ������� ��'������ ����� " << sum << endl;

    if (a > b)
    {
        for (int i = 0; i < a; i++)
        {
            if (A[i] <= a && A[i] >= b)
            {
                A[i] = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            if (A[i] >= a && A[i] <= b)
            {
                A[i] = 0;
            }
        }
    }
    cout << "����� ��� ����� ������� � �������� [" << a << "," << b << "]:  ";
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << " ";
    }
}
