#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int max=0;

    for (int i=0;i<5;i++){
        int sum=0;
        
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];

                sum=sum+arr[k];
            }
            
            cout<<endl;

            if(sum>max){
                max=sum;
            }sum=0;
        }

        
    }cout<<max;
    
}