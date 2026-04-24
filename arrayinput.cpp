#include<iostream>
using namespace std;
 int main(){
    int arr[5];

    for (int i=0;i<5;i++){
        cout<<"enter element at index: "<<i<<"  ";
        cin>>arr[i];
    }

    for (int i =0;i<5;i++){
        cout<<arr[i];
    }
 }