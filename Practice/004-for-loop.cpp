#include <iostream>
using namespace std;

// For loop

int main()
{

    // Printing first 10 natural numbers
    // for(int i=1; i<=10; i++){
    //     cout<<i<<endl;
    // }


    // Write a program in C++ to find the sum of the n numbers.
    // int n, sum=0;
    // cout<<"Enter a number: "<<endl;
    // cin>>n;
    // cout<<"The numbers that will be added are: ";
    // for(int i=0; i<=n; i++){
    //     cout<<i<<" ";
    //     sum=sum+i;
    // }
    // cout<<endl<<"The sum of these numbers are: "<<sum<<endl;


    // Write a program in C++ to get the Multiplication table of n number.
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<"Here is the table of "<<n<<"."<<endl;
    // for(int i = 1; i<=10; i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }


    // Write a porgram in C++ to print only odd numbers.
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int i=0; i<=n; i++){
    //     if(i%2!=0){
    //         cout<<i<<endl;
    //     }
    // }


    // Write a program in C++ to check if an entered number is a perfect number or not.
    // int num, sum = 0;
    // cout<<"Enter a number to check whether it is a perfect number or not: ";
    // cin>>num;
    // for(int i = 1; i < num; i++){
    //     if(num % i == 0){
    //     sum = sum + i;
    //     }
    // }
    // if(sum == num){
    //     cout<<num<<" is a perfect number."<<endl;
    // }
    // else{
    //     cout<<num<<" is not a perfect number."<<endl;
    // }


    // Write a program in C++ to find the factorial of a number.
    // int num, factorial = 1;
    // cout << "Enter a number to get factorial of: ";
    // cin >> num;
    // cout<<"The factorial of "<<num<<" = ";
    // for (int i = 1; i <= num; i++){
    //     factorial = factorial * i;
    // }
    // cout<<factorial;


    // Write a program to find the divisors of a given number.
    // int num;
    // cout << "Enter a number to get the divisors of: ";
    // cin >> num;
    // // bool allDivisor
    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    // }


    // Write a program to check whether an entered number is prime or not.
    int num;
    cout<<"Enter a number to check if it is prime or not: ";
    cin>>num;
    bool isPrime = true;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        } 
    }

    if (isPrime)
    {
        cout<<num<<" is a prime number.";
    }
    else{
        cout<<num<<" is not a prime number.";
    }

}