#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the alue of n: ";
    cin>>n;

    for(int i = n/2 ; i>=0 ; i--){
        if(i%2==0){
            cout<<i<<endl;
            break;
        }
    }
}