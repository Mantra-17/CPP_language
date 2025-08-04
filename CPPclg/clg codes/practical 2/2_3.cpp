#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

class BankManagement {
private:
    string *name;
    int *accountno;
    float *balance;
    int *age;
    int size;
    int money = 0;

public:
    BankManagement(int s) {
        size = s;
        name = new string[size];
        accountno = new int[size];
        balance = new float[size];
        age = new int[size];
    }

    ~BankManagement() {
        delete[] name;
        delete[] accountno;
        delete[] balance;
        delete[] age;
    }

    void setDetails() {
        cout << "---------------------------\n";
        cout << "Welcome to SBIB bank !!\n";
        cout << "---------------------------\n";
        cout << "Please enter number of people to open an account: ";
        cin >> size;

        for (int i = 0; i < size; i++) {
            char choice;
            cout << "Enter the age of account Holder " << i + 1 << ": ";
            cin >> age[i];
            
            cout << "Enter the name of account holder: ";
            cin.ignore(); 
        getline(cin, name[i]); 
            cout << "Enter the account number of " << name[i] << ": ";
            cin >> accountno[i];

            if (age[i] >= 18 && age[i] <= 25) {
                cout << "The account holder is eligible for opening a zero balance account.\n";
                cout << "Do they want to open a zero balance account? [y/n]: ";
                cin >> choice;

                if (choice == 'n' || choice == 'N') {
                    cout << "500$ should be paid as it is not zero balance account Thankyou\nPay Here:$ ";
                    cin >> balance[i];
                    money += balance[i];
                } else {
                    balance[i] = 0;
                }
            } else {
                cout << "The account holder is not eligible for a zero balance account.\n";
                cout << "500$ should be paid as it is not zero balance account Thankyou\nPay Here:$ ";
                cin >> balance[i];
                money += balance[i];
            }
            cout << "Account created successfully!\n";
        }
        cout << "Details saved successfully! Thank you.\n";
    }


    void DepositMoney() {
        int id;
        float deposit;
        bool found = false;
        cout << "\nEnter your account number for depositing money: ";
        cin >> id;

        for (int i = 0; i < size; i++) {
            if (accountno[i] == id) {
                cout << "Welcome " << name[i] << "\n";
                cout << "Enter the amount to deposit: $";
                cin >> deposit;
                balance[i] += deposit;
                money += deposit;
                cout << "Total balance in your account: $" << balance[i] << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Error: Account number not found.\n";
        }
    }

    void WithDrawMoney() {
        int id;
        float withdraw;
        bool found = false;
        cout << "\nEnter your account number for withdrawing money: ";
        cin >> id;

        for (int i = 0; i < size; i++) {
            if (accountno[i] == id) {
                cout << "Welcome " << name[i] << "\n";
                cout << "Enter the amount to withdraw: $";
                cin >> withdraw;
                if (withdraw > balance[i]) {
                    cout << "Insufficient funds. Please try again.\n";
                    return;
                }
                balance[i] -= withdraw;
                money -= withdraw;
                cout << "Withdrawal successful! Remaining balance: $" << balance[i] << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Error: Account number not found.\n";
        }
    }

    void Display() {
        system("CLS");
        cout << "\nThere are total " << size << " account holders in SBIB bank.\n";
        for (int i = 0; i < size; i++) {
            cout << "---------------------------------------------------\n";
            cout << "| Name: " << name[i] << "\n| Age: " << age[i] << "\n| Account Number: " << accountno[i] 
                 << "\n| Current Balance: $" << balance[i] << "\n";
            cout << "---------------------------------------------------\n";
        }
    }
};

int main() {
    int choice;
    cout << "You are welcome to the new Era of Bank Management System\n";
    BankManagement bank(100);
    while(true){
    cout<<"You can operate the following functions\n1.Opening an account(For Bank use only)\n2.Withdraw money\n3.Deposit money\n4.Display Details(for Bank use)\n0.To exit\n";
    
    cout<<"Please enter your choice ";
    cin>>choice;

    switch(choice){

    case 1:
    bank.setDetails();
    break;
    case 2: 
    bank.WithDrawMoney();
    break;
    case 3:
    bank.DepositMoney();
    break;
    case 4:
    bank.Display();
    break;
    case 0:
    cout<<"Patel Mantra\n24DCS076";
    exit(0);
    
    default:
    cout<<"Invalid choice !! Please select valid choice\n";
    break;

    }
    
    }
    return 0;
}
