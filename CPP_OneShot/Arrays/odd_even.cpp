#include<iostream>
using namespace std;

int main(){
                       
    int a[]={1,2,3,4,5};
    
    for(int i=0 ; i<sizeof(a)/4; i++){       
        if(i%2==0){
            a[i]+=10;
        }
        else{
            a[i]*=2;
        }
    }
    for(int i=0 ; i<sizeof(a)/4; i++){       
        cout<<a[i]<<" ";
    }
    cout<<endl;
}