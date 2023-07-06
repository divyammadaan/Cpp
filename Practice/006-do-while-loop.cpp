#include <iostream>
using namespace std;

    // do-while loop

int main()
{
    // Printing first 10 natural numbers
    // int i = 1;
    // do
    // {
    // cout<<i<<endl;
    //     i++;
    // } while (i<=10);


    // Write a program in C++ to find the sum of the n numbers.
    // int num, sum = 0;
    // cout<<"Enter a number: ";
    // cin>>num;
    // int i = 1;
    // do
    // {
    //     cout<<i<<endl;
    //     sum = sum + i;
    //     i++;
    // } while (i<=num);
    // cout<<"The sum of the entered number is: "<<sum;


    // Write a program in C++ to get the Multiplication table of n number.
    // int num;
    // cout<<"Enter a number to get multiplication table of: ";
    // cin>>num;
    // int i = 1;
    // do
    // {
    // cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    //     i++;
    // }while (i<=10);


    // Write a porgram in C++ to print only odd numbers.
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    // int i = 0;
    // do 
    // {
    //     if(i%2 != 0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // } while (i<=num);
    

    // Write a program in C++ to find the factorial of a number.
    // int num, factorial = 1;
    // cout<<"Enter a number: ";
    // cin>>num;
    // cout<<"The factorial of "<<num<<" = ";
    // int i = 1;
    // do
    // {
    //     factorial = factorial * i;
    //     i++;
    // } while (i<=num);
    // cout<<factorial;
    
    
    // Write a program to check whether an entered number is prime or not.
    int num;
    cout<<"Enter a number to check if its prime or not: ";
    cin>>num;
    int i = 2;
    bool isPrime = true;
    do
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
        i++;
    } while (i < num);
    
    if (isPrime)
    {
        cout<<num<<" is a prime number.";
    }
    else
    {
        cout<<num<<" is not a prime number.";
    }
    
}