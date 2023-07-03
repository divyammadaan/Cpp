#include<iostream>

using namespace std;
int main(){
    /*Loops in C++:
    There are three types of loops in C++
        1. For loop
        2. While loop
        3. do-While loop
    */  

   // Syntax for For loop
//    for(initialization; condition; updation)
//    {
//     loop body(C++ code)
//    }

    /*For loop in C++*/
    // for(int i=0; i<=100; i++)
    // {
    //     cout<<i<<endl;
    //     // i++;
    // }

    // Example of infinite For loop
    // for(int i=1; 34<=40;i++)
    // {
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // While(condition)
    // {
    //  C++ statements;    
    // }

    // Printing 1 to 40 using While loop
    // int i=1;
    // while(i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite While loop
    // int i=1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    /*Syntax of do-while loop in C++*/
    // Syntax:
    // do
    // {
    //  C++ statements;    
    // }while(condition);   

    // Printing 1 to 40 using do-While loop
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);
    
    //Multiplication table of n
    int s;
    int n;
    int i=1;
    cout<<"Enter a number for multiplication table."<<endl;
    cin>>n;
    for((n>0);(i<=10);i++)
    {
        s=n*i;
        cout<<s<<endl;
    }
    
    return 0;
}