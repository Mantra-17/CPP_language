

#include <iostream> 
#include <string> 
using namespace std;

    class InventoryItem
{
private:
    int itemID;
    string itemName;
    double price;
    int quantity;

public:
    InventoryItem()
    {
        itemID = 0;
        itemName = "N/A";
        price = 0.0;
        quantity = 0;
    }

    InventoryItem(int id, string name, double p, int qty)
    {
        itemID = id;
        itemName = name;
        price = p;
        quantity = qty;
    }

    void addStock(int qty)
    {
        if (qty > 0)
        {
            quantity += qty;
            cout << qty << " units added to " << itemName << endl;
        }
    }

    void sellItem(int qty)
    {
        if (qty <= 0)
        {
            cout << "Invalid quantity for sale." << endl;
        }
        else if (qty > quantity)
        {
            cout << "Not enough stock of " << itemName << " to sell." << endl;
        }
        else
        {
            quantity -= qty;
            cout << qty << " units sold of " << itemName << endl;
        }
    }

    void displayItem()
    {
        cout << "Item ID: " << itemID
             << ", Name: " << itemName
             << ", Price: ₹" << price
             << ", Quantity: " << quantity << endl;
    }
};

int main()
{
    InventoryItem items[] = {InventoryItem(101, "Notebook", 45.0, 50),
                             InventoryItem(102, "Pen", 10.0, 100),
                             InventoryItem(103, "Eraser", 5.0, 75)};

    items[0].addStock(20);

    items[1].sellItem(30);
    items[2].sellItem(80);

    cout << "\nUpdated Inventory:\n";
    for (int i = 0; i < 3; ++i)
    {
        items[i].displayItem();
    }

    cout << "Patel Mantra\n24DCS076" << endl;
    return 0;
}
