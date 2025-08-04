#include <iostream>
#include <limits>
using namespace std;
int main() {
    int numerator, denominator;

    std::cout << "Enter numerator and denominator (integers): ";

    // Validate integer input using cin
    if (!(std::cin >> numerator >> denominator)) {
        std::cerr << "Invalid input! Please enter integers only.\n";
        return 1;
    }

    // Check division by zero
    if (denominator == 0) {
        std::cerr << "Error: Division by zero is not allowed.\n";
               return 1;
    }

    // Perform division directly
    std::cout << "Result: " << static_cast<double>(numerator) / denominator << std::endl;
    cout<<"Patel Mantra\n24DCS076";
    
    return 0;
}
