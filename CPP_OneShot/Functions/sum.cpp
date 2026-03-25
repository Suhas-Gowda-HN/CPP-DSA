#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b; // this return stores the value of the function
   
}
int main(){
    int a , b ;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"The sum of two numbers are: "<<sum(a,b)<<endl;
}