#include <iostream>
#include <cmath>
#include <exception>
using namespace std;
// Custom exception class
class NegativeNumberException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Cannot calculate square root of a negative number!";
    }
};

int main() {
    double number;

    std::cout << "Enter a number to find its square root: ";
    std::cin >> number;

    try {
        if (number < 0) {
            throw NegativeNumberException();
        }

        double result = std::sqrt(number);
        std::cout << "Square root: " << result << std::endl;
    }
    catch (const NegativeNumberException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

  cout<<"Patel Mantra\n24DCS076";
    return 0;
}
