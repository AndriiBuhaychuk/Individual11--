#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int A[10];
    int max, min;
    int max1, min1;
    cout << "Enter the elements of the array :";

    for (int i = 0; i < 10; i++) // ќсь ц€ штука вводить 10 елемент≥в масиву
    {
        cin >> A[i];
    }
    max = A[0]; //ј ось ось ц€ знаходить максимальне число
    for (int i = 1; i < 10; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            max1 = i;
        }
    }
    min = A[0];// ÷€ знаходить м≥н≥мальне число
    for (int i = 1; i < 10; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min1 = i;
        }
    }


    cout << "Your array:" << " " << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] << " " << A[5] << " " << A[6] << " " << A[7] << " " << A[8] << " " << A[9] << endl;
    A[min1] = max;
    A[max1] = min;

    cout << "Changed array:" << " " << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] << " " << A[5] << " " << A[6] << " " << A[7] << " " << A[8] << " " << A[9] << endl;


}
