#include<iostream>
using namespace std;
void func(int a[]){     // note that arrays pass by reference by default
    a[1] = 0;
    a[3] = 0;  
}
int main(){
    int a[5];
    cout<<"Enter the values of the array"<<endl;
    for(int i=0 ; i<5 ; i++){       
        cin>>a[i];
    }
    func(a);
    for(int i=0 ; i<5 ; i++){       
        cout<<a[i]<<" ";
    }
    cout<<endl;
}