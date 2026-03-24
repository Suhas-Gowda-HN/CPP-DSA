#include<iostream>
using namespace std;

int main(){
    
    // addition , subtraction and multiplication works same as maths
    //but the division follows the DEFAULT int DATA TYPE 
    //therefore the decimal number is ignored even if its .99

    int x = 5;
    int y = 2;

    cout<<x/y<<endl; // output is 2

    //modulus operator == this gives the remainder of the sum

    cout<<x%y<<endl; // outputs 1

    //rules of modulus operator

    /*
        1. a % b = a
        2. a % a = 0
        3. a % -b = a % b
        4. -a % b = -[a % b]
    */

}