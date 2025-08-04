#include <iostream>
using namespace std;

class Addition
{
    int intValue;
    float floatValue;

public:
    Addition(int a = 0, float b = 0)
    {
        intValue = a;
        floatValue = b;
    }

    int Add(int a)
    {
        return intValue + a;
    }

    float Add(float a)
    {
        return floatValue + a;
    }

    float Add()
    {
        return intValue + floatValue;
    }
};

int main()
{
    float Number1 = 0, Number2 = 0;
    int Number3 = 0, Number4 = 0, choice;

    cout << "Choose 1 to add two float numbers and 2 to add two int numbers and 3 to add int and float values: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the first number you want to add: ";
        cin >> Number1;

        cout << "Enter the second number you want to add: ";
        cin >> Number2;

        Addition Value(Number3, Number1);

        cout << Value.Add(Number2) << endl;
    }
    else if(choice ==2)
    {
        cout << "Enter the first number you want to add: ";
        cin >> Number3;

        cout << "Enter the second number you want to add: ";
        cin >> Number4;

        Addition Value(Number3 , Number1);

        cout << Value.Add(Number4) << endl;
    }
    else
    {
        cout << "Enter the float number you want to add: ";
        cin >> Number1;

        cout << "Enter the int number you want to add: ";
        cin >> Number3;

        Addition Value(Number3 , Number1);

        cout << Value.Add() << endl;
    }

    return 0;
}