#include<iostream>
using namespace std;

int main(){

    int x ;
    cout<<"enter the value of x : ";
    cin>>x;
    
    if(x>=0){
        cout<<x<<endl;
    }
    else{
        x = -(x);
        cout<<x<<endl;
    }
}