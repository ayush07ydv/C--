#include <iostream>
using namespace std;

int main(){
    /*If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made a profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred. */

    int CP, SP;
    cout<<"Enter Cost  Price of the product: ";
    cin>>CP;
    cout<<"Enter Selling  Price of the product: ";
    cin>>SP;

    if(CP<SP){
        cout<<"Profit, Profit Amount is: "<< SP-CP <<endl;
    }
    else if(CP==SP){
        cout<<"NO Profit No Loss" <<endl;
    }
    else{
        cout<<"Loss, Loss Amount is: "<< CP-SP <<endl;
    }
}
