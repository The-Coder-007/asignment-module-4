/*
Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.

*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create a Rectangle object with length 5 and width 3
    Rectangle rectangle(5, 3);

    // Calculate and display area
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    // Calculate and display perimeter
    cout << "Perimeter of the rectangle: " << rectangle.calculatePerimeter() << endl;

    return 0;
}

