#include <iostream>
using namespace std;

int main(){
    /*Take positive integer input and tell if it is a three digit number or not. */

    int s;
    cout<<"Enter any 3 digit no.";
    cin>>s;

    if(s>99 && s<1000){
        cout<<s<<" is 3 digit number"<<endl;
        
    }
    else{
        cout<<s<<" is not 3 digit number"<<endl;
    }
}