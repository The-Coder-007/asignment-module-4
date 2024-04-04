/*
Write a program to find the multiplication values and the cubic values using
inline function
*/

#include <iostream>
using namespace std;

// Inline function to calculate multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate cubic value of a number
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate and display multiplication value
    cout << "Multiplication value of " << num << " and 2 is: " << multiply(num, 2) << endl;

    // Calculate and display cubic value
    cout << "Cubic value of " << num << " is: " << cube(num) << endl;

    return 0;
}

