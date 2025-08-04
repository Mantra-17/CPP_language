#include "Tester.h"
#include<iostream>

using namespace std;

void Tester::accessVehicle(const Vehicle &v) {
    cout << "Engine Capacity: " << v.getEngineCapacity() << " CC" << endl;
    cout << "Fuel Efficiency: " << v.getFuelEfficiency() << " km/l" << endl;
    cout << "Top Speed: " << v.getTopSpeed() << " km/h" << endl;
}
