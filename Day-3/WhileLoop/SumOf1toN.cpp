#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 1;
    int n;
    
    cout<<"Enter the value of N: ";
    cin>>n;

    while(i<=n){
        sum= sum+i;
        i=i+1;
    }
    cout<<"SUM of "<<n<<" number is: "<<sum<<endl;
}