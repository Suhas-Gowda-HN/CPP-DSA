#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int i = 1;
    int fact = 1;
    while(n>i){
        fact*=i;
        i++;
    }
    cout<<"Factorial is : "<<fact<<endl;
}