#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
    int accountNumber;

public:
    void setDetails() {
        cout << "Enter your name: ";
        cin.ignore(); 
        getline(cin, accountHolder); 

        cout << "Enter your account number: ";
        cin >> accountNumber;

        cout << "Enter your initial balance: ";
        cin >> balance;

        cout << "Account created successfully!\n";
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }

        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        }
    }
    
    

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    double amount;
    

    while (true) {
        cout << "\nWelcome to the Bank\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account Details\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Thank you for using the bank!\n";
                return 0;
            case 1:
                acc.setDetails();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 4:
                acc.display();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
cout<<"Patel Mantra \n 24DCS076";
    return 0;
}
