// Write a program to Create menu-driven array operations system.
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
void displayArray(const int arr[], int size);
void insertElement(int arr[], int &size);
void deleteElement(int arr[], int &size);
void searchElement(const int arr[], int size);

int main() 
{
    int arr[MAX_SIZE];
    int size = 0;
    int choice;
    while (true) 
    {
        cout << endl << "--- Array Operations Menu ---" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Display Array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (choice == 5) 
        {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        switch (choice) 
        {
            case 1:
                insertElement(arr, size);
                break;
            case 2:
                deleteElement(arr, size);
                break;
            case 3:
                searchElement(arr, size);
                break;
            case 4:
                displayArray(arr, size);
                break;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5." << endl;
        }
    }
    return 0;
}

void displayArray(const int arr[], int size) 
{
    if (size == 0) 
    {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Current Array: [ ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void insertElement(int arr[], int &size) 
{
    if (size >= MAX_SIZE) 
    {
        cout << "Cannot insert more elements." << endl;
        return;
    }
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position (0 to " << size << "): ";
    cin >> position;
    if (position < 0 || position > size) 
    {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = size; i > position; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    cout << "Element inserted successfully!" << endl;
}

void deleteElement(int arr[], int &size) 
{
    if (size == 0) 
    {
        cout << "Nothing to delete." << endl;
        return;
    }
    int position;
    cout << "Enter the position to delete (0 to " << size - 1 << "): ";
    cin >> position;
    if (position < 0 || position >= size) 
    {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element deleted successfully!" << endl;
}

void searchElement(const int arr[], int size) 
{
    if (size == 0) 
    {
        cout << "Array is empty. Nothing to search." << endl;
        return;
    }
    int target;
    cout << "Enter the element to search for: ";
    cin >> target;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            cout << "Element found at index (position): " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}