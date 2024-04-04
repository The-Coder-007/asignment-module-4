/*
Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " successfully." << endl;
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully." << endl;
        } else {
            cout << "Error: Insufficient balance." << endl;
        }
    }

    // Function to display account information
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object with account number 12345 and initial balance $1000
    BankAccount account(12345, 1000);

    // Deposit $500 into the account
    account.deposit(500);

    // Withdraw $200 from the account
    account.withdraw(200);

    // Display account information
    account.display();

    return 0;
}

