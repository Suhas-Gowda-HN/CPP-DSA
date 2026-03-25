#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){
    
    string s = "COw is an animal with four legs";
    int count =0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout<<count<<endl;
}