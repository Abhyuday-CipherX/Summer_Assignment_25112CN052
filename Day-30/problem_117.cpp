// Write a program to Create student record system using arrays and strings. 
#include<bits/stdc++.h>
using namespace std;
const int MAX_STUDENTS = 100;
void showMenu();
void registerStudent(string names[], string contacts[], double totalFees[], double paidFees[], string results[], string complaints[], int &currentCount);
void displayRecords(const string names[], const string contacts[], const double totalFees[], const double paidFees[], const string results[], const string complaints[], int currentCount);
void editDetails(const string names[], double paidFees[], string results[], string complaints[], int currentCount);

int main() 
{
    string names[MAX_STUDENTS];
    string contacts[MAX_STUDENTS];
    double totalFees[MAX_STUDENTS];
    double paidFees[MAX_STUDENTS];
    string results[MAX_STUDENTS];
    string complaints[MAX_STUDENTS];
    int currentCount = 0;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerStudent(names, contacts, totalFees, paidFees, results, complaints, currentCount);
                break;
            case 2:
                displayRecords(names, contacts, totalFees, paidFees, results, complaints, currentCount);
                break;
            case 3:
                editDetails(names, paidFees, results, complaints, currentCount);
                break;
            case 4:
                cout << endl << "Exiting Student Record System. Goodbye!" << endl;
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
    cout << "     STUDENT RECORD SYSTEM         " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register Student Details" << endl;
    cout << "2. Display Assembled Profiles" << endl;
    cout << "3. Edit Details / Manage Records" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerStudent(string names[], string contacts[], double totalFees[], double paidFees[], string results[], string complaints[], int &currentCount) 
{
    if (currentCount >= MAX_STUDENTS) 
    {
        cout << endl << "Database capacity full! Cannot add more records." << endl;
        return;
    }
    cout << endl << "--- ENTER STUDENT DETAILS ---" << endl;
    cout << "Enter Name (use single-word or underscore): ";
    cin >> names[currentCount];
    cout << "Enter Contact Number: ";
    cin >> contacts[currentCount];
    cout << "Enter Total Course Fees: INR ";
    cin >> totalFees[currentCount];
    cout << "Enter Fees Paid Till Date: INR ";
    cin >> paidFees[currentCount];
    cout << "Enter Exam Result Status (e.g., Passed/Failed): ";
    cin >> results[currentCount];
    cout << "Enter Complaints (use single-word or 'None'): ";
    cin >> complaints[currentCount];

    currentCount++;
    cout << endl << "Student profile assembled and recorded successfully!" << endl;
}

void displayRecords(const string names[], const string contacts[], const double totalFees[], const double paidFees[], const string results[], const string complaints[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "No student records available in the system!" << endl;
        return;
    }
    for (int i = 0; i < currentCount; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "           STUDENT PROFILE #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Name:               " << names[i] << endl;
        cout << "Contact Number:     " << contacts[i] << endl;
        cout << fixed << setprecision(2);
        cout << "Financials:         " << "Paid INR " << paidFees[i] << " out of INR " << totalFees[i] << endl;
        cout << "Academic Result:    " << results[i] << endl;
        cout << "Pending Complaints: " << complaints[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const string names[], double paidFees[], string results[], string complaints[], int currentCount) 
{
    if (currentCount == 0) 
    {
        cout << endl << "No student records available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the student's exact name to modify: ";
    cin >> searchName;
    for (int i = 0; i < currentCount; i++) 
    {
        if (names[i] == searchName) 
        {
            cout << endl << "--- RECORD MATCH FOUND ---" << endl;
            cout << "Update Fees Paid: INR ";
            cin >> paidFees[i];
            cout << "Update Exam Result Status: ";
            cin >> results[i];
            cout << "Log New Complaint: ";
            cin >> complaints[i];
            cout << endl << "Student file updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No record matching '" << searchName << "' was discovered." << endl;
}