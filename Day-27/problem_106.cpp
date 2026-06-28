// Write a program to Create employee management system.
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void registerEmployee(vector<string> &names, vector<string> &departments, vector<double> &salaries, vector<string> &ratings, vector<string> &complaints);
void displayRecords(const vector<string> &names, const vector<string> &departments, const vector<double> &salaries, const vector<string> &ratings, const vector<string> &complaints);
void editDetails(const vector<string> &names, vector<double> &salaries, vector<string> &ratings, vector<string> &complaints);

int main() 
{
    vector<string> names;
    vector<string> departments;
    vector<double> salaries;
    vector<string> ratings;
    vector<string> complaints;

    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                registerEmployee(names, departments, salaries, ratings, complaints);
                break;
            case 2:
                displayRecords(names, departments, salaries, ratings, complaints);
                break;
            case 3:
                editDetails(names, salaries, ratings, complaints);
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
    cout << "     EMPLOYEE MANAGEMENT SYSTEM    " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register Employee Details" << endl;
    cout << "2. Display Assembled Profiles" << endl;
    cout << "3. Edit Details & Complaints" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerEmployee(vector<string> &names, vector<string> &departments, vector<double> &salaries, vector<string> &ratings, vector<string> &complaints) 
{
    string tempName, tempDept, tempRating, tempComplaint;
    double tempSalary;

    cout << endl << "--- ENTER EMPLOYEE DETAILS ---" << endl;
    cout << "Enter Name (use single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Department: ";
    cin >> tempDept;
    cout << "Enter Monthly Salary: INR ";
    cin >> tempSalary;
    cout << "Enter Performance Rating (e.g., Excellent/Good): ";
    cin >> tempRating;
    cout << "Enter Grievances/Complaints (use single-word or 'None'): ";
    cin >> tempComplaint;

    names.push_back(tempName);
    departments.push_back(tempDept);
    salaries.push_back(tempSalary);
    ratings.push_back(tempRating);
    complaints.push_back(tempComplaint);
    cout << endl << "Employee profile assembled and recorded successfully!" << endl;
}

void displayRecords(const vector<string> &names, const vector<string> &departments, const vector<double> &salaries, const vector<string> &ratings, const vector<string> &complaints) 
{
    if (names.empty()) 
    {
        cout << endl << "No employee records available in the system!" << endl;
        return;
    }
    for (int i = 0; i < names.size(); i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "           EMPLOYEE PROFILE #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Name:               " << names[i] << endl;
        cout << "Department:         " << departments[i] << endl;
        cout << "Monthly Salary:     " << "INR " << salaries[i] << endl;
        cout << "Performance Rating: " << ratings[i] << endl;
        cout << "Logged Complaints:  " << complaints[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const vector<string> &names, vector<double> &salaries, vector<string> &ratings, vector<string> &complaints) 
{
    if (names.empty()) 
    {
        cout << endl << "No employee records available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the employee's exact name to modify: ";
    cin >> searchName;
    for (int i = 0; i < names.size(); i++) 
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