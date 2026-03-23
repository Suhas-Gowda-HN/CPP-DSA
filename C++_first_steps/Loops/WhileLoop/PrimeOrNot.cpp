#include<iostream>
using namespace std;

int main(){
    int i=2 , n;
    cout<<"Enter the value of N: ";
    cin>>n;

    while(i<n){
        if(n%i==0){
            cout<<i<<" Is Not Prime for "<<n<<endl;
        }
        else{
            cout<<i<<" Is Prime for "<<n<<endl;
        }
        i = i +1;
    }
}