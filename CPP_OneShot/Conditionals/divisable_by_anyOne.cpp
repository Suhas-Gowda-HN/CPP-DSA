#include<iostream>
using namespace std;

int main(){

    int x ;
    cout<<"enter the value of x : ";
    cin>>x;
    
    // if(x%5==0 && x%3==0){
    //     cout<<"It is divisable by Both "<<endl;
    // }
    // else if(x%5 == 0){
    //     cout<<"Divisable by 5"<<endl;
    // }
    // else if(x%3 == 0){
    //     cout<<"Divisable by 3"<<endl;
    // }
    // else{
    //     cout<<"Not divisable by both"<<endl;
    // }
    if(x%5==0 || x%3==0){
         cout<<"It is divisable"<<endl;
    }
    else{
        cout<<"not divisable"<<endl;
    }
}