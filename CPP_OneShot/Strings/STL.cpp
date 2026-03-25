#include<iostream>
using namespace std;

int main(){
  
    string a = "Hello i am Suhas"; 

    a.push_back('s');  // appends the character from back

    cout<<a<<endl;

    a.pop_back();       // delete the character from back

    cout<<a<<endl;

    a.clear();          // makes the string empty

    cout<<a<<endl;

}