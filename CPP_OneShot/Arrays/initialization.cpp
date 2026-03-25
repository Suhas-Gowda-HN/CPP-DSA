#include<iostream>
using namespace std;

int main(){
    int b[5]; // always the size of the array should be present when initializing

    int arr[]={2,3,4,5,6}; //the size of array is not required if declared at the time of initialized

    cout<<arr[0]<<endl; // arrays can be accessed using the index 

    arr[0] = 8; // arrays values can be updated after initialization

    cout<<arr[0]<<endl; //only the size of array can not be changed
}