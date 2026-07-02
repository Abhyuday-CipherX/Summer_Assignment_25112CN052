// Write a program to Create mini employee management system.
#include <bits/stdc++.h>
using namespace std;
const int MAX_EMPLOYEES = 50;
void showMenu();
void registerEmployee(string names[], string departments[], double salaries[], string ratings[], string complaints[], int &currentCount);
void displayRecords(const string names[], const string departments[], const double salaries[], const string ratings[], const string complaints[], int currentCount);
void editDetails(const string names[], double salaries[], string ratings[], string complaints[], int currentCount);

int main() 
{
    string names[MAX_EMPLOYEES];
    string departments[MAX_EMPLOYEES];
    double salaries[MAX_EMPLOYEES];
    string ratings[MAX_EMPLOYEES];
    string complaints[MAX_EMPLOYEES];
    int currentCount = 0;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerEmployee(names, departments, salaries, ratings, complaints, currentCount);
                break;
            case 2:
                displayRecords(names, departments, salaries, ratings, complaints, currentCount);
                break;
            case 3:
                editDetails(names, salaries, ratings, complaints, currentCount);
                break;
            case 4:
                cout << endl << "Exiting Employee Management System. Goodbye!" << endl;
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
    cout << "   MINI EMPLOYEE MANAGEMENT SYSTEM " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register Employee Details" << endl;
    cout << "2. Display Assembled Profiles" << endl;
    cout << "3. Edit Details & Complaints" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerEmployee(string names[], string departments[], double salaries[], string ratings[], string complaints[], int &currentCount) 
{
    if (currentCount >= MAX_EMPLOYEES) 
    {
        cout << endl << "Database capacity full! Cannot add more records." << endl;
        return;
    }
    cout << endl << "--- ENTER EMPLOYEE DETAILS ---" << endl;
    cout << "Enter Name (use single-word or underscore): ";
    cin >> names[currentCount];
    cout << "Enter Department: ";
    cin >> departments[currentCount];
    cout << "Enter Monthly Salary: INR ";
    cin >> salaries[currentCount];
    cout << "Enter Performance Rating (e.g., Excellent/Good): ";
    cin >> ratings[currentCount];
    cout << "Enter Grievances/Complaints (use single-word or 'None'): ";
    cin >> complaints[currentCount];
    currentCount++;
    cout << endl << "Employee profile assembled and recorded successfully!" << endl;
}

void displayRecords(const string names[], const string departments[], const double salaries[], const string ratings[], const string complaints[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "No employee records available in the system!" << endl;
        return;
    }
    for (int i = 0; i < currentCount; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "           EMPLOYEE PROFILE #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Name:               " << names[i] << endl;
        cout << "Department:         " << departments[i] << endl;
        cout << fixed << setprecision(2);
        cout << "Monthly Salary:     " << "INR " << salaries[i] << endl;
        cout << "Performance Rating: " << ratings[i] << endl;
        cout << "Logged Complaints:  " << complaints[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const string names[], double salaries[], string ratings[], string complaints[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "No employee records available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the employee's exact name to modify: ";
    cin >> searchName;
    for (int i = 0; i < currentCount; i++) 
    {
        if (names[i] == searchName) 
        {
            cout << endl << "--- RECORD MATCH FOUND ---" << endl;
            cout << "Update Monthly Salary: INR ";
            cin >> salaries[i];
            cout << "Update Performance Rating: ";
            cin >> ratings[i];
            cout << "Log New Complaint/Grievance: ";
            cin >> complaints[i];
            cout << endl << "Employee file updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No record matching '" << searchName << "' was discovered." << endl;
}