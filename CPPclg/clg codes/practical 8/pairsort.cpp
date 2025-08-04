#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

// Comparator function for sorting by name
bool sortByName(pair<string, int> a, pair<string, int> b) {
    return a.first < b.first;
}
bool sortBymakrs(pair<string,int > a , pair<string,int>b)
{
    return a.second<b.second;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    pair<string, int> students[100];

    for (int i = 0; i < n; i++) {
        cout << "Enter name and marks: ";
        cin >> students[i].first >> students[i].second;
    }


    // Sorting by name
    sort(students, students + n, sortByName);


 
    cout << "\nSorted by name:\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].first << " " << students[i].second << endl;
    }
sort(students,students+n,sortBymakrs);
cout<<"sorting by marks : \n";
for(int i=0;i<n;i++)
{
    cout<<students[i].first<<" "<<students[i].second<<endl;
}
    return 0;
}
