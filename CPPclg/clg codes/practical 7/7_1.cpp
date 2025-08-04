#include <iostream>
#include <cstring>
#include <cctype>

struct Word {
    char* text;
    int count;
};

void toLowerCase(char* str) {
    for (int i = 0; str[i]; ++i) {
        str[i] = std::tolower(str[i]);
    }
}

bool isDelimiter(char c) {
    return std::isspace(c) || std::ispunct(c);
}

void addWord(Word*& words, int& size, int& capacity, const char* word) {
    for (int i = 0; i < size; ++i) {
        if (std::strcmp(words[i].text, word) == 0) {
            words[i].count++;
            return;
        }
    }

    if (size == capacity) {
        capacity *= 2;
        Word* newWords = new Word[capacity];
        for (int i = 0; i < size; ++i) {
            newWords[i] = words[i];
        }
        delete[] words;
        words = newWords;
    }

    words[size].text = new char[std::strlen(word) + 1];
    std::strcpy(words[size].text, word);
    words[size].count = 1;
    size++;
}

void freeMemory(Word* words, int size) {
    for (int i = 0; i < size; ++i) {
        delete[] words[i].text;
    }
    delete[] words;
}

int main() {
    using namespace std;

    char paragraph[1000];
    cout << "Enter a paragraph: ";
    cin.getline(paragraph, 1000);

    toLowerCase(paragraph);

    Word* words = new Word[10];
    int size = 0, capacity = 10;

    char* token = strtok(paragraph, " ");
    while (token) {
        char word[100];
        int j = 0;
        for (int i = 0; token[i]; ++i) {
            if (!isDelimiter(token[i])) {
                word[j++] = token[i];
            }
        }
        word[j] = '\0';

        if (j > 0) {
            addWord(words, size, capacity, word);
        }

        token = strtok(nullptr, " ");
    }

    for (int i = 0; i < size; ++i) {
        cout << words[i].text << ": " << words[i].count << '\n';
    }

    freeMemory(words, size);
    cout << "Patel Mantra \n24DCS076" << endl;
    return 0;
}

