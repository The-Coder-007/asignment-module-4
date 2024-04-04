/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include <iostream>
#include <string>
using namespace std;

// Base class: Cricketer
class Cricketer {
protected:
    string name;
    int age;
public:
    // Function to input data
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

// Derived class: Batsman (inherits from Cricketer)
class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;
public:
    // Function to input data for Batsman
    void inputBatsmanData() {
        inputData(); // Calling base class function to input common data
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns(); // Calculate average runs
    }

    // Function to calculate average runs
    void calculateAverageRuns() {
        averageRuns = totalRuns / 10.0; // Assuming 10 innings
    }

    // Function to display Batsman data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.displayData();
    return 0;
}

