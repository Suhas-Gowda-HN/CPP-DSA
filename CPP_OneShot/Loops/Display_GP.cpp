#include<iostream>
using namespace std;

// Geometric progression = starting number * multiple of second number 

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int x = 3;
    for(int i = 0 ; i<n ; i++){
        cout<<x<<endl;
        x*=4;
    }
}