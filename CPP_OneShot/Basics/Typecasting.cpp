#include<iostream>
using namespace std;

int main(){
    
    int x = 6;

    // We can convert data types only when conversion is logically possible and supported.

    // if we need to convert the data type of int to stringd then 
    // use = to_strings

    string s = to_string(x);

    cout<<"you have entered the value of "+s<<endl;

    // typecasting can be done as 
    // (data_type)variable

    // type casting. can be done between 

    //1. char to int 
    int a;
    cin>>a;
    cout<<(char)a<<endl;

    //2. int to char

    char b;
    cin>>b;
    int c = (int)b;
    cout<<c<<endl;
}