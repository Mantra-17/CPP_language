#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);  // Read full line

    int maxlength = 0;
    int currentLength = 0;

    for (int i = 0; i <= line.length(); i++) {
        if (i < line.length() && line[i] != ' ') {
            currentLength++;
        } else {
            // End of a word (space or end of line)
            if (currentLength > maxlength) {
                maxlength = currentLength;
            }
            currentLength = 0; // Reset for next word
        }
    }

    cout << "Length of longest word: " << maxlength << endl;
    return 0;
}
