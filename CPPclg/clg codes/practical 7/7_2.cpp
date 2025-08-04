#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>

struct LineNode {
    char* line;
    LineNode* next;
};

void freeMemory(LineNode* head) {
    while (head) {
        LineNode* temp = head;
        head = head->next;
        delete[] temp->line;
        delete temp;
    }
}

int main() {
    using namespace std;

    const char* filename = "input.txt";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    LineNode* head = nullptr;
    LineNode* tail = nullptr;

    size_t totalCharacters = 0, totalWords = 0, totalLines = 0;
    string line;

    while (getline(file, line)) {
        LineNode* newNode = new LineNode;
        newNode->line = new char[line.size() + 1];
        strcpy(newNode->line, line.c_str());
        newNode->next = nullptr;

        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        totalLines++;
        totalCharacters += line.size();

        istringstream stream(line);
        string word;
        while (stream >> word) {
            totalWords++;
        }
    }

    file.close();

    cout << "Total Characters: " << totalCharacters << endl;
    cout << "Total Words: " << totalWords << endl;
    cout << "Total Lines: " << totalLines << endl;
cout<<"Patel Mantra \n24DCS076";
    freeMemory(head);
    return 0;
}

