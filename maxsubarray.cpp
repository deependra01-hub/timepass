#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 78, 35, 67, 2};
    int sum = 0;
    int maxum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                sum = sum + arr[k];
            }
            if (sum > maxum)
            {
                maxum = sum;
            }
            sum = 0;
            cout << endl;
        }
    }
    cout << maxum;
}