#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i;
    int fact = 1;
    for(i=1 ; i<=n ; i++){
        fact *= i;
        cout<<fact<<endl;
    }

}