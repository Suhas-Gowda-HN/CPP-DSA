#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int sum=0;
    for(int i=0 ; i<sizeof(a)/4 ; i++){        // we use sizeof to calculate the size of the array
        sum+=a[i];
    }
    cout<<"The sum of the array numbers is "<<sum<<endl;
}