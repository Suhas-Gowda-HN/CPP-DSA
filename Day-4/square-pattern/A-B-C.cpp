// i have coded using both for loop and while loop

#include<iostream>
using namespace std;
 int main(){

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    // for(int i=1; i<=n ; i++){
    //     char ch = 'A';
    //     for(int j=1 ; j<=n ; j++){
    //         cout<<ch<<" ";
    //         ch += 1;
    //     }
    //     cout<<endl;
    // }
    
    int i = 1;
    while(i<=n){
        int j = 1;
        char ch = 'A';
        while(j<=n){
            cout<<ch<<" ";
            ch += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
 }