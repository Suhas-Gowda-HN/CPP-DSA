#include<iostream>
using namespace std;

int num(int x , int b){
    if(b==0) return 1;
    return x * num(x,b-1);
}
int main(){
    int x , b;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the exponential: ";
    cin>>b;
    cout<<num(x,b)<<endl;
}