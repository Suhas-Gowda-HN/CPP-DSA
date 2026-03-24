#include<iostream>
using namespace std;

// arithmetic progression ==.  A = a + (n-1) * d

// a = starting number , d = common diffrence , n = number of terms

int main(){
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i =1 ; i<=2*n-1 ; i+=2){
        cout<<i<<endl;
    }
}