#ifndef EMPLOYEE_H
#define  EMPLOYEE_H

#include<iostream>
#include<string>

using namespace std;

class Employee{
private://private attributes defined as asked 
int EmployeeID;
string name;
double basicsalary;


public:
    Employee(); // Constructor
    void inputDetails();
    void displayDetails();
};




#endif