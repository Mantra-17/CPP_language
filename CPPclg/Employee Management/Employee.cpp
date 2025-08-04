#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;



Employee::Employee() : EmployeeID(0), basicsalary(0.0) {}

void Employee::inputDetails() {
    cout << "Enter Employee ID: ";
    cin >> EmployeeID;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> basicsalary;
}

void Employee::displayDetails() {
    cout << "Employee ID: " << EmployeeID << "\n";
    cout << "Name: " << name << "\n";
    cout << "Basic Salary: $" << basicsalary << "\n";
}
