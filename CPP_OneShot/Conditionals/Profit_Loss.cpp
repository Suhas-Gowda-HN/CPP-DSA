#include<iostream>
using namespace std;

int main(){

    float sp , cp ;
    cout<<"enter the value of Cost Price: ";
    cin>>cp;
    cout<<"enter the value of Selling Price: ";
    cin>>sp;

    if(cp>sp){
        cout<<"Seller has made Loss of rupees "<<cp-sp<<endl;
    }
    else if(sp>cp){
        cout<<"Seller has made Profit of rupees "<<sp-cp<<endl;
    }
    else{
        cout<<"Seller has made no Profit and no Loss"<<endl;
    }
    

}