#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the values of the size: ";
    cin>>n;                     
    int a[n];
    int num =1;
    for(int i=0 ; i<n; i++){       
        a[i]= num*num;
        num++;
    }
    for(int i=0 ; i<n ; i++){       //output
        cout<<a[i]<<" ";
    }
    cout<<endl;
}