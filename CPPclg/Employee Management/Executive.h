#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "Manager.h"
#include<iostream>

class Executive : public Manager {
private:
    float bonus;
    int stockOptions;

public:
    Executive(); 
    void inputDetails();
    void displayDetails();
};

#endif
