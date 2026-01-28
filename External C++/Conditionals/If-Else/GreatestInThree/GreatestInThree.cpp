#include <iostream>
using namespace std;

int main(){
    /* Take 3 Positive integers input and print the greatest of them. */

    // INPUT SECTION
    int a,b,c;
    cout<<"Enter the Greatest number"<<endl;
    cout<<"Enter 1st no: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    cout<<"Enter 3rd no: ";
    cin>>c;
    
    //PROCESS & OUTPUT SECTION
    if(a>b && a>c){
        cout<<"1st input is bigger: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"2nd input is bigger: "<<b<<endl;
    }
    else{
        cout<<"3rd input is bigger: "<<c<<endl;
    }
}