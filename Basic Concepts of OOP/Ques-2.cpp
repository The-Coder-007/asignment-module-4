/*
Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize data members
    BankAccount(string name, int number, string type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount " << amount << " deposited successfully." << endl;
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount " << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("Mahaboob Alam", 123456789, "Savings", 1000.00);

    // Deposit some amount
    account.deposit(500.00);

    // Withdraw some amount
    account.withdraw(200.00);

    // Display account information
    account.display();

    return 0;
}
