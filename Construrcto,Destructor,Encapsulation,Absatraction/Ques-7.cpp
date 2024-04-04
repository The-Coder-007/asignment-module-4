/*
Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize day, month, and year
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to set day
    void setDay(int d) {
        day = d;
    }

    // Function to get day
    int getDay() {
        return day;
    }

    // Function to set month
    void setMonth(int m) {
        month = m;
    }

    // Function to get month
    int getMonth() {
        return month;
    }

    // Function to set year
    void setYear(int y) {
        year = y;
    }

    // Function to get year
    int getYear() {
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate() {
        if (year < 0)
            return false;
        if (month < 1 || month > 12)
            return false;
        if (day < 1)
            return false;
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        } else {
            return day <= 31;
        }
    }
};

int main() {
    // Create a Date object with day 30, month 2, and year 2023
    Date date(28, 2, 2023);

    // Validate if the date is valid and display the result
    if (date.isValidDate()) {
        cout << "Date is valid." << endl;
    } else {
        cout << "Date is not valid." << endl;
    }

    return 0;
}

