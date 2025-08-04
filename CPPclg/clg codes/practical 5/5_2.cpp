#include <iostream>
#include <math.h>

using namespace std;

class Complex {
private:
    double *real;
    double *imaginary;
    int size;
    int count;

public:
    
    Complex(int s) {
        size = s;
        real = new double[size];
        imaginary = new double[size];
        count = 0; 
    }

    
    ~Complex() {
        delete[] real;
        delete[] imaginary;
    }

    void inputDetails() {
        cout << "Enter total complex numbers (max " << size << "): ";
        cin >> count;

        if (count > size) {
            cout << "Error: Cannot store more than " << size << " complex numbers.\n";
            return;
        }

        double sumReal = 0.0, sumImaginary = 0.0;
        double diffReal = 0.0, diffImaginary = 0.0;

        for (int i = 0; i < count; i++) {
            cout << "Enter the Real part of complex number " << i + 1 << ": ";
            cin >> real[i];
            cout << "Enter the Imaginary part of complex number " << i + 1 << ": ";
            cin >> imaginary[i];
        }

        
        for (int i = 0; i < count; i++) {
            sumReal += real[i];
            sumImaginary += imaginary[i];
        }

        
        if (count > 0) {
            diffReal = real[0];
            diffImaginary = imaginary[0];
            for (int i = 1; i < count; i++) {
                diffReal -= real[i];
                diffImaginary -= imaginary[i];
            }
        }

        
        cout << "\nSum of real parts: " << sumReal << "\n";
        cout << "Sum of imaginary parts: " << sumImaginary << "\n";
        cout << "Difference of real parts: " << diffReal << "\n";
        cout << "Difference of imaginary parts: " << diffImaginary << "\n\n";
    }

    void display() {
        cout << "Complex Numbers:\n";
        for (int i = 0; i < count; i++) {
            cout << real[i] << " + " << imaginary[i] << "i\n";
        }
    }
};

int main() {
    Complex comp(100); 
    comp.inputDetails();
    comp.display();
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}
