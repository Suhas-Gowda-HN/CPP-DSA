#include<iostream>
using namespace std;

int num(int x){
    if(x==1 || x==0) return 1;
    return x * num(x-1);
}
int main(){
    int x ;
    cout<<"Enter the factorial number to find: ";
    cin>>x;
    cout<<num(x)<<endl;
}