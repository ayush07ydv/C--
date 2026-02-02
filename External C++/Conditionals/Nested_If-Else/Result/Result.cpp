#include <iostream>
using namespace std;

int main(){
    /*Take a input percentage of a student and print the grade according to marks */
    
    //INPUT SECTION
    int x;
    cout<<"Enter your percentage no.: ";
    cin>>x;
    
    //PROCESS AND OUTPUT SECTION
    if(x<=100 && x>=81){
        cout<<"Very Good"<<endl;
    }
    else if(x<=80 && x>=61){
        cout<<"Good"<<endl;
    }
    else if(x<=60 && x>=41){
        cout<<"Average"<<endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }
}
