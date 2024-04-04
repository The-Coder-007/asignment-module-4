/*
Write a C++ Program to find Area of Rectangle using inheritance
*/

#include <iostream>
using namespace std;

// Base class: Shape
class Shape {
protected:
    int width;
    int height;
public:
    // Function to set dimensions
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
};

// Derived class: Rectangle (inherits from Shape)
class Rectangle : public Shape {
public:
    // Function to calculate area of rectangle
    int calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    int w, h;

    cout << "Enter width of rectangle: ";
    cin >> w;
    cout << "Enter height of rectangle: ";
    cin >> h;

    rect.setDimensions(w, h); // Set dimensions for rectangle
    int area = rect.calculateArea(); // Calculate area of rectangle

    cout << "Area of rectangle: " << area << endl;

    return 0;
}

