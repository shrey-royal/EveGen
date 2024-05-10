#include<iostream>
using namespace std;

// void hello(int n) {
//     if(n == 1) {
//         cout << n << endl;
//     } else {
//         cout << n << endl;
//         hello(n-1); //recursion
//     }
// }

//factorial(n)
// int factorial(int n) {
//     if(n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n-1);
//     }
// }

//fibonacci series
int fibonacci(int n) {
    if(n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2); //recursion
    }
}


int main() {
    
    // hello(5);
    // cout << factorial(5) << endl;

    for(int i=0; i<5; i++) {
        cout << fibonacci(i) << ", ";
    }


    return 0;
}

/*
Tasks:

1. Power Calculation: Implement a function to calculate the power of a number using recursion. The function should take two integers as input, base and exponent.

2. Sum of Digits: Write a program to find the sum of digits of a positive integer using recursion.

3. Palindrome Check: Implement a function to check whether a given string is a palindrome or not using recursion. A palindrome is a string that reads the same backward as forward.

4. Tower of Hanoi: Solve the Tower of Hanoi problem using recursion. Given three towers (A, B, and C) and n disks of different sizes initially stacked on tower A in ascending order of size, move all disks from tower A to tower C using tower B as an auxiliary.

*/