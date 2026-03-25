#include<iostream>
using namespace std;

int fact(int x){
    int a = 1;
    for(int i = 1 ; i<=x ; i++ ){
        a *= i ;
    }
    return a;
}
int ncr(int i , int j){
    int n = fact(i);
    int r = fact(j);
    int m = fact(i-j);
    int c = n/(r*m);
    return c;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0 ; i<=n ; i++){
        for(int j=0 ; j<=n-i ; j++){
            cout<<"  ";
        }
        for(int j=0 ; j<=i ; j++){
            cout<<ncr(i,j)<<"   ";
        }
        cout<<endl;
    }
        
}