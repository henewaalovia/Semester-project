#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 100;

struct Product {
    string name;
    int quantity;
};

int main() {
    Product stock[MAX_PRODUCTS];
    int numProducts = 0;

    bool running = true;
    while (running) {
        cout << "1. Add product\n";
        cout << "2. Display stock\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            if (numProducts < MAX_PRODUCTS) {
                cout << "Enter product name: ";
                cin >> stock[numProducts].name;
                cout << "Enter product quantity: ";
                cin >> stock[numProducts].quantity;
                numProducts++;
                cout << "Product added successfully!\n";
            } else {
                cout << "Stock is full! Cannot add more products.\n";
            }
        } else if (choice == 2) {
            if (numProducts > 0) {
                cout << "Stock:\n";
                for (int i = 0; i < numProducts; i++) {
                    cout << "Name: " << stock[i].name << ", Quantity: " << stock[i].quantity << endl;
                }
            } else {
                cout << "Stock is empty!\n";
            }
        } else if (choice == 3) {
            running = false;
            cout << "Exiting stock management system...\n";
        } else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}

