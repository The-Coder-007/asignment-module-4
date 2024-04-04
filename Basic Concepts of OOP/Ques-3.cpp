/*
Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double calculateArea() {
        return 3.14 * radius * radius;
    }

    // Function to calculate circumference
    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    // Create a Circle object with radius 5
    Circle circle(5);

    // Calculate and display area
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    // Calculate and display circumference
    cout << "Circumference of the circle: " << circle.calculateCircumference() << endl;

    return 0;
}

