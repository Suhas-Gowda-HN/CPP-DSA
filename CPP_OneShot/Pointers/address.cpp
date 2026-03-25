#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<&a<<endl;
}
int main(){
 int x = 25;
 int y = 50;
 cout<<&x<<endl;
 swap(x,y);
 // we will get diffrent memory address
}