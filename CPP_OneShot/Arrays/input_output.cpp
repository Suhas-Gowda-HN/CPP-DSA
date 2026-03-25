#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Enter the values of the array"<<endl;
    for(int i=0 ; i<5 ; i++){       //input
        cin>>a[i];
    }

    a[1] = 0;
    a[3] = 0;                       //update

    for(int i=0 ; i<5 ; i++){       //output
        cout<<a[i]<<" ";
    }
    cout<<endl;
}