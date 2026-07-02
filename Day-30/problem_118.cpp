// Write a program to Create mini library system. 
#include <bits/stdc++.h>
using namespace std;
const int MAX_BOOKS = 50;
void showMenu();
void registerBook(string titles[], string authors[], int bookIds[], string statuses[], int &currentCount);
void displayInventory(const string titles[], const string authors[], const int bookIds[], const string statuses[], int currentCount);
void editDetails(const int bookIds[], string titles[], string authors[], string statuses[], int currentCount);

int main() 
{
    string titles[MAX_BOOKS];
    string authors[MAX_BOOKS];
    int bookIds[MAX_BOOKS];
    string statuses[MAX_BOOKS];
    int currentCount = 0;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerBook(titles, authors, bookIds, statuses, currentCount);
                break;
            case 2:
                displayInventory(titles, authors, bookIds, statuses, currentCount);
                break;
            case 3:
                editDetails(bookIds, titles, authors, statuses, currentCount);
                break;
            case 4:
                cout << endl << "Exiting Mini Library System. Goodbye!" << endl;
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
    cout << "        MINI LIBRARY SYSTEM        " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register New Book" << endl;
    cout << "2. Display Book Inventory" << endl;
    cout << "3. Edit Details / Issue Status" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerBook(string titles[], string authors[], int bookIds[], string statuses[], int &currentCount) 
{
    if (currentCount >= MAX_BOOKS) 
    {
        cout << endl << "Library capacity full! Cannot add more books." << endl;
        return;
    }
    cout << endl << "--- ENTER BOOK DETAILS ---" << endl;
    cout << "Enter Book ID (Integer): ";
    cin >> bookIds[currentCount];
    cout << "Enter Book Title (use single-word or underscore): ";
    cin >> titles[currentCount];
    cout << "Enter Author Name (use single-word or underscore): ";
    cin >> authors[currentCount];
    cout << "Enter Status (e.g., Available/Issued): ";
    cin >> statuses[currentCount];
    currentCount++;
    cout << endl << "Book recorded in the inventory successfully!" << endl;
}

void displayInventory(const string titles[], const string authors[], const int bookIds[], const string statuses[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "The library inventory is currently empty!" << endl;
        return;
    }
    for (int i = 0; i < currentCount; i++) 
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

void editDetails(const int bookIds[], string titles[], string authors[], string statuses[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "No books available to modify!" << endl;
        return;
    }
    int searchId;
    cout << endl << "Enter Book ID to search and update metadata: ";
    cin >> searchId;
    for (int i = 0; i < currentCount; i++) 
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