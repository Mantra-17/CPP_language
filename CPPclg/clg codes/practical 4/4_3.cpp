
#include <iostream>
using namespace std;

class brand
{
protected:
    string name;

public:
    brand()
    {
        name = "Unknown";
    }

    brand(string n)
    {
        name = n;
    }

    void DetailsBrand()
    {
        cout << "Enter thr Brand name" << endl;
        cin >> name;
    }
    void DisplayBrand()
    {
        cout << "\nBrand name :" << name;
    }
};

class fuel
{

protected:
    string fueltype;

public:
    fuel()
    {
        fueltype = "Unknown";
    }

    fuel(string f)
    {
        fueltype = f;
    }

    void Detailsfueltype()
    {
        cout << "Enter the fuel type" << endl;
        cin >> fueltype;
    }
    void Displayfueltype()
    {
        cout << "\nfueltype :" << fueltype;
    }
};

class car : public brand, public fuel
{
protected:
    string carname;

public:
    car()
    {
        carname = "Unknown";
    }

    car(string c):brand(name),fuel(fueltype)
    {
        carname = c;
    }

    void Detailscarname()
    {
        cout << "Enter the car name" << endl;
        cin >> carname;
    }
    void Displaycarname()
    {
        cout << "\ncarname :" << carname;
    }

};

int
main()
{

    int n;
    cout << "Enter the number of car : ";
    cin >> n;

    car *c1  = new car[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for Car " << (i + 1) << ":" << endl;
        c1[i].DetailsBrand();
        c1[i].Detailsfueltype();
        c1[i].Detailscarname();
    }

    cout << "\n--- Car Details ---\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        c1[i].DisplayBrand();
        c1[i].Displayfueltype();
        c1[i].Displaycarname();
        cout<<"\n--------------------------------------------------------------";
    }

    cout<<"Patel Mantra\n24DCS076";

    return 0;
}
