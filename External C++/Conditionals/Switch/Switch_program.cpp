#include <iostream>
using namespace std;

int main(){

    //Write a program to create a calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division) based on user input using a switch statement. The calculator should input two numbers and an operator from the user.

    //INPUT SECTION
    int num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op; 

    //PROCESS AND OUTPUT SECTION
    switch(op){
        case '+':
        cout<<num1 + num2<<endl;
        break;
        case '-':
        cout<<num1 - num2<<endl;
        break;
        case '*':
        cout<<num1 * num2<<endl;
        break;
        case '/':
        cout<<num1 / num2<<endl;
        break;
        default:
        cout<<"Invalid Statement"<<endl;
    }
}    