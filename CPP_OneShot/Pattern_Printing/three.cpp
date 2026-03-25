#include<iostream>
using namespace std;

int main(){

    int m , n;
    cout<<"Enter the value of Rows: ";
    cin>>m;
    cout<<"Enter the value of Columns: ";
    cin>>n;

    for(int i=1 ; i<=m ; i++){
        for(int j=1 ; j<=n ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*
        1 1 1 1 1
        2 2 2 2 2 
        3 3 3 3 3 
        4 4 4 4 4
        5 5 5 5 5 
*/