#include<iostream>
using namespace std;

void fun1(){
    cout<<"You are in function 1"<<endl;
    return;
}
void fun2(){
    cout<<"You are in function 2"<<endl;
    fun1();
}

int main(){
    cout<<"Your are in main function"<<endl;
    fun2();
}