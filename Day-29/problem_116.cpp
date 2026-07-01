// Write a program to Create inventory management system. 
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void addProduct(vector<int> &productIds, vector<string> &productNames, vector<int> &quantities, vector<double> &prices);
void displayInventory(const vector<int> &productIds, const vector<string> &productNames, const vector<int> &quantities, const vector<double> &prices);
void editDetails(const vector<int> &productIds, vector<string> &productNames, vector<int> &quantities, vector<double> &prices);

int main() 
{
    vector<int> productIds;
    vector<string> productNames;
    vector<int> quantities;
    vector<double> prices;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                addProduct(productIds, productNames, quantities, prices);
                break;
            case 2:
                displayInventory(productIds, productNames, quantities, prices);
                break;
            case 3:
                editDetails(productIds, productNames, quantities, prices);
                break;
            case 4:
                cout << endl << "Exiting Inventory Management System. Goodbye!" << endl;
                break;
            default:
                cout << endl << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 4);
    return 0;
}

void showMenu() 
{
    cout << endl << "-----------------------------------" << endl;
    cout << "     INVENTORY MANAGEMENT SYSTEM   " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Add New Product" << endl;
    cout << "2. Display Stock Inventory" << endl;
    cout << "3. Edit Details / Restock Item" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void addProduct(vector<int> &productIds, vector<string> &productNames, vector<int> &quantities, vector<double> &prices) 
{
    int tempId, tempQty;
    string tempName;
    double tempPrice;
    cout << endl << "--- ENTER PRODUCT METADATA ---" << endl;
    cout << "Create Product ID (Integer): ";
    cin >> tempId;
    cout << "Enter Product Name (single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Initial Stock Quantity: ";
    cin >> tempQty;
    cout << "Enter Unit Price: INR ";
    cin >> tempPrice;

    productIds.push_back(tempId);
    productNames.push_back(tempName);
    quantities.push_back(tempQty);
    prices.push_back(tempPrice);
    cout << endl << "Product batch successfully logged into stock metrics!" << endl;
}

void displayInventory(const vector<int> &productIds, const vector<string> &productNames, const vector<int> &quantities, const vector<double> &prices) 
{
    if (productIds.empty()) 
    {
        cout << endl << "The warehouse inventory matrix is currently empty!" << endl;
        return;
    }
    int totalProducts = productIds.size();
    double totalInventoryValue = 0;
    for (int i = 0; i < totalProducts; i++) 
    {
        double itemTotalValue = quantities[i] * prices[i];
        totalInventoryValue += itemTotalValue;
        cout << endl << "=========================================" << endl;
        cout << "               STOCK ITEM #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Product ID:    " << productIds[i] << endl;
        cout << "Item Name:     " << productNames[i] << endl;
        cout << "Unit Cost:     " << "INR " << prices[i] << endl;
        cout << "Current Stock: " << quantities[i] << " units" << endl;
        cout << fixed << setprecision(2);
        cout << "Holding Value: " << "INR " << itemTotalValue << endl;
        cout << "-----------------------------------------";
    }
    cout << endl << endl << ">>> TOTAL ASSET VALUE IN WAREHOUSE: INR " << totalInventoryValue << " <<<" << endl;
}

void editDetails(const vector<int> &productIds, vector<string> &productNames, vector<int> &quantities, vector<double> &prices) 
{
    if (productIds.empty()) 
    {
        cout << endl << "No entries available inside the system matrix to modify!" << endl;
        return;
    }
    int searchId;
    cout << endl << "Enter Product ID to query and modify parameters: ";
    cin >> searchId;
    int totalProducts = productIds.size();
    for (int i = 0; i < totalProducts; i++) 
    {
        if (productIds[i] == searchId) 
        {
            cout << endl << "--- SKU DATABASE VERIFICATION SUCCESS ---" << endl;
            cout << "Update Product Name: ";
            cin >> productNames[i];
            cout << "Update Unit Price: INR ";
            cin >> prices[i];
            cout << "Update Physical Stock Quantity: ";
            cin >> quantities[i];
            cout << endl << "Stock sheet matrix successfully overwritten and saved!" << endl;
            return;
        }
    }
    cout << endl << "Product reference sequence " << searchId << " was not located inside the schema." << endl;
}