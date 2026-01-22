 #include <iostream>
 using namespace std;

 int main(){
    int x=7,y=2;
    cout<< x+y <<endl;   //Addition
    cout<< x-y <<endl;   //Subtraction
    cout<< x*y <<endl;   //Multiply
    cout<< x/y <<endl;   //Divide -(3) --This will come in Integer and below it's integer value
                         // For this issue we will change the type of datatype from "int" to "float"

    float z=7, u=2; // No roundoff in float
    cout<< z/u <<endl;   // (3.5) Now the correct answer will come in decimal 
}