#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;  

public:
    Motorcycle(int capacity, float fuel, int speed, bool sidecar);
    void displayMotorcycle();
};

#endif
