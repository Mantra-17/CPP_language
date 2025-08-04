#include"Vehicle.h"

#include <iostream>

using namespace std;

Vehicle::Vehicle(int capacity, float fuel, int speed)
    : engineCapacity(capacity), fuelEfficiency(fuel), topSpeed(speed) {}

void Vehicle::displayInfo()
{
    cout << "Engine capacity of the car is: " << engineCapacity << " CC\n";
    cout << "Fuel Efficiency of the car is: " << fuelEfficiency << " Km/l\n";
    cout << "Top speed of the car is: " << topSpeed << " Km/h\n";
}