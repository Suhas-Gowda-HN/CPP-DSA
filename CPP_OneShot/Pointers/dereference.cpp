#include<iostream>
using namespace std;

int main(){

    int x =1;
    int* p = &x;

    cout<<x<<endl;

    *p = 23;

    cout<<x<<endl;

}