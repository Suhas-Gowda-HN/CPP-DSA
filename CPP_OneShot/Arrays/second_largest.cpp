#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int max = a[0],sm;
    for(int i=0 ; i<sizeof(a)/4 ; i++){       
        if(a[i]>a[0]){
            max=a[i];
        }
    }
    for(int i=0 ; i<sizeof(a)/4 ; i++){       
        if(a[i]>a[0] && a[i]!=max){
            sm=a[i];
        }
    }
    cout<<"second largest element = "<<sm<<endl;
}