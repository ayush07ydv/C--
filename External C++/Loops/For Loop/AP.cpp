#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;

    // 1 3 5 7 9......
    for(int a=1;a<=2*n-1; a+=2){
        cout<<a<<endl;
    }

    //Display this AP - 4 7 10 13 16.......
    int x;
    cout<<"Enter how much you need: ";
    cin>>x;

    for(int v=4;v<=3*x+1;v=v+3){
        cout<<v<<endl;
    }
}