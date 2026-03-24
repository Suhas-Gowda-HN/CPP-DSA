#include<iostream>
using namespace std;

int main(){

    int x ;
    cout<<"enter the value of x : ";
    cin>>x;
    char y ;
    cout<<"enter the value of operator : ";
    cin>>y;
    int z ;
    cout<<"enter the value of y : ";
    cin>>z;
    switch(y){
        case '+' :
            cout<<x+z;
            break;
        case '-' :
            cout<<x-z;
            break;
        case '*' :
            cout<<x*z;
            break;
        case '/' :
            cout<<x/z;
            break;

    }
}