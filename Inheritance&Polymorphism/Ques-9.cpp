/*
Write a Program of Two 1D Matrix Addition using Operator Overloading
*/

#include <iostream>
using namespace std;

// Class to represent a 1D matrix
class Matrix {
private:
    int size;     // Size of the matrix
    int *data;    // Array to store matrix elements
public:
    // Constructor to initialize the matrix with given size
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    // Destructor to release memory allocated for matrix
    ~Matrix() {
        delete[] data;
    }

    // Overloading the '+' operator to perform matrix addition
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            cout << "Error: Matrices must be of the same size for addition." << endl;
            return *this; // Returning the current matrix if sizes don't match
        }

        Matrix result(size); // Result matrix to store the addition

        // Perform element-wise addition
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result; // Return the result matrix
    }

    // Function to display the matrix
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Public member function to retrieve the data array
    int* getData() {
        return data;
    }
};

int main() {
    // Define two matrices
    Matrix matrix1(5);
    Matrix matrix2(5);

    // Initialize matrix elements
    int data1[] = {1, 2, 3, 4, 5};
    int data2[] = {6, 7, 8, 9, 10};
    for (int i = 0; i < 5; ++i) {
        matrix1.getData()[i] = data1[i];
        matrix2.getData()[i] = data2[i];
    }

    // Perform matrix addition using operator overloading
    Matrix sum = matrix1 + matrix2;

    // Display the original matrices and the result
    cout << "Matrix 1: ";
    for (int i = 0; i < 5; ++i) {
        cout << data1[i] << " ";
    }
    cout << endl;

    cout << "Matrix 2: ";
    for (int i = 0; i < 5; ++i) {
        cout << data2[i] << " ";
    }
    cout << endl;

    cout << "Sum: ";
    sum.display();

    return 0;
}

