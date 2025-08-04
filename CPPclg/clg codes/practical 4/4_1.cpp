#include<iostream>
#include<math.h>


using namespace std;

class Shape
{
public:
float radius;
void input()
{
    cout<<"Enter the radius of circle: ";
    cin>>radius;
}
};

class Area : public Shape
{
public:
float area;
const float PI = 3.14f;
void calculateArea(){
cout<<"The area of circle is: "<<PI*radius*radius<<endl;
}
};

int main()
{
   
    int n;
    cout<<"Enter the number of circle to find their area: ";
    cin>>n;
    Area *a1 = new Area[n];
    for(int i=0;i<n;i++){
        cout<<"Area of circle: "<<i+1<<endl;
        a1[i].input();
        a1[i].calculateArea();
    }
    delete[] a1;
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}