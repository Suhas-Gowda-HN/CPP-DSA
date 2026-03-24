#include<iostream>
using namespace std;

// the sum of 2 sides must be greater than 3rd side

int main(){

    int x , y , z ;
    cout<<"enter the value of x : ";
    cin>>x;
    cout<<"enter the value of y : ";
    cin>>y;
    cout<<"enter the value of z : ";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<"x is greatest"<<endl;
        }
        else{
            cout<<"z is greatest"<<endl;
        }
    }
    else{
        if(y>z){
            cout<<"y is greatest"<<endl;
        }
        else{
            cout<<"z is greatest"<<endl;
        }
    }
}