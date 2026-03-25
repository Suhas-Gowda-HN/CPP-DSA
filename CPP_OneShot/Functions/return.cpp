#include<iostream>
using namespace std;

void greet(){
    cout<<"Good Morning"<<endl;
    return; // this ends the execution till this line and further code wont run , it acts in similar to break;
    cout<<"Hey how are you?"<<endl;
}
int main(){
    greet();
    cout<<"2nd time"<<endl;
    greet();
}