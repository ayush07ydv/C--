#include <iostream>
using namespace std;

int main(){
    //Input Process
    int n; string x;
    cout<<"Enter any name which you want to print : ";
    cin>>x;
    cout<<"Enter no. how much times you want to print: ";
    cin>>n;
    for (int a = 1; a<=n; a++)
    {
        cout<<a<<" "<<x<<endl;
    }
    
}