/*
Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize side lengths
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to determine if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to determine if the triangle is scalene
    bool isScalene() {
        return (!isEquilateral() && !isIsosceles());
    }
};

int main() {
    double side1, side2, side3;

    // Input lengths of sides of triangle
    cout << "Enter length of side 1: ";
    cin >> side1;
    cout << "Enter length of side 2: ";
    cin >> side2;
    cout << "Enter length of side 3: ";
    cin >> side3;

    // Create a Triangle object with the input side lengths
    Triangle triangle(side1, side2, side3);

    // Determine and display the type of triangle
    if (triangle.isEquilateral()) {
        cout << "Triangle is equilateral." << endl;
    } else if (triangle.isIsosceles()) {
        cout << "Triangle is isosceles." << endl;
    } else if (triangle.isScalene()) {
        cout << "Triangle is scalene." << endl;
    }

    return 0;
}


