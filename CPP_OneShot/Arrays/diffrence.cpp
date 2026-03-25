#include<iostream>
using namespace std;

int main(){
                       
    int a[]={1,2,3,4,5};
    int se = 0;
    int so = 0;

    for(int i=0 ; i<sizeof(a)/4; i++){       
        if(i%2==0){
            se+=a[i];
        }
        else{
            so+=a[i];
        }
    }
    cout<<"the sum of even nums = "<<se<<endl;
    cout<<"the sum of odd nums = "<<so<<endl;

    cout<<"Diffrence = "<<se-so<<endl;
}