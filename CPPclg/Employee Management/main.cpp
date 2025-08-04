#include "Employee.h"
#include "Manager.h"
#include "Executive.h"

int main() {
    Employee emp;
    Manager mgr;
    Executive exec;

    cout << "\nEnter details for Employee:\n";
    emp.inputDetails();

    cout << "\nEnter details for Manager:\n";
    mgr.inputDetails();

    cout << "\nEnter details for Executive:\n";
    exec.inputDetails();

    
    cout << "\n--- Employee Details ---\n";
    emp.displayDetails();

    cout << "\n--- Manager Details ---\n";
    mgr.displayDetails();

    cout << "\n--- Executive Details ---\n";
    exec.displayDetails();

    return 0;
}
