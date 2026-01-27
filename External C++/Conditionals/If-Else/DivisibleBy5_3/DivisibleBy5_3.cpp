#include <iostream>
using namespace std;

int main(){
    /* Take Positive integer input  and tell if it is divisible by 5 & 3 */

    int x;
    cout<<"Enter any no. to check it is divisible by 5 & 3: ";
    cin>>x;
    if(x%5==0 and x%3==0){
        cout<<x<<" Yes, it divible by 5 & 3"<<endl;
    }
    else{
        cout<<"No, it not divisible by 5 & 3"<<endl;
    }
}