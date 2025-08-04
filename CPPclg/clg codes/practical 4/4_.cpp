#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class Circle{
protected:
double *radius;
int count =0;


int size;

public:
Circle(int s){
size = s;
radius = new double[size];
}

void DetailsCircle()
{
    cout<<"Enter the number of circle to find their area: ";
    cin>>count;
    for(int i=0;i<count;i++){
        cout<<"Enter the radius of circle "<<i+1<<": ";
        cin>>radius[i];
    }
}
int getcount()
{
    return count;
}
int getradius(int i)
{
return radius[i];
}
~Circle()
{
    delete[]radius;
}

};

class area : public Circle{

public:
area(int s) : Circle(s){};

void display()
{
    for(int i=0;i<count;i++)
    {
        double r = getradius(i);
        cout<<"Area of cicrle "<<i+1<<" is: "<<3.14*r*r<<"\n";
    }
}

};

int main()
{
   int size;
   cout<<"Enter the number of circle you want to manage: ";
   cin>>size;

   area obj(size);
   obj.DetailsCircle();
   obj.display();

    return 0;


}