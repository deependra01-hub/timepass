#include<iostream>
using namespace std;
 int b2d(int a){
    int b,c=0,p=1;
    while(a>0){
        b=a%10;
        p=p*2;
        c= c + ( b * p );
        a=a/10;
        
    }return c;
    
 }

int main(){
    int a=10111100;
    cout<< b2d(a);
   

}

 