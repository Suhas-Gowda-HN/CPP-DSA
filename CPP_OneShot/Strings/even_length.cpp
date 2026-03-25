#include<iostream>
using namespace std;

int main(){
  
    string a = "aditya"; 
    int n = a.length();
    reverse(a.begin(),a.begin()+n/2);     

    cout<<a<<endl;

}