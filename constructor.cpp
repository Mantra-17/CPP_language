#include<iostream>

using namespace std;

class complex
{
int a,b;

public:
//creating a onstructor
//constructor is a special member function with the same name as of the class.
//It is used to initialize the object of its class
// It is automatically invoked whenever an object is created

complex(void);

void printNumber()
{
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}

};

complex ::complex(void) //This is a default constrructor as it takes no parameters
{

a=10;
b=20;

}

int  main()
{
    complex c1,c2,c3;
    c1.printNumber(); 
    c1.printNumber();
    c1.printNumber();

    return 0;
}

/*
properties of constructor -:
1.It should be declared in the public section of the class
2. They are automatically invoked whenever the onject is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/