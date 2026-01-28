#include <iostream>
using namespace std;

int main(){
    /*  Take 3 positive integers input and print the greatest of them. [Without using multiple conditions]  */
    
    //INPUT SECTION
    int x,y,z;
    cout<<"1st Number: ";
    cin>>x;
    cout<<"2nd Number: ";
    cin>>y;
    cout<<"3rd Number: ";
    cin>>z;

    //PROCESS & OUTPUT SECTION
    if(x>y){
        if(x>z){
            cout<<x<<" is greatest"<<endl;
        }
        else{
            cout<<z<<" is greatest"<<endl;
        }
    }
    else
    {
        if (y>z)
        {
            cout<<y<<" is greatest"<<endl;
        }
        else
        {
            cout<<z<<" is greatest"<<endl;
        }
        
    }
    
}