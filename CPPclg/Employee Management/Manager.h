#ifndef MANAGER_H
#define MANAGER_H

#include"Employee.h"
#include<iostream>



class Manager : public Employee {
private:
    string department;
    int teamSize;

public:
    Manager(); // Constructor
    void inputDetails();
    void displayDetails();
};

#endif


