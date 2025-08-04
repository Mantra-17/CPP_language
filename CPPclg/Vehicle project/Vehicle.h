#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

using namespace std;

class Tester; // Forward declaration

class Vehicle
{


protected:
int engineCapacity;
float fuelEfficiency;
int topSpeed;
Vehicle(int capacity, float fuel, int speed);
  
public:
    int getEngineCapacity() const { return engineCapacity; }
    float getFuelEfficiency() const { return fuelEfficiency; }
    int getTopSpeed() const { return topSpeed; }

    

public:
    void displayInfo();
    friend class Tester; // For accessing private members freind class is defined
};

#endif