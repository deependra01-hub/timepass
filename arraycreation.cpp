#include <iostream>
using namespace std;

int main()
{
    int array[5] ;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {   
        cout<<"enter the element:";
        cin >> array[i] ;
    }
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        cout<< array[i] << endl;
    }
}