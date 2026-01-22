#include <iostream>
using namespace std;

int main(){
    /*Given the length and breadth of rectangle, Write a program to find whether the area of the rectangle is greater than its perimeter */

    int length, breadth;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Breadth: ";
    cin>>breadth;

    int area, peri;
    area = length*breadth;
    peri = 2*(length+breadth);
    
    if(area>peri){
        cout<<"Area is Bigger"<<endl;
    }
    else{
        cout<<"Perimeter is Bigger"<<endl;
    }
}