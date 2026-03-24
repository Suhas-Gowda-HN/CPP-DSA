#include<iostream>
using namespace std;

// the sum of 2 sides must be greater than 3rd side

int main(){

    int x ;
    cout<<"enter the marks of x : ";
    cin>>x;
    
    if(x>60 && x<=100){
        if(x>80){
            cout<<"Very Good"<<endl;
        }
        else{
            cout<<"Good"<<endl;
        }
    }
    else{
        if(x<=40){
            cout<<"fail"<<endl;
        }
        else{
            cout<<"Average"<<endl;
        }
    }
}