#include <iostream>
using namespace std;

int main(){
    cout<<"All Even no."<<endl;
    for (int i = 1; i <= 100 ; i++)
    {
        // Print Even from 1 to 100

         if(i%2==0) 
         cout<<i<<endl;
    }


    cout<<"All Odd  no."<<endl;
    for (int x = 1; x <= 100 ; x++)
    {
        // Print Odd from 1 to 100

         if(x%2!=0) 
         cout<<x<<endl;
    }
}