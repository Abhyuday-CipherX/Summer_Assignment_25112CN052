// Write a program to Create library management system. 
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void registerBook(vector<string> &titles, vector<string> &authors, vector<int> &bookIds, vector<string> &statuses);
void displayInventory(const vector<string> &titles, const vector<string> &authors, const vector<int> &bookIds, const vector<string> &statuses);
void editDetails(const vector<int> &bookIds, vector<string> &titles, vector<string> &authors, vector<string> &statuses);

int main() 
{
    vector<string> titles;
    vector<string> authors;
    vector<int> bookIds;
    vector<string> statuses;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerBook(titles, authors, bookIds, statuses);
                break;
            case 2:
                displayInventory(titles, authors, bookIds, statuses);
                break;
            case 3:
                editDetails(bookIds, titles, authors, statuses);
                break;
            case 4:
                cout << endl << "Exiting Library Management System. Goodbye!" << endl;
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
    cout << "     LIBRARY MANAGEMENT SYSTEM     " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register New Book" << endl;
    cout << "2. Display Book Inventory" << endl;
    cout << "3. Edit Details / Issue Status" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerBook(vector<string> &titles, vector<string> &authors, vector<int> &bookIds, vector<string> &statuses) 
{
    string tempTitle, tempAuthor, tempStatus;
    int tempId;
    cout << endl << "--- ENTER BOOK DETAILS ---" << endl;
    cout << "Enter Book ID (Integer): ";
    cin >> tempId;
    cout << "Enter Book Title (use single-word or underscore): ";
    cin >> tempTitle;
    cout << "Enter Author Name (use single-word or underscore): ";
    cin >> tempAuthor;
    cout << "Enter Status (e.g., Available/Issued): ";
    cin >> tempStatus;

    bookIds.push_back(tempId);
    titles.push_back(tempTitle);
    authors.push_back(tempAuthor);
    statuses.push_back(tempStatus);
    cout << endl << "Book recorded in the inventory successfully!" << endl;
}

void displayInventory(const vector<string> &titles, const vector<string> &authors, const vector<int> &bookIds, const vector<string> &statuses) 
{
    if (bookIds.empty()) 
    {
        cout << endl << "The library inventory is currently empty!" << endl;
        return;
    }
    int totalBooks = bookIds.size();
    for (int i = 0; i < totalBooks; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "               BOOK ENTRY #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Book ID:      " << bookIds[i] << endl;
        cout << "Title:        " << titles[i] << endl;
        cout << "Author:       " << authors[i] << endl;
        cout << "Availability: " << statuses[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const vector<int> &bookIds, vector<string> &titles, vector<string> &authors, vector<string> &statuses) 
{
    if (bookIds.empty()) 
    {
        cout << endl << "No books available to modify!" << endl;
        return;
    }
    int searchId;
    cout << endl << "Enter Book ID to search and update metadata: ";
    cin >> searchId;
    int totalBooks = bookIds.size();
    for (int i = 0; i < totalBooks; i++) 
    {
        if (bookIds[i] == searchId) 
        {
            cout << endl << "--- CATALOG MATCH FOUND ---" << endl;
            cout << "Update Book Title: ";
            cin >> titles[i];
            cout << "Update Author Name: ";
            cin >> authors[i];
            cout << "Update Availability Status: ";
            cin >> statuses[i];
            cout << endl << "Library ledger entry updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No record matching ID " << searchId << " was discovered." << endl;
}