#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[10];
        std::cout << "Derived constructor called" << std::endl;
    }

    ~Derived() override {
        delete[] data;
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;

    cout << "Patel Mantra\n24DCS076" << endl;

    return 0;
}

