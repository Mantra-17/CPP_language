#include "Car.h"  
#include "Motorcycle.h"  
#include "Tester.h"
#include <iostream>

using namespace std;

int main()
{
    Car mycar(1500, 16.25, 320, 4);  
    Motorcycle mybike(1000, 15.5, 200, true);

    Tester tester;
    
    cout << "Car details:\n";
    mycar.showCarInfo();  
    cout << "\n";

    cout << "Motorcycle details:\n";
    mybike.displayMotorcycle();
    cout << "\n";
    cout << "Testing efficiency\n";
    tester.accessVehicle(mycar);
    cout << "\n";
    tester.accessVehicle(mybike);
    cout << "\n";

    return 0;
}
