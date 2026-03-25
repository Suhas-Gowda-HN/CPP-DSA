#include<iostream>
using namespace std;

int main(){
  
    string a = "Hello i am Suhas"; 

    for(int i=0 ; i<a.length() ; i++){
        if(i%2==0){
            a[i]='a';
        }
    }
    cout<<a<<endl;

}