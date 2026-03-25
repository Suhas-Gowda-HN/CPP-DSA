#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int max = a[0];
    for(int i=0 ; i<sizeof(a)/4 ; i++){       
        if(a[i]>a[0]){
            max=a[i];
        }
    }
    cout<<"The maximum of the array numbers is "<<max<<endl;
}
//INT_MIN and INT_MAX are the only smallest and largest integers