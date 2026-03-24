#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    int a=0;
    int x ;
    while(n>0){
        x=n%10; 
        a = 10*a+x;
        n=n/10;
    }
    cout<<a<<endl;

}