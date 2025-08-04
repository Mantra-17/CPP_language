#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle  
{
private:
    int noOfDoors;

public:
    Car(int capacity, float fuel, int speed, int doors);  
    void showCarInfo();    
};

#endif
