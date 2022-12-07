#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the tram number";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "The name of the start-end stop is Taraschanska-Olexandrivsky Park";
        break;
    case 2:
        cout << "The name of the start-end stop is Taraschanska-Levanevsky";
        break;
    case 3:
        cout << "The name of the start-end stop is Timiryazev-Vernadskyi";
        break;
    case 4:
        cout << "The name of the start-end stop is Vernadskyi-Hayok";
        break;
    case 5:
        cout << "The name of the start-end stop is Vernadskyi-Vodogray";
        break;
    case 6:
        cout << "The name of the start-end stop is General Square-Hayok";
        break;
    case 7:
        cout << "The name of the start-end stop is Olexandrivsky Park-Hayok";
        break;
    }

}