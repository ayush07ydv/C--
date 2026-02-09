#include <iostream>
using namespace std;

int main(){
    int x=3,y,z;
    y=x=10; //This will operate from (Right to Left), so the value of x & y = 10
    z=x<10; //This have relational operator so this will operate from (Left to Right), Result is false so the answer is false. [False = 0] so output will be 0
    cout<<x<<" "<<y<<" "<<z<<endl; //-----> 10 10 0
}