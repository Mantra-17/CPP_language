
#include <iostream>
#include <string>
using namespace std;

#define MAX_STUDENTS 100

class Student
{
protected:
    string name;
    int roll_no;
    double marks;

public:
    virtual void inputDetails()
    {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    virtual void displayDetails()
    {
        cout << "Name: " << name << ", Roll No: " << roll_no << ", Marks: " << marks;
    }

    virtual string computeGrade() = 0;

    virtual ~Student() {}
};

class Undergraduate : public Student
{
public:
    void inputDetails() override
    {
        cout << "Undergraduate Student Details:\n";
        Student::inputDetails();
    }

    string computeGrade() override
    {
        if (marks >= 85)
            return "A";
        else if (marks >= 70)
            return "B";
        else if (marks >= 55)
            return "C";
        else if (marks >= 40)
            return "D";
        else
            return "F";
    }

    void displayDetails() override
    {
        Student::displayDetails();
        cout << ", Grade: " << computeGrade() << " (UG)\n";
    }
};

class Postgraduate : public Student
{
public:
    void inputDetails() override
    {
        cout << "Postgraduate Student Details:\n";
        Student::inputDetails();
    }

    string computeGrade() override
    {
        if (marks >= 90)
            return "A";
        else if (marks >= 75)
            return "B";
        else if (marks >= 60)
            return "C";
        else if (marks >= 50)
            return "D";
        else
            return "F";
    }

    void displayDetails() override
    {
        Student::displayDetails();
        cout << ", Grade: " << computeGrade() << " (PG)\n";
    }
};

int main()
{
    Student *students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (true)
    {
        cout << "\nChoose an option:\n";
        cout << "1. Add Undergraduate Student\n";
        cout << "2. Add Postgraduate Student\n";
        cout << "3. Display All Students\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < MAX_STUDENTS)
            {
                students[count] = new Undergraduate();
                students[count]->inputDetails();
                count++;
            }
            else
            {
                cout << "Student limit reached!\n";
            }
            break;
        case 2:
            if (count < MAX_STUDENTS)
            {
                students[count] = new Postgraduate();
                students[count]->inputDetails();
                count++;
            }
            else
            {
                cout << "Student limit reached!\n";
            }
            break;
        case 3:
            cout << "\nStudent Records:\n";
            for (int i = 0; i < count; i++)
            {
                students[i]->displayDetails();
            }
            break;
        case 4:
            for (int i = 0; i < count; i++)
            {
                delete students[i];
            }
            cout << "Exiting system. Goodbye!\n";
            cout<<"Patel Mantra\n24DCS076";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
