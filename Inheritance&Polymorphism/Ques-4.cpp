/*
Write a C++ Program display Student Mark sheet using Multiple inheritance
*/

#include <iostream>
#include <string>
using namespace std;

// Base class: StudentInfo
class StudentInfo {
protected:
    string name;
    int rollNumber;
public:
    // Function to initialize student information
    void initializeInfo(string n, int roll) {
        name = n;
        rollNumber = roll;
    }
    // Function to display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Base class: Marks
class Marks {
protected:
    int marks1, marks2, marks3;
public:
    // Function to initialize student marks
    void initializeMarks(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    // Function to display student marks
    void displayMarks() {
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
    }
};

// Derived class: MarkSheet (inherits from StudentInfo and Marks)
class MarkSheet : public StudentInfo, public Marks {
public:
    // Function to display complete mark sheet
    void displayMarkSheet() {
        cout << "Student Mark Sheet" << endl;
        cout << "-------------------" << endl;
        displayInfo(); // Call base class function to display student information
        displayMarks(); // Call base class function to display student marks
    }
};

int main() {
    MarkSheet student;
    student.initializeInfo("Mahaboob Alam", 101);
    student.initializeMarks(85, 90, 78);
    student.displayMarkSheet();
    return 0;
}

