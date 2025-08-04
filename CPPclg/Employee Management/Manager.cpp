#include "Manager.h"
#include<iostream>
#include<string>

using namespace std;
Manager::Manager() : teamSize(0) {}

void Manager::inputDetails() {
    Employee::inputDetails(); 
    cin.ignore();
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter Team Size: ";
    cin >> teamSize;
}

void Manager::displayDetails() {
    Employee::displayDetails();
    cout << "Department: " << department << "\n";
    cout << "Team Size: " << teamSize << "\n";
}
