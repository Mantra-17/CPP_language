#include<iostream>
#include<string>

using namespace std;

class Person
{

    private:
    string name;
    int age;
public:
Person()
{

}
Person(string n , int A){
    name = n;
    age = A;
}
    void InputDetails()
{
    cout<<"Enter the name of person: ";
    cin>>name;
    cout<<"Enter the age of "<<name<<": ";
    cin>>age;

}

void DisplayDetails()
{
    cout<<"Name: "<<name;
    cout<<"Age:"<<age;
}
};

class Employee : public Person
{
    private:
    int id;
    public:
    Employee()
    {
        
    }
 Employee(string name , int age, int ID) :Person(name , age){
    id = ID;
 }
 void InputID()
 {
    cout<<"Enter the ID of employee: ";
    cin>>id;
 }
 void DisplayEmployee()
 {
     cout<<"Employee ID: "<<id;
 }

};

class Manager : public Employee
{
private:
string Department;
public:
Manager()
{

}
Manager(string name, int age, int id,string Dept) : Employee(name,age,id)
{
Department = Dept;
}

void InputManager()
{
    cout<<"Enter the department for Manager : ";
    cin>>Department;
}
void DisplayManager()
{
    cout<<"Departmnent: "<<Department;
}

};

int main()
{
    Manager M1;
    M1.InputDetails();
    M1.DisplayDetails();
    M1.InputID();
    M1.DisplayEmployee();
    M1.InputManager();
    M1.DisplayManager();
    cout<<"Patel Mantra\n24DCS076";

    return 0;


}