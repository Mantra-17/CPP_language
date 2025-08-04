#include<iostream>
#include<cmath>

using namespace std;


class coordinate{
    int x1,x2;
    int y1,y2;
    public:
    void   setdetails()
    {
        cout<<"Enter the value of x1 and x2 coordinates of line to measure distance :";
        cin>>x1>>x2;
        cout<<"Enter the value of y1 and y2 coordinates of line to measure distance :";
        cin>>y1>>y2;
        
    }

    void display()
    {
        int x_diff = x2-x1;
        int y_diff = y2-y1;
        int dist = sqrt(pow(x_diff,2)+pow(y_diff,2));
        cout<<"The distance between two points is :"<<dist<<endl;
    }
    
};

int main()
{
    coordinate c1;
    c1.setdetails();
    c1.display();
    

}