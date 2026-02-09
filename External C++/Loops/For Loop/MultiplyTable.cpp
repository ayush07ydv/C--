#include <iostream>
using namespace std;

int main(){
    int x,f;
    cout<<"Enter any no. to get the multiplication table: ";
    cin>>x;
    cout<<"Till to: ";
    cin>>f;
    
    for(int i=1;i<=f;i++){
        int d=x*i;
        cout<<d<<endl;
    }
}