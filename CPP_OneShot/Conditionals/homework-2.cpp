#include<iostream>
using namespace std;

// area of rectangle is  A = w l
// perimeter of rectangle is P = 2(l+w)

int main(){

    float l , w , a , p;
    
    cout<<"Enter the length of rectangle : ";
    cin>>l;
    cout<<"Enter the width of rectangle : ";
    cin>>w;

    a = w*l;
    p= 2*(w+l);

    cout<<"area = "<<a<<endl;
    cout<<"perimeter = "<<p<<endl;

    if(a<p){
        cout<<"Area is smaller than Permeter"<<endl;
    }
    else if(a>p){
        cout<<"Area is greater than Perimeter"<<endl;
    }
    else{
        cout<<"Area is same as the Perimeter"<<endl;
    }
}