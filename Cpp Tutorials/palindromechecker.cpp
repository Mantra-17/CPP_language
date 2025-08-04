#include <iostream>
#include <algorithm>  // for reverse()
using namespace std;

int main() {
    string str, rev;
    cout << "Enter a word: ";
    cin >> str;

    rev = str;               // Copy original
    reverse(rev.begin(), rev.end());  // Reverse it

    if (str == rev)
        cout << "It is a palindrome.\n";
    else
        cout << "It is not a palindrome.\n";

    return 0;
}
