#include<iostream>
#include<queue>

using namespace std;

struct Patient{
    string name;
    int severity;

};

struct CompareSeverity{
    bool operator()(const Patient& a, const Patient& b){
        return a.severity<b.severity;//Max heap behaviour more severe person will be treated first
    }
};

int main()
{
    priority_queue<Patient, vector<Patient>, CompareSeverity>hospital;
    hospital.push({"Mantra", 4});
    hospital.push({"SOham", 1});
    hospital.push({"Man", 3});
    hospital.push({"Mantr", 5});
    hospital.push({"Mana", 2});
    cout<<"Patients would be treated according to the severness\n";
    while(!hospital.empty())
    {
        Patient p = hospital.top();
        cout<<"Treating: "<<p.name<<"(Severity: " <<p.severity<<")\n";
        hospital.pop();

    }
}