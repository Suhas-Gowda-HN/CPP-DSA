#include<iostream>
using namespace std;

int main(){
  
    string a = "aditya"; 
    int n = a.length();
    reverse(a.begin()+1,a.begin()+5);     

    cout<<a<<endl;

}