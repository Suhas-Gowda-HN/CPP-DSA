#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        for(int j=65 ; j<=(n-i+1)+64 ; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}

/*
        A B C D
        A B C
        A B
        A

*/