/*
Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/

#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    // Constructor to initialize address
    Address(string s, string c, string st, string z) {
        street = s;
        city = c;
        state = st;
        zipCode = z;
    }

    // Function to display address
    void displayAddress() {
        cout << "Address: " << street << ", " << city << ", " << state << " " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;
    Address address;

public:
    // Constructor to initialize student information and address
    Student(string n, string sClass, int roll, double m, Address addr) : address(addr) {
        name = n;
        studentClass = sClass;
        rollNumber = roll;
        marks = m;
    }

    // Function to calculate grade based on marks
    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Function to display student information
    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

// Bubble sort function to sort students based on roll numbers
void bubbleSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].calculateGrade() > arr[j + 1].calculateGrade()) {
                // Swap students
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
   // Create an Address object for each student
    Address address1("123 Ahemdabad", "Danilimda", "Gujrat", "280036");
    Address address2("456 Barrel Market", "Ahemdabad", "Gujrat", "360028");

    // Create Student objects with name, class, roll number, marks, and address
    Student student1("Mahboob Alam", "Class XI", 101, 85, address1);
    Student student2("Saleem Ansari", "Class XII", 102, 95, address2);

    // Create an array of Student objects
    Student students[] = {student1, student2};

    // Calculate the size of the array
    int size = sizeof(students) / sizeof(students[0]);

    // Sort students based on roll numbers using bubble sort
    bubbleSort(students, size);

    // Display sorted information for each student
    for (int i = 0; i < size; ++i) {
        cout << "Student Information:" << endl;
        students[i].displayStudentInfo();
        cout << endl;
    }

    return 0;
}

