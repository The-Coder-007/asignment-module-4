/*
Write a program of to sort the array using templates
*/

#include <iostream>
using namespace std;

// Function to sort an array of integers using bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Test the bubbleSort function with an array of integers
    int numbers[] = {5, 2, 9, 1, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Original array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    bubbleSort(numbers, size);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}


