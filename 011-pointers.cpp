#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> data type which holds the address of the other data types.

    int a =3;
    int* b;
    b= &a;
    // & ----> (Address of) Operator
    cout<<"The address of a is:"<<&a<<endl; 
    cout<<"The address of a is:"<<b<<endl;
    
    // * ----> (Value at) Deference operator
    cout<<"The value of address b is:"<<*b<<endl;

    // Pointer to pointer
    int** c = &b; 
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The addres of b is:"<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
    return 0;
}