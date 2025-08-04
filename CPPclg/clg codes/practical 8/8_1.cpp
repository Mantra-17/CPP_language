#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 60, 30, 20, 50};
    numbers.push_back(52);


    cout << "Elements in vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    reverse(numbers.begin(), numbers.end());
    cout << "\nElements in reverse order: ";
    for(int num : numbers)
    {
        cout<<num<<" ";
    }
    sort(numbers.begin(), numbers.end());
    cout << "\nElements in sorted order: ";
    for(int num : numbers)
    {
        cout<<num<<" ";
    }
    cout << endl;

    cout << "Patel Mantra\n24DCS076" << endl;

    return 0;
}
