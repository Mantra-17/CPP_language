#include <iostream> 
#include <iomanip> 
using namespace std;

int main() {

const int numStudents = 3;
string names[numStudents] = {"Mantra", "Khush", "Jinay"}; 
int marks[numStudents] = {95, 30, 78};

cout << left << setw(10) << "Name" << setw(10) << "Marks" << endl;
cout << string(20, '-') << endl;

for (int i = 0; i < numStudents; ++i) {
    cout << left << setw(10) << names[i] << right << setw(10) << marks[i] << endl;
}

cout << "Patel Mantra\n24DCS076" << endl;

return 0;
}