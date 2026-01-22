#include <iostream>
using namespace std;
int main(){
    int a=5;
    cout<< a<< endl;
    a+=1;             //Increament
    cout<< a<<endl;
    a++;             //Increament
    cout<<a<<endl;
    a-=1;             //Decreament
    cout<< a<<endl;
    a--;             //Decreament
    cout<<a<<endl;
    cout<<" "<<endl;


    //Pre-Increment or Decrement
    int s=5;
    ++s;
    cout<<s<<endl;
    --s;
    cout<<s<<endl;
    cout<<" "<<endl;

    //Two Case Code (Same Same but diffrent with - Outputs)

    // 1st Case (Post-Increment)
    int x=4;
    cout<<x<<endl;         //4
    cout<<x++<<endl;       //4
    cout<<x<<endl;         //5

    cout<<" "<<endl;

    //2nd Case Code (Pre-Increment)
    int y=4;
    cout<<y<<endl;         //4
    cout<<++y<<endl;       //5
    cout<<y<<endl;         //5 
    return 0;
}