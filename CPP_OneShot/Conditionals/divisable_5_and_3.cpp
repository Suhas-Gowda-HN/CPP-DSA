#include<iostream>
using namespace std;

int main(){

    int x ;
    cout<<"enter the value of x : ";
    cin>>x;
    
    if(x%5==0 && x%3==0){
        cout<<"It is divisable by 5 and 3"<<endl;
    }
    else{
        cout<<"Not divisable"<<endl;
    }
}