/*
Write a program of Addition, Subtraction, Division, Multiplication using
constructor.
*/

#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor to initialize num1 and num2
    Calculator(double x, double y) {
        num1 = x;
        num2 = y;
    }

    // Function to perform addition
    double add() {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() {
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply() {
        return num1 * num2;
    }

    // Function to perform division
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Create a Calculator object with the input numbers
    Calculator calc(num1, num2);

    // Perform addition and display result
    cout << "Addition result: " << calc.add() << endl;

    // Perform subtraction and display result
    cout << "Subtraction result: " << calc.subtract() << endl;

    // Perform multiplication and display result
    cout << "Multiplication result: " << calc.multiply() << endl;

    // Perform division and display result
    cout << "Division result: " << calc.divide() << endl;

    return 0;
}

