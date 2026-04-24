#include<iostream>
using namespace std;
int unique(int arr1[],int n,int arr2[],int m){
    for(int i=0;i<n;i++){
        for(int j;j<m;j++){
            if(arr1[i]==arr2[j]){
                break;
            }
            else{
                arr2[m]=arr1[i];
                m++;
            }
        }
    }
}

int main(){
    int arr1[]={1,2,3,4,5,1,2,3};
    int n=sizeof(arr1)/sizeof(int);
    int arr2[n];
    int m=0;
    unique(arr1,n,arr2,m);
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }

}