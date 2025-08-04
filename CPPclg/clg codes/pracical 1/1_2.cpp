#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string names[100];  
    int quantity[100];  
    float price[100];   
    int ID[100];        
    int productCount;   

public:
    Product() {
        productCount = 0;  
    }

    void setDetails() {
        cout << "Enter the number of products: ";
        cin >> productCount;

        if (productCount <= 0 || productCount > 100) {
            cout << "Invalid number of products. Please enter a value between 1 and 100.\n";
            return;
        }

        float total = 0;

        for (int i = 0; i < productCount; i++) {
            cout << "\nEnter details for product " << i + 1 << ":\n";
            cout << "Enter the name of the product: ";
            cin.ignore();  
            getline(cin, names[i]); 
            cout << "Enter the quantity of the product: ";
            cin >> quantity[i];
            cout << "Enter the price of the product: ";
            cin >> price[i];
            cout << "Enter the ID of the product: ";
            cin >> ID[i];

            total += quantity[i] * price[i];
        }

        cout << "\nThe total inventory value is Rs " << total << endl;
    }

    void addQuantity() {
        int productID, addQty;
        cout << "Enter the ID of the product to add quantity: ";
        cin >> productID;

        for (int i = 0; i < productCount; i++) {
            if (ID[i] == productID) {
                cout << "Enter the quantity to add for " << names[i] << ": ";
                cin >> addQty;
                quantity[i] += addQty;
                cout << "Quantity updated successfully.\n";

                return;
            }

        }


        cout << "Product with ID " << productID << " not found.\n";
    }

    void removeQuantity() {
        int productID, removeQty;
        cout << "Enter the ID of the product to remove quantity: ";
        cin >> productID;

        for (int i = 0; i < productCount; i++) {
            if (ID[i] == productID) {
                cout << "Enter the quantity to remove from " << names[i] << ": ";
                cin >> removeQty;
                if (removeQty > quantity[i]) {
                    cout << "Error: Cannot remove more than available quantity.\n";
                } else {
                    quantity[i] -= removeQty;
                    cout << "Quantity updated successfully.\n";
                }
                return;
            }
        }

        cout << "Product with ID " << productID << " not found.\n";
    }

    void displayDetails() {
      int total=0;
        if (productCount == 0) {
            cout << "\nNo products in inventory.\n";
            return;
        }

       cout<<"||"<<"Index No"<<"||"<<"Name"<<"||"<<"Quantity"<<"||"<<"Price"<<endl;
       cout<<"------------------------------------"<<endl;

        for (int i = 0; i < productCount; i++) {
            cout <<"|"<< ID[i] << "\t| " << names[i] << "\t| " << quantity[i] << "\t| " << price[i] <<"|"<< endl;
            total += quantity[i] * price[i];

        }
       cout<<"------------------------------------"<<endl;
        cout<<"Total Inventory Value: "<<total<<endl;
        
        
    }
};

int main() {
    Product p1;
    int choice;

    cout << "Welcome to My Inventory!\n";

    while (true) {
        cout << "\n1. Add Products\n";
        cout << "2. Add Quantity\n";
        cout << "3. Remove Quantity\n";
        cout << "4. Display Inventory\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                p1.setDetails();
                break;
            case 2:
                p1.addQuantity();
                break;
            case 3:
                p1.removeQuantity();
                break;
            case 4:
                p1.displayDetails();
                break;
            case 5:
                cout << "Exiting the program...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    cout<<"Patel Mantra \n 24DCS076";

    return 0;
}
