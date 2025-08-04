#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of transaction IDs: ";
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; ++i) {
        int id;
        cout << "Enter transaction ID " << i + 1 << ": ";
        cin >> id;
        s.insert(id);  // duplicates automatically removed
    }

    cout << "\nSorted unique transaction IDs:\n";
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
