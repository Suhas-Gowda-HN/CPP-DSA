#include<iostream>
using namespace std;

int main(){


    for(int i=1+64 ; i<=4+64 ; i++){
        for(int j=1+64 ; j<=i ; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}

/*
        A
        A B
        A B C
        A B C D

*/