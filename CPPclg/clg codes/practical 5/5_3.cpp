#include<iostream>

#include<stack>
using namespace std;

class point{
private:
double x;
double y;
stack<point>history;
public:

point(double a, double b){
    x=a;
    y=b;
}
void setDetails()
{
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
}
point(){
x=0;
y=0;
}
point operator + (point &A){
    
    history.push(*this);
    return point(x+A.x,y+A.y);

}
point operator - (point &A){
    
    history.push(*this);
    return point(x-A.x,y-A.y);
}

point operator -()
{
    history.push(*this);
        return point (-x,-y);
}

bool operator == ( point &A) {
    return (x == A.x && y == A.y);
}
void modify() {
    history.push(*this);
    int newX;
    int newY;  
    x = newX; 
    y = newY;
    cout<<"Enter the value of X to be modified: ";
    cin>>x;
    cout<<"Enter the value of y to be modified: ";
    cin>>y;
  
    
}
void undo()
{
    if(!history.empty()){
        point laststate = history.top();
        history.pop();
        *this = laststate;
        cout<<"Undo successfull reverted to the last state\n";
        
    }
    
    else{
        cout<<"Nothing to undo\n";
    }
}
void display()
{
    cout<<"("<<x<<","<<y<<")"<<"\n";
    
}


};


int main()
{
    point p1;
    point p2;
    p1.setDetails();
    p2.setDetails();
    cout<<"original co-ordinates of point p1: ";
    p1.display();
    cout<<"Original co-ordinates of point P2: ";
    p2.display();
    point sum = p1+p2;
    cout<<"Addition is :";
    sum.display();
    point difference = p1-p2;
    cout<<"Difference is :";
    difference.display();
    point neg = -p1;
    cout<<"After Naegation:";
    neg.display();
    if(p1==p2)
    {
        cout<<"Both co-ordinates are equal\n";

    }
else{
    cout<<"Both co-ordinates are not equal\n";
}
p1.modify();
cout<<"After modification\n";
p1.display();
p1.undo();
cout<<"After undo: ";
p1.display();
cout<<"Patel Mantra\n24DCS076";
return 0;

}