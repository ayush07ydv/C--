#include <iostream>
using namespace std;

int main(){
    /* Take 3 numbers input and tell if they can be the sides of a triangle. */

    int a, b, c;
    cout<<"Check Triangle sides is correct or not"<<endl;
    cout<<"Enter 3 Sides of Triangle: ";
    cin>>a;
    cin>>b;
    cin>>c;
    
    if((a+b)>c && (b+c)>a and (c+a)>b){
        cout<<"Valid Triangle "<<endl;
    }
    else{
        cout<<"Invalid Triangle"<<endl;
    }
}