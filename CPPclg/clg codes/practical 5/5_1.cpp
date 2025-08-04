#include <iostream>

using namespace std;

class Calculator
{

public:
    void add(int a, int b)
    {
        cout << "Sum is: " << a + b;
    }
    void add(double a, double b)
    {
        cout << "Sum is: " << a + b;
    }
    void add(int a, double b)
    {
        cout << "Sum is:" << a + b;
    }

    void add(double a, int b)
    {
        cout << "Sum is:" << a + b;
    }
};

int main()
{
    Calculator cal;
    int choice;
int a,b;
double  x,y;
    while (true)
    {
        cout << "Welcome to basic addition system:-\n1.press 1 if you want to add to integer numbers\n2.Press 2 if you want to add two float\n3. Press 3 if you want to add one int and one double number\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
          
            cout << "Enter two integers\n";
            cin >> a >> b;
            cal.add(a, b);
            break;
        case 2:
            
            cout << "Enter two decimals\n";
            cin >> x>> y;
            cal.add(x, y);
            break;
        case 3:
            int a;
            double x;
            
            cout << "Enter two number(one integer other decimal)\n";
            cin >> a, x;
            cal.add(a, y);
            break;
        default:
            cout << "Invalid choice!\n";
            continue;
        case 0:
        cout<<"Patel Mantra\n24DCS076";
            exit(0);
        }
    }
    return 0;
}