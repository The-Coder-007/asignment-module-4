/*
Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/

#include <iostream>
using namespace std;

class MathOperations {
public:
    // Function to perform addition
    int operate(int num1, int num2) {
        return num1 + num2;
    }

    // Function overloading for addition with float parameters
    float operate(float num1, float num2) {
        return num1 + num2;
    }

    // Function to perform subtraction
    int operate(int num1, int num2, int num3) {
        return num1 - num2 - num3;
    }

    // Function overloading for subtraction with float parameters
    float operate(float num1, float num2, float num3) {
        return num1 - num2 - num3;
    }

    // Function to perform multiplication
    int operate(int num1, int num2, int num3, int num4) {
        return num1 * num2 * num3 * num4;
    }

    // Function overloading for multiplication with float parameters
    float operate(float num1, float num2, float num3, float num4) {
        return num1 * num2 * num3 * num4;
    }

    // Function to perform division
    float operate(float num1, int num2) {
        if (num2 == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
        return num1 / num2;
    }

    // Function to perform division with double parameters
    double operate(double num1, double num2) {
        if (num2 == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
    MathOperations math;

    // Perform addition
    cout << "Addition (int): " << math.operate(5, 3) << endl;
    cout << "Addition (float): " << math.operate(5.5f, 3.3f) << endl;

    // Perform subtraction
    cout << "Subtraction (int): " << math.operate(10, 3, 2) << endl;
    cout << "Subtraction (float): " << math.operate(10.5f, 3.2f, 2.1f) << endl;

    // Perform multiplication
    cout << "Multiplication (int): " << math.operate(2, 3, 4, 5) << endl;
    cout << "Multiplication (float): " << math.operate(2.5f, 3.5f, 4.5f, 5.5f) << endl;

    // Perform division
    cout << "Division (float): " << math.operate(10.5f, 2) << endl;
    cout << "Division (double): " << math.operate(10.5, 2.0) << endl;

    return 0;
}

