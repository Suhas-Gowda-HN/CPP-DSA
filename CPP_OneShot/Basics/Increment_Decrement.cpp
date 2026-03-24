#include<iostream>
using namespace std;

int main(){

    int x = 5;
    cout<<x++<<endl; // this outputs 5 itself not 6 because of POST INCREMENT

    int y = 3;
    y++;
    cout<<y<<endl; // this outputs 4 because the updation is been done for the variable in previous step 

    int z = 6;
    cout<<++z<<endl; // this outputs 7 because of PRE INCREMENT

    int a = 5;
    cout<<a--<<endl; // this outputs 5 itself not 4 because of POST DECREMENT

    int b = 3;
    b--;
    cout<<b<<endl; // this outputs 2 because the updation is been done for the variable in previous step 

    int c = 6;
    cout<<--c<<endl; // this outputs 5 because of PRE DECREMENT
    
}