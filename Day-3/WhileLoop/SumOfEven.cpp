#include<iostream>
using namespace std;

int main(){
    int sum =0 , i=0, n;
    cout<<"Enter the value of N: ";
    cin>>n;
     while(i <= n){
        sum = sum + i;
        i=i+2;
     }
    cout<<"Sum of Even number is: "<<sum;
}