#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
#define MAX_TRANSACTIONS 100

class InsufficientFundsException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Withdrawal failed: Insufficient funds.";
    }
};

class BankAccount {
private:
    double balance;
    std::string transactions[MAX_TRANSACTIONS];
    int transactionCount;

    void log(const std::string& message) {
        if (transactionCount < MAX_TRANSACTIONS) {
            transactions[transactionCount++] = message;
        }
    }

public:
    BankAccount() : balance(0.0), transactionCount(0) {}

    void deposit(double amount) {
        std::cout << "Function: deposit called\n";
        balance += amount;
        log("Deposited: " + std::to_string(amount));
    }

    void withdraw(double amount) {
        std::cout << "Function: withdraw called\n";
        if (amount > balance) {
            log("Failed Withdrawal Attempt: " + std::to_string(amount));
            throw InsufficientFundsException();
        }
        balance -= amount;
        log("Withdrawn: " + std::to_string(amount));
    }

    void printTransactions() const {
        std::cout << "\nTransaction Log:\n";
        for (int i = 0; i < transactionCount; ++i) {
            std::cout << transactions[i] << "\n";
        }
    }

    double getBalance() const {
        return balance;
    }
};

// Function to demonstrate stack unwinding
void performTransaction(BankAccount& acc, double amount) {
    std::cout << "Function: performTransaction called\n";
    acc.withdraw(amount);
}

void simulate() {
    std::cout << "Function: simulate called\n";
    BankAccount acc;
    acc.deposit(1000);  // Deposit some money

    try {
        performTransaction(acc, 1500);  // Attempt to withdraw more than balance
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    std::cout << "Final Balance: " << acc.getBalance() << "\n";
    acc.printTransactions();
}

int main() {
    simulate();
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}
