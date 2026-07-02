// Write a program to Develop complete mini project using arrays, strings and functions. 
// Building a notes app us c++
#include <bits/stdc++.h>
using namespace std;
const int MAX_NOTES = 50;
void showMenu();
void createNote(string titles[], string categories[], string contents[], int &currentCount);
void displayNotes(const string titles[], const string categories[], const string contents[], int currentCount);
void editNote(const string titles[], string categories[], string contents[], int currentCount);

int main() 
{
    string titles[MAX_NOTES];
    string categories[MAX_NOTES];
    string contents[MAX_NOTES];
    int currentCount = 0;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                createNote(titles, categories, contents, currentCount);
                break;
            case 2:
                displayNotes(titles, categories, contents, currentCount);
                break;
            case 3:
                editNote(titles, categories, contents, currentCount);
                break;
            case 4:
                cout << endl << "Exiting Notes Application. Goodbye!" << endl;
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
    cout << "         DIGITAL NOTES APP         " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Create New Note" << endl;
    cout << "2. Display Saved Notes" << endl;
    cout << "3. Edit Existing Note" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void createNote(string titles[], string categories[], string contents[], int &currentCount) 
{
    if (currentCount >= MAX_NOTES) 
    {
        cout << endl << "Storage full! Cannot add more notes." << endl;
        return;
    }
    cout << endl << "--- CREATE NEW NOTE ---" << endl;
    cout << "Enter Note Title (single-word or underscore): ";
    cin >> titles[currentCount];
    cout << "Enter Category (e.g., Study/Work/Personal): ";
    cin >> categories[currentCount];
    cout << "Enter Note Content (single-word or underscore): ";
    cin >> contents[currentCount];
    currentCount++;
    cout << endl << "Note successfully saved to your scratchpad!" << endl;
}

void displayNotes(const string titles[], const string categories[], const string contents[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "Your notes application repository is empty!" << endl;
        return;
    }
    for (int i = 0; i < currentCount; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "                 NOTE #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Title:     " << titles[i] << endl;
        cout << "Category:  " << categories[i] << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Content:   " << contents[i] << endl;
        cout << "=========================================" << endl;
    }
}

void editNote(const string titles[], string categories[], string contents[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "No saved logs discovered to modify!" << endl;
        return;
    }
    string searchTitle;
    cout << endl << "Enter the exact title of the note to modify: ";
    cin >> searchTitle;
    for (int i = 0; i < currentCount; i++) 
    {
        if (titles[i] == searchTitle) 
        {
            cout << endl << "--- NOTE ENTRY RETRIEVED SUCCESSFULLY ---" << endl;
            cout << "Update Category Label: ";
            cin >> categories[i];
            cout << "Update Note Content: ";
            cin >> contents[i];
            cout << endl << "Note file modified and updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No matching document with title '" << searchTitle << "' was found." << endl;
}