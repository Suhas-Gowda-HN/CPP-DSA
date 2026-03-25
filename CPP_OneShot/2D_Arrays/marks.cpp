#include<iostream>
using namespace std;

int main(){
    int a[2][4]; 
    cout<<"Enter the roll no and marks of 4 students "<<endl;
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<4 ; j++){
            cin>>a[i][j];        
        }
        cout<<endl;
    }
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<a[i][j]<<" ";        
        }
        cout<<endl;
    }

}