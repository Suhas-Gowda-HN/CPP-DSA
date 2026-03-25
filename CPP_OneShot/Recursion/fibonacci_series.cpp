#include<iostream>
using namespace std;

int num(int x){
    if(x==1 || x ==2) return 1;
    return num(x-1) + num(x-2);
}
int main(){
    int x , b;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<num(x)<<endl;
}