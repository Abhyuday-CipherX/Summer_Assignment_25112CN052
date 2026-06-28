// Write a program to Create student record management system. 
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void registerStudent(vector<string> &names, vector<string> &contacts, vector<double> &totalFees, vector<double> &paidFees, vector<string> &results, vector<string> &complaints);
void displayRecords(const vector<string> &names, const vector<string> &contacts, const vector<double> &totalFees, const vector<double> &paidFees, const vector<string> &results, const vector<string> &complaints);
void editDetails(const vector<string> &names, vector<double> &paidFees, vector<string> &results, vector<string> &complaints);

int main() 
{
    vector<string> names;
    vector<string> contacts;
    vector<double> totalFees;
    vector<double> paidFees;
    vector<string> results;
    vector<string> complaints;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerStudent(names, contacts, totalFees, paidFees, results, complaints);
                break;
            case 2:
                displayRecords(names, contacts, totalFees, paidFees, results, complaints);
                break;
            case 3:
                editDetails(names, paidFees, results, complaints);
                break;
            case 4:
                cout << endl << "Exiting Management System. Goodbye!" << endl;
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
    cout << "     STUDENT INFORMATION SYSTEM    " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register Student Details" << endl;
    cout << "2. Display Assembled Profiles" << endl;
    cout << "3. Update Records & Complaints" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerStudent(vector<string> &names, vector<string> &contacts, vector<double> &totalFees, vector<double> &paidFees, vector<string> &results, vector<string> &complaints) 
{
    string tempName, tempContact, tempResult, tempComplaint;
    double tempTotalFee, tempPaidFee;

    cout << endl << "--- ENTER STUDENT DETAILS ---" << endl;
    cout << "Enter Name (use single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Contact Number: ";
    cin >> tempContact;
    cout << "Enter Total Course Fees: INR ";
    cin >> tempTotalFee;
    cout << "Enter Fees Paid Till Date: INR ";
    cin >> tempPaidFee;
    cout << "Enter Exam Result Status (e.g., Passed/Failed): ";
    cin >> tempResult;
    cout << "Enter Complaints (use single-word or 'None'): ";
    cin >> tempComplaint;

    names.push_back(tempName);
    contacts.push_back(tempContact);
    totalFees.push_back(tempTotalFee);
    paidFees.push_back(tempPaidFee);
    results.push_back(tempResult);
    complaints.push_back(tempComplaint);
    cout << endl << "Student profile assembled and recorded successfully!" << endl;
}

void displayRecords(const vector<string> &names, const vector<string> &contacts, const vector<double> &totalFees, const vector<double> &paidFees, const vector<string> &results, const vector<string> &complaints) 
{
    if (names.empty()) 
    {
        cout << endl << "No records available in the system!" << endl;
        return;
    }
    for (int i = 0; i < names.size(); i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "           STUDENT PROFILE #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Name:               " << names[i] << endl;
        cout << "Contact Number:     " << contacts[i] << endl;
        cout << "Financials:         " << "Paid INR " << paidFees[i] << " out of INR " << totalFees[i] << endl;
        cout << "Academic Result:    " << results[i] << endl;
        cout << "Pending Complaints: " << complaints[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const vector<string> &names, vector<double> &paidFees, vector<string> &results, vector<string> &complaints) 
{
    if (names.empty()) 
    {
        cout << endl << "No student records available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the student's exact name to modify: ";
    cin >> searchName;
    for (int i = 0; i < names.size(); i++) 
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