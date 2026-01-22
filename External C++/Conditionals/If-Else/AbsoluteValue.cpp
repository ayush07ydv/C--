#include <iostream>
using namespace std;

int main(){
    //Create a absolute number, if a number is present in negative form then convert it to positive and if a number is present in positive then keep it same as positive no.

    cout<<"Enter any no. toh convert it to absolute no.: ";
    int a;
    cin>>a;
    if (a<=0){
        cout<<"Absolute no. is: "<<-a<<endl;
    }
    else{
        cout << "Absolute no. is: "<<a<<endl;
    }
}