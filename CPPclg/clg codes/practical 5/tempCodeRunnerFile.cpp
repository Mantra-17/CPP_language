#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double Area() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double Area() const override {
        return length * width;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    double Area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Rectangle(4.0, 5.0);
    shapes[1] = new Circle(3.0);

    for (int i = 0; i < 2; ++i) {
        cout << "Area: " << shapes[i]->Area() << endl;
        delete shapes[i];
    }

    cout << "Patel Mantra/n24DCS076" << endl;

    return 0;
}
