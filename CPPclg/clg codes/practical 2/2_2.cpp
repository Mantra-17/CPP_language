#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks[3];

public:
    Student() {
        name = "Mantra";
        rollNo = 0;
        marks[0] = 22.5;
        marks[1] = 25;
        marks[2] = 30;
    }

    void inputDetails() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }

    void displayDetails() {
        cout << "Name: " << name << " | Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << "| Average: " << calculateAverage() << endl;
    }
};

int main() {
    int studentCount;
    cout << "Enter the number of students: ";
    cin >> studentCount;

    Student students[100];
    for (int i = 0; i < studentCount; i++) {
        cout << "\nEntering details for student " << i + 1 << "\n";
        students[i].inputDetails();
    }

    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < studentCount; i++) {
        students[i].displayDetails();
    }
    
    cout<<"Patel Mantra \n 24DCS076";

    return 0;
}
