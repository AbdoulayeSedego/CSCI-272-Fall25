/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
/*
Abdoulaye Sedego CSCI 272
*/

// function to check if a given number is odd or even
void odd_even(int num) {
    
    // checking to see if num is even or odd
    if (num % 2 == 0){
        cout <<num<<" is an even number"<<endl;
    }
    else{
        cout <<num<<" is an odd number"<<endl;
    }
}

int main()
{
    cout<<"Enter an integer:"<<endl;
    int num = 0;
    // taking number from user
    cin >>num;
    // calling the function and passing it an argument
    odd_even(num);

    return 0;
}