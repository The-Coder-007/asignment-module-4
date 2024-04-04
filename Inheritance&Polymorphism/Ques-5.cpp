/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include <iostream>
using namespace std;

// Base class: Students
class Students {
protected:
    int rollNumber;
public:
    // Function to set roll number
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
    // Function to display roll number
    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class: Test (inherits from Students)
class Test : public Students {
protected:
    int subject1, subject2;
public:
    // Function to set test marks
    void setTestMarks(int marks1, int marks2) {
        subject1 = marks1;
        subject2 = marks2;
    }
    // Function to display test marks
    void displayTestMarks() {
        cout << "Subject 1 Marks: " << subject1 << endl;
        cout << "Subject 2 Marks: " << subject2 << endl;
    }
};

// Derived class: Result (inherits from Test)
class Result : public Test {
protected:
    int totalMarks;
public:
    // Function to calculate total marks
    void calculateTotalMarks() {
        totalMarks = subject1 + subject2;
    }
    // Function to display result
    void displayResult() {
        displayRollNumber(); // Call base class function to display roll number
        displayTestMarks(); // Call base class function to display test marks
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.setRollNumber(101);
    studentResult.setTestMarks(85, 90);
    studentResult.calculateTotalMarks();
    studentResult.displayResult();
    return 0;
}

