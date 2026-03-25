#include<iostream>
using namespace std;

int main(){
    int a[2][3]; // declaration of 2-d array ,  here rows are first and then the columns
    a[0][0]=5;
    a[0][1]=6;
    a[0][2]=7;      // initialization
    a[1][0]=1;
    a[1][1]=2;
    a[1][2]=3;

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<a[i][j]<<" ";         //output
        }
        cout<<endl;
    }

}