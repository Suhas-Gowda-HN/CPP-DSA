#include<iostream>
using namespace std;

void num(int i,int x){
    if(i>x) return;
    cout<<i<<endl;
    num(i+1, x);
}
int main(){
    int x ;
    cout<<"Enter the number: ";
    cin>>x;
    num(1,x);
}