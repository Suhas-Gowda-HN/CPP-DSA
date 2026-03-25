#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int sum=1;
    for(int i=0 ; i<sizeof(a)/4 ; i++){       
        sum*=a[i];
    }
    cout<<"The product of the array numbers is "<<sum<<endl;
}