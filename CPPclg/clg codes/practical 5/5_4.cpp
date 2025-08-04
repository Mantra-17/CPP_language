#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

class Fahrenheit;

class Celsius {
    float temp;
public:
    Celsius(float t = 0) : temp(t) {}

    float getTemp() const { return temp; }

    operator Fahrenheit(); // Conversion to Fahrenheit

    bool operator==(const Celsius& other) const {
        return temp == other.temp;
    }
};

class Fahrenheit {
    float temp;
public:
    Fahrenheit(float t = 0) : temp(t) {}

    float getTemp() const { return temp; }

    operator Celsius() {
        return Celsius((temp - 32) * 5.0 / 9.0);
    }

    bool operator==(const Fahrenheit& other) const {
        return temp == other.temp;
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9.0 / 5.0) + 32);
}

int main() {
    Celsius c1(25.0), c2(0);
    Fahrenheit f1 = c1;   // Convert Celsius to Fahrenheit
    c2 = f1;              // Convert Fahrenheit back to Celsius

    cout << fixed << setprecision(2);
    cout << "Celsius: " << c1.getTemp() << "°C -> Fahrenheit: " << f1.getTemp() << "°F" << endl;
    cout << "Fahrenheit: " << f1.getTemp() << "°F -> Celsius: " << c2.getTemp() << "°C" << endl;

    // Using queue to process conversions
    queue<Fahrenheit> tempQueue;
    tempQueue.push(Fahrenheit(98.6));
    tempQueue.push(Fahrenheit(32));
    tempQueue.push(Fahrenheit(212));

    cout << "Temperatures in queue (Fahrenheit): ";
    while (!tempQueue.empty()) {
        Fahrenheit f = tempQueue.front();
        tempQueue.pop();
        cout << f.getTemp() << " ";
    }
    cout << "°F" << endl;
cout<<"Patel Mantra\n24DCS076";
    return 0;
}
