#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int sum = 0;
    int x = 0;
    while(n>0){
        x=n%10;
        sum+=x;
        n=n/10;
    }
    cout<<"The sum is: "<<sum<<endl;

}