
#include <iostream>
#include <string>
using namespace std;

int superDigit(string n) {
    if (n.length() == 1)
        return n[0] - '0';

    long sum = 0;
    for (char c : n)
        sum += c - '0';

    return superDigit(to_string(sum));
}

int main() {
    string n;
    int k;
    cout << "Enter n and k (e.g., 148 3): ";
    cin >> n >> k;

    long sum = 0;
    for (char c : n)
        sum += (c - '0') * k;

    cout << "Super Digit: " << superDigit(to_string(sum)) << endl;
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}

