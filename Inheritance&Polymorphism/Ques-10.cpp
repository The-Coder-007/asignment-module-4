/*
Write a program to concatenate the two strings using Operator Overloading
*/

#include <iostream>
#include <cstring>
using namespace std;

// Class to represent a string
class MyString {
private:
    char* str; // Pointer to store the string
public:
    // Constructor to initialize the string
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor to release memory allocated for the string
    ~MyString() {
        delete[] str;
    }

    // Overloading the '+' operator to concatenate strings
    MyString operator+(const MyString& other) {
        // Calculate the length of the concatenated string
        int len = strlen(str) + strlen(other.str) + 1;

        // Allocate memory for the concatenated string
        char* temp = new char[len];

        // Copy the first string to the temporary string
        strcpy(temp, str);

        // Concatenate the second string to the temporary string
        strcat(temp, other.str);

        // Create a new MyString object with the concatenated string
        MyString result(temp);

        // Free the memory allocated for the temporary string
        delete[] temp;

        return result;
    }

    // Function to display the string
    void display() {
        cout << str;
    }
};

int main() {
    // Define two strings
    MyString str1("Hello ");
    MyString str2("world!");

    // Concatenate the strings using operator overloading
    MyString result = str1 + str2;

    // Display the concatenated string
    cout << "Concatenated String: ";
    result.display();
    cout << endl;

    return 0;
}

