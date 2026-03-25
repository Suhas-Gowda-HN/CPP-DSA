#include<iostream>
using namespace std;

int main(){

    int m , n;
    cout<<"Enter the value of Rows: ";
    cin>>m;
    cout<<"Enter the value of Columns: ";
    cin>>n;

    for(int i=1 ; i<=m ; i++){
        for(int j=97 ; j<97+n ; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}

/*
        a b c
        a b c
        a b c

*/