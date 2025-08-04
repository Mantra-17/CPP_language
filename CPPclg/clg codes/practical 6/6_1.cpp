#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;
    int capacity;

    void resize() {
        capacity = (capacity == 0) ? 1 : capacity * 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    DynamicArray() : data(nullptr), size(0), capacity(0) {}

    ~DynamicArray() {
        delete[] data;
    }

    void add(int value) {
        if (size == capacity) {
            resize();
        }
        data[size++] = value;
    }

    void deleteAt(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index.\n";
            return;
        }
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }

    void print() const {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray arr;
    int choice, value, index;

    while (true) {
        cout << "\nMenu:\n1. Add Element\n2. Delete Element by Index\n3. Print Array\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to add: ";
            cin >> value;
            arr.add(value);
            break;
        case 2:
            cout << "Enter index to delete (0-based): ";
            cin >> index;
            arr.deleteAt(index);
            break;
        case 3:
            arr.print();
            break;
        case 4:
        cout<<"Patel Mantra\n24DCS076";
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

