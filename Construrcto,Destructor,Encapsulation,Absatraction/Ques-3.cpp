/*
Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Setter function to set company
    void setCompany(string c) {
        company = c;
    }

    // Getter function to get company
    string getCompany() {
        return company;
    }

    // Setter function to set model
    void setModel(string m) {
        model = m;
    }

    // Getter function to get model
    string getModel() {
        return model;
    }

    // Setter function to set year
    void setYear(int y) {
        year = y;
    }

    // Getter function to get year
    int getYear() {
        return year;
    }
};

int main() {
    // Create a Car object
    Car car;

    // Set values using setter functions
    car.setCompany("Toyota");
    car.setModel("Corolla");
    car.setYear(2022);

    // Get values using getter functions and display
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}

