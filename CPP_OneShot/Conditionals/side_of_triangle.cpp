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
    if((x+y)>z && (y+z)>x && (z+x)>y){
        cout<<"The numbers are 3 sides of triangle"<<endl;
    }
    else{
        cout<<"The numbers are not sides"<<endl;
    }
}