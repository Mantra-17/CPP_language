#include "Motorcycle.h"  
#include <iostream>

using namespace std;

Motorcycle::Motorcycle(int capacity, float fuel, int speed, bool sidecar)
    : Vehicle(capacity, fuel, speed), hasSidecar(sidecar) {}  

void Motorcycle::displayMotorcycle()
{
    displayInfo();
    cout << "Does the motorcycle have a sidecar? " << (hasSidecar ? "Yes" : "No") << "\n";  
}
