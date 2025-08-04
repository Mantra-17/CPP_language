#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int marks;
    char grade;
};

int main() {
    cout << "Patel Mantra\n24DCS076" << endl;

    ifstream file("students.txt");
    if (!file) {
        cerr << "File not found." << endl;
        return 1;
    }

    cout << left << setw(15) << "Name" << setw(10) << "Marks" << setw(10) << "Grade" << endl;
    cout << "\t" << endl;

    Student student;
    while (file >> student.name >> student.marks >> student.grade) {
        cout << left << setw(15) << student.name
             << setw(10) << student.marks
             << setw(10) << student.grade << endl;
    }

    file.close();
    return 0;
}
