#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

void addProduct(const string& filename) {
    ofstream file(filename, ios::app);
    if (!file) return;

    Product p;
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Enter quantity: ";
    cin >> p.quantity;
    cout << "Enter price: ";
    cin >> p.price;

    file << p.name << " " << p.quantity << " " << p.price << endl;
    file.close();
}

void viewInventory(const string& filename) {
    ifstream file(filename);
    if (!file) return;

    Product p;
    while (file >> p.name >> p.quantity >> p.price) {
        cout << "Name: " << p.name << ", Quantity: " << p.quantity << ", Price: " << p.price << endl;
    }
    file.close();
}

void searchProduct(const string& filename, const string& productName) {
    ifstream file(filename);
    if (!file) return;

    Product p;
    bool found = false;
    while (file >> p.name >> p.quantity >> p.price) {
        if (p.name == productName) {
            cout << "Name: " << p.name << ", Quantity: " << p.quantity << ", Price: " << p.price << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Product not found." << endl;
    file.close();
}

int main() {
    string filename = "inventory.txt";
    int choice;
    do {
        cout << "1. Add Product\n2. View Inventory\n3. Search Product\n4. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) addProduct(filename);
        else if (choice == 2) viewInventory(filename);
        else if (choice == 3) {
            string productName;
            cin.ignore(); // Clear the input buffer
            cout << "Enter product name to search: ";
            getline(cin, productName);
            searchProduct(filename, productName);
        }
    } while (choice != 4);
  
    cout << "Patel Mantra\n24DCS076" << endl;
    return 0;
}

