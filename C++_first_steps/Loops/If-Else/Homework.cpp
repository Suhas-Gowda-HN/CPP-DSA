#include <iostream>
using namespace std;

int main() {
    // char ch;
    // cout << "Enter a Input: ";
    // cin >> ch;

    // if (ch >= 'a' && ch <= 'z') {
    //     cout << "Lowercase";
    // }
    // else if (ch >= 'A' && ch <= 'Z') {
    //     cout << "Uppercase";
    // }
    // else if (ch >= '0' && ch <= '9') {
    //     cout << "Numeric";
    // }
    // else {
    //     cout << "Special";
    // }

    int a ;
    cout<<"Enter any character of your choice: "<<endl;
    a = cin.get();

    if(a>=48 && a<=57){
        cout<<"Numeric number"<<endl;
    }
    else if(a>=65 && a<=90){
        cout<<"Uppercase Character"<<endl;
    }
    else if(a>=97 && a<=122){
        cout<<"Lowercase Character"<<endl;
    }
    else{
        cout<<"Special Character";
    }
}
