#include<iostream>
using namespace std;

int main(){

    int i = 1;
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    while(i<=n){
        
        int j = n;
        while(j>=1){
            cout<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}