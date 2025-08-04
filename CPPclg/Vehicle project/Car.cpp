#include "Car.h"  
#include <iostream>

using namespace std;

Car::Car(int capacity, float fuel, int speed, int doors)
    : Vehicle(capacity, fuel, speed), noOfDoors(doors) {}  

void Car::showCarInfo()  
{
    displayInfo();
    cout << "Number of Doors: " << noOfDoors << "\n";
}
