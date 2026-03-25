#include<iostream>
using namespace std;

void num(int x){
    if(x==0) return;
    num(x-1);
    cout<<x<<endl;
}
int main(){
    int x ;
    cout<<"Enter the number: ";
    cin>>x;
    num(x);
}