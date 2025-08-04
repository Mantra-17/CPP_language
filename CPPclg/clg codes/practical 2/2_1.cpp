#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Rectangle
{
private:
    float *length;
    float *width;
    int size;
    int rectanglecount = 0;
    string *randomID;//declared globally so badhi jagya upar acess mlase
public:
    Rectangle(int s)
    {
        size = s;
        length = new float[size];
        width = new float[size];
        randomID = new string[size];//allocated size to array
    }

    void setDetails()
    {

        srand(time(0));//to chekc the time it will print id iwht in zero sec
        int idLength = 4;
        
        cout << "Please let us know the number of rectangles :  ";
        cin >> rectanglecount;
        
        for (int i = 0; i < rectanglecount; i++)
        {
            randomID[i] = generateRandomID(4);
            cout << "Enter the details for rectangle "<<(i+1)<<":" << endl;
            cout << "Enter the length of rectangle :";
            cin >> length[i];
            cout << "Enter the width of rectangle :" ;
            cin >> width[i];
            cout << "ID to the rectangle is :" << randomID[i] << endl;
        }
    }

    string generateRandomID(int length)
    {
        string id = "";
        for (int i = 0; i < length; ++i)
        {
            id += to_string(rand() % 10);
        }
        return id;
    }
    void updateDimensions()
    {
        string id;
        cout << "Enter the ID of rectangle to update dimensions: ";
        cin >> id;

        for (int i = 0; i < rectanglecount; i++)
        {
            if (randomID[i] == id) 
            {
                cout << "Rectangle found! Enter new dimensions:" << endl;
                cout << "Enter the new length of rectangle: ";
                cin >> length[i];
                cout << "Enter the new width of rectangle: ";
                cin >> width[i];
                cout << "Dimensions updated for rectangle with ID: " << id << endl;
                return;  
            }
        }

        cout << "No rectangle found with the given ID." << endl;
    }
      
    void displayDetails()
    {
        system("CLS");
        for (int i = 0; i < rectanglecount; i++)
        {
            
            cout << "Rectangle " << (i + 1) << " ID: " << randomID[i] << endl;
            cout << "Length: " << length[i] << ", Width: " << width[i] << endl;
            cout << "Area: " << length[i] * width[i] << ", Perimeter: " << 2 * (length[i] + width[i]) << endl;
            cout << "------------------------------------" << endl;
        }
    }
};


int main()
{
    Rectangle rect(100);
    rect.setDetails();
    rect.updateDimensions();
    rect.displayDetails();
cout<<"Mantra patel/n24DCS076";
    return 0;
}