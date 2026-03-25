#include<iostream>
using namespace std;

int fact(int x){
    int a = 1;
    for(int i = 1 ; i<=x ; i++ ){
        a *= i ;
    }
    return a;
}
int main(){

    int a , b ;
    cout<<"Enter the value of N : ";
    cin>>a;
    cout<<"Enter the value of R : ";
    cin>>b;
    int n = fact(a);
    int r = fact(b);
    int m = fact(a-b);
    int c = n/(r*m);
    cout<<"The combination is : "<<c<<endl;

    
}