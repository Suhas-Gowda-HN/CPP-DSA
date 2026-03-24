#include<iostream>
using namespace std;

int main(){

    int x ;
    cout<<"enter the value of x : ";
    cin>>x;
    
    if(x>99 && x<1000){
        cout<<"The number you have entered is 3 Digit Number"<<endl;
    }
    else{
        cout<<"The number you have entered is not 3 Digit Number"<<endl;
    }
}