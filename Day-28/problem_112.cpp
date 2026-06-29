// Write a program to Create contact management system. 
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void registerContact(vector<string> &names, vector<string> &phoneNumbers, vector<string> &emails, vector<string> &groups);
void displayContacts(const vector<string> &names, const vector<string> &phoneNumbers, const vector<string> &emails, const vector<string> &groups);
void editDetails(const vector<string> &names, vector<string> &phoneNumbers, vector<string> &emails, vector<string> &groups);

int main() 
{
    vector<string> names;
    vector<string> phoneNumbers;
    vector<string> emails;
    vector<string> groups;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerContact(names, phoneNumbers, emails, groups);
                break;
            case 2:
                displayContacts(names, phoneNumbers, emails, groups);
                break;
            case 3:
                editDetails(names, phoneNumbers, emails, groups);
                break;
            case 4:
                cout << endl << "Exiting Contact Management System. Goodbye!" << endl;
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
    cout << "     CONTACT MANAGEMENT SYSTEM     " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register New Contact" << endl;
    cout << "2. Display Saved Contacts" << endl;
    cout << "3. Edit Contact Details" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerContact(vector<string> &names, vector<string> &phoneNumbers, vector<string> &emails, vector<string> &groups) 
{
    string tempName, tempPhone, tempEmail, tempGroup;
    cout << endl << "--- NEW CONTACT REGISTRATION ---" << endl;
    cout << "Enter Contact Name (single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Phone Number: ";
    cin >> tempPhone;
    cout << "Enter Email Address: ";
    cin >> tempEmail;
    cout << "Enter Group/Relation (e.g., Family/Work/Friend): ";
    cin >> tempGroup;

    names.push_back(tempName);
    phoneNumbers.push_back(tempPhone);
    emails.push_back(tempEmail);
    groups.push_back(tempGroup);
    cout << endl << "Contact profile successfully saved to directory!" << endl;
}

void displayContacts(const vector<string> &names, const vector<string> &phoneNumbers, const vector<string> &emails, const vector<string> &groups) 
{
    if (names.empty()) 
    {
        cout << endl << "Your contact directory is currently empty!" << endl;
        return;
    }
    int totalContacts = names.size();
    for (int i = 0; i < totalContacts; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "               CONTACT #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Name:          " << names[i] << endl;
        cout << "Phone Number:  " << phoneNumbers[i] << endl;
        cout << "Email Address: " << emails[i] << endl;
        cout << "Group/Label:   " << groups[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const vector<string> &names, vector<string> &phoneNumbers, vector<string> &emails, vector<string> &groups) 
{
    if (names.empty()) 
    {
        cout << endl << "No contacts available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the exact name of the contact to modify: ";
    cin >> searchName;
    int totalContacts = names.size();
    for (int i = 0; i < totalContacts; i++) 
    {
        if (names[i] == searchName) 
        {
            cout << endl << "--- CONTACT DIRECTORY MATCH FOUND ---" << endl;
            cout << "Update Phone Number: ";
            cin >> phoneNumbers[i];
            cout << "Update Email Address: ";
            cin >> emails[i];
            cout << "Update Group/Label Status: ";
            cin >> groups[i];
            cout << endl << "Contact profile parameters updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No profile matching '" << searchName << "' was discovered in the directory." << endl;
}