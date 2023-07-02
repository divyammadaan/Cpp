// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the prorammer
// #include "this.h" //--> This will produce an error if this.h is not present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++: "<<endl; 
    cout<<"Following are the Arithmetic Operators in C++"<<endl;
    //Arithmetic Operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl; //will only show before the point
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl; //will first print then the value will be incremented
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl; // will first increment the value and then print
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl<<endl;

    // Assignment Operators --> Used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison Operators
    cout<<"Following are the types of comparsion Operators in C++: "<<endl; 
    cout<<"The value of a == b is: "<<(a==b)<<endl;
    cout<<"The value of a != b is: "<<(a!=b)<<endl;
    cout<<"The value of a > b is: "<<(a>b)<<endl;
    cout<<"The value of a < b is: "<<(a<b)<<endl;
    cout<<"The value of a >= b is: "<<(a>=b)<<endl;
    cout<<"The value of a <= b is: "<<(a<=b)<<endl;
    cout<<'\n'<<'\n';

    // Logical Operators
    cout<<"Following are the Logical Operators in C++: "<<endl;
    cout<<"The value of this 'and' logical operator ((a == b) && (a < b)) is: "<<((a == b) && (a < b))<<endl;
    cout<<"The value of this 'or' logical operator ((a == b) || (a < b)) is: "<<((a == b) || (a < b))<<endl;
    cout<<"The value of this 'not' logical operator (!(a == b)) is: "<<(!(a == b))<<endl; //not operator gives the opposite of the actual.
    

    return 0;

    

}