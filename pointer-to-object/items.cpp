#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    int code;
    float price;

public:
    // Function to set the details of an item
    void setData(const string &itemName, int itemCode, float itemPrice) {
        name = itemName;
        code = itemCode;
        price = itemPrice;
    }

    // Function to display the details of an item
    void displayData() const {
        cout << "Item Name: " << name << ", Item Code: " << code << ", Price: " << price << endl;
    }
};

int main() {
    int numItems;

    // Prompting the user for the number of items
    cout << "Enter the number of items: ";
    cin >> numItems;

    // Creating an array of pointers to Item objects
    Item *itemList = new Item[numItems];

    // Taking input for each item
    for (int i = 0; i < numItems; ++i) {
        string name;
        int code;
        float price;

        cout << "\nEnter details for item " << i + 1 << ": " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Code: ";
        cin >> code;
        cout << "Price: ";
        cin >> price;

        itemList[i].setData(name, code, price);
    }

    // Displaying the details of each item
    cout << "\nList of Items:" << endl;
    for (int i = 0; i < numItems; ++i) {
        cout << "Item " << i + 1 << ": ";
        itemList[i].displayData();
    }

    // Freeing the dynamically allocated memory
    delete[] itemList;

    return 0;
}
