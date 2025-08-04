#include <iostream>
using namespace std;

class Complex
{
    double Real;
    double Imaginary;
    static int pointer;

public:
    Complex()
    {
       Real = 0;
       Imaginary = 0; 
    }

    void setDetails()
    {
        cout << "Enter the real part of the number " << pointer << " :";
        cin >> Real;
        
        cout << "Enter the imaginary part of the number " << pointer << " :";
        cin >> Imaginary;
        
        pointer++;
    }

    Complex operator+(Complex &A)
    {
        Complex temp;
        temp.Real = Real + A.Real;
        temp.Imaginary = Imaginary + A.Imaginary;
        return temp;
    }

    Complex operator-(Complex &A)
    {
        Complex temp;
        temp.Real = Real - A.Real;
        temp.Imaginary = Imaginary - A.Imaginary;
        return temp;
    }

    void Display()
    {
        cout << "Answer : " << Real << " + (" << Imaginary << ")i" << endl;
    }
};

int Complex::pointer = 1;

int main()
{
    Complex Number1;
    Complex Number2;

    Number1.setDetails();
    Number2.setDetails();
    
    int choice;
    cout << "Enter 1 to add and 2 to subtract (a-b) : ";
    cin >> choice;

    Complex Result;
    if (choice == 1)
    {
        Result = Number1 + Number2;
    }
    else 
    {
        Result = Number1 - Number2;
    }
    Result.Display();
    return 0;
}