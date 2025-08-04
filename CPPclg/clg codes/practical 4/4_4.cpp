#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ---------------------- Base Class ----------------------
class BankAccount {
protected:
    string accountNumber;
    double balance;
    vector<string> transactionHistory;

public:
    BankAccount(string accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
        cout << "BankAccount constructor called\n";
    }

    virtual ~BankAccount() {
        cout << "BankAccount destructor called\n";
    }

    virtual void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back("Deposited: ₹" + to_string(amount));
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactionHistory.push_back("Withdrew: ₹" + to_string(amount));
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    virtual void display() {
        cout << "Account Number: " << accountNumber << "\nBalance: ₹" << balance << endl;
    }

    void showHistory() {
        cout << "\nTransaction History:\n";
        for (string &t : transactionHistory) {
            cout << "- " << t << endl;
        }
    }

    void undoLastTransaction() {
        if (!transactionHistory.empty()) {
            cout << "Undoing: " << transactionHistory.back() << endl;
            transactionHistory.pop_back(); // Remove it from history
            // For simplicity, this demo just removes from history without reversing the effect.
            // Full undo would require detailed parsing of each operation.
        } else {
            cout << "No transactions to undo.\n";
        }
    }
};

// ---------------------- Derived Class 1 ----------------------
class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(string accNo, double bal, double rate)
        : BankAccount(accNo, bal), interestRate(rate) {
        cout << "SavingsAccount constructor called\n";
    }

    ~SavingsAccount() {
        cout << "SavingsAccount destructor called\n";
    }

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        transactionHistory.push_back("Interest Added: ₹" + to_string(interest));
    }

    void display() override {
        BankAccount::display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// ---------------------- Derived Class 2 ----------------------
class CurrentAccount : public BankAccount {
    double overdraftLimit;

public:
    CurrentAccount(string accNo, double bal, double overdraft)
        : BankAccount(accNo, bal), overdraftLimit(overdraft) {
        cout << "CurrentAccount constructor called\n";
    }

    ~CurrentAccount() {
        cout << "CurrentAccount destructor called\n";
    }

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            transactionHistory.push_back("Withdrew (OD Allowed): ₹" + to_string(amount));
        } else {
            cout << "Exceeded overdraft limit.\n";
        }
    }

    void display() override {
        BankAccount::display();
        cout << "Overdraft Limit: ₹" << overdraftLimit << endl;
    }
};

// ---------------------- Main Function ----------------------

int main() {
    cout << "--- Savings Account ---\n";
    SavingsAccount sa("S123", 10000, 5.0);
    sa.deposit(2000);
    sa.withdraw(1500);
    sa.applyInterest();
    sa.display();
    sa.showHistory();
    sa.undoLastTransaction();
    sa.showHistory();

    cout << "\n--- Current Account ---\n";
    CurrentAccount ca("C456", 5000, 2000);
    ca.deposit(1000);
    ca.withdraw(6500);  // within overdraft
    ca.withdraw(1000);  // exceeds overdraft
    ca.display();
    ca.showHistory();

    return 0;
}
