// PAYROLL SYSTEM

#include <iostream>
#include <string>

using namespace std;

class Payroll {
private:
    string name[100];
    double salary[100];
    double bonus[100];
    double cbonus[100] = {0};
    int n;

public:
    Payroll() {
        name[0] = "Unknown";
        salary[0] = 0.00;
        bonus[0] = 1000.00;
    }

    void setDetails() {
        cout << "Enter the number of employees: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Enter the name of employee " << (i + 1) << ": ";
            cin >> name[i];

            cout << "Enter the basic salary of employee: ";
            cin >> salary[i];

            cout << "Enter the custom bonus (default is 1000 if not specified): ";
            cin >> bonus[i];

            cbonus[i] = bonus[i] + 1000.00;  
        }

        cout << "Details added successfully!\n";
    }

    
    inline double CalculateSalary(int i) {
        return cbonus[i] + salary[i];
    }

    void DisplayDetails() {
        for (int i = 0; i < n; i++) {
            cout << "\nName of employee: " << name[i] << "\n";
            cout << "Basic salary of " << name[i] << " is: " << salary[i] << "\n";
            cout << "Bonus to " << name[i] << " is: " << cbonus[i] << "\n";
            cout << "Total salary of " << name[i] << " is: " << CalculateSalary(i) << "\n";  
        }
    }
};


int main() {
    Payroll p1;
    int choice;

    while (1) {
        cout << "\nWelcome to the Payroll system\n1. Add Employee\n2. View Details\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                p1.setDetails();
                break;
            case 2:
                p1.DisplayDetails();
                break;
            case 3:
            cout<<"Patel Mantra\n24DCS076";
                exit(0);
                break;
            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    }

    return 0;
}
