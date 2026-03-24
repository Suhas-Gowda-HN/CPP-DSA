#include<iostream>
using namespace std;

//if N has extra factor/factors except 1 and N , then it is composite 

int main(){
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    bool flag = true;
    for(int i=1 ; i<=n/2 ; i++){
        
        if(n%i==0 && i!=1){
            flag = false;
            cout<<"composite"<<endl;
            break;
        }
    }
    if(flag==true){
        cout<<"prime"<<endl;
    }
}