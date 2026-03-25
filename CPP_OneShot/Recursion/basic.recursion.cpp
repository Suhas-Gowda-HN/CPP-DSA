//function calling itself

#include<iostream>
using namespace std;

void name(){
    cout<<"Hello Suhas"<<endl;
    name();
}
int main(){
 
    name();
}