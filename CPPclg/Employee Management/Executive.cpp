#include "Executive.h"
#include<iostream>
#include<string>

using namespace std;

Executive::Executive() : bonus(0.0), stockOptions(0) {}

void Executive::inputDetails() {
    Manager::inputDetails(); 
    cout << "Enter Bonus Amount: ";
    cin >> bonus;
    cout << "Enter Stock Options: ";
    cin >> stockOptions;
}

void Executive::displayDetails() {
    Manager::displayDetails();
    cout << "Bonus: $" << bonus << "\n";
    cout << "Stock Options: " << stockOptions << "\n";
}
