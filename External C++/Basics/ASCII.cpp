#include <iostream>
using namespace std;

int main(){
    // a --> z = 97 --> 122
    // A --> z = 65 --> 90
    // 0 --> 9 = 48 --> 57

    int x;
    cout<<"Enter any no. to get the ASCII Value : ";
    cin>>x;
    char y = (char)x;
    cout << "Your ASCII no.: " << y<<endl;
}