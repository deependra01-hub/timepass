#include<iostream>
using namespace std;

int all(int a){
    int b[5];

    for (int i=0;i<5;i++){
        b[i]=i+1;
    }   
   
    for(int i=0;i<5;i++){
        cout<<b[i];
    }
   


}

int main(){
    all(5);
}