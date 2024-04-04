/*
. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize name, employee ID, and salary
    Employee(string n, int id, double initialSalary) {
        name = n;
        employeeID = id;
        salary = initialSalary;
    }

    // Function to calculate and set salary based on performance
    void setSalary(double performanceFactor) {
        salary *= performanceFactor;
    }

    // Function to display employee information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object with name "John Doe", employee ID 12345, and initial salary $5000
    Employee employee("Mahaboob Alam", 12345, 5000);

    // Set salary based on performance (e.g., increase by 10%)
    employee.setSalary(1.10);

    // Display employee information
    employee.display();

    return 0;
}

