// Write a program to Create salary management system.
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void registerSalaryRecord(vector<string> &names, vector<double> &baseSalaries, vector<double> &allowances, vector<double> &deductions);
void displaySalarySlips(const vector<string> &names, const vector<double> &baseSalaries, const vector<double> &allowances, const vector<double> &deductions);
void editDetails(const vector<string> &names, vector<double> &baseSalaries, vector<double> &allowances, vector<double> &deductions);

int main() 
{
    vector<string> names;
    vector<double> baseSalaries;
    vector<double> allowances;
    vector<double> deductions;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerSalaryRecord(names, baseSalaries, allowances, deductions);
                break;
            case 2:
                displaySalarySlips(names, baseSalaries, allowances, deductions);
                break;
            case 3:
                editDetails(names, baseSalaries, allowances, deductions);
                break;
            case 4:
                cout << endl << "Exiting Salary Management System. Goodbye!" << endl;
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
    cout << "      SALARY MANAGEMENT SYSTEM     " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register Employee Salary" << endl;
    cout << "2. Display Net Salary Slips" << endl;
    cout << "3. Edit Details (Salary/Deductions)" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerSalaryRecord(vector<string> &names, vector<double> &baseSalaries, vector<double> &allowances, vector<double> &deductions) 
{
    string tempName;
    double tempBase, tempAllow, tempDeduct;
    cout << endl << "--- ENTER SALARY STRUCTURE ---" << endl;
    cout << "Enter Employee Name (single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Base Salary: INR ";
    cin >> tempBase;
    cout << "Enter Total Allowances (HRA, TA, etc.): INR ";
    cin >> tempAllow;
    cout << "Enter Total Deductions (PF, Tax, etc.): INR ";
    cin >> tempDeduct;

    names.push_back(tempName);
    baseSalaries.push_back(tempBase);
    allowances.push_back(tempAllow);
    deductions.push_back(tempDeduct);
    cout << endl << "Salary profile processed and recorded successfully!" << endl;
}

void displaySalarySlips(const vector<string> &names, const vector<double> &baseSalaries, const vector<double> &allowances, const vector<double> &deductions) 
{
    if (names.empty()) 
    {
        cout << endl << "No payroll profiles available in the system!" << endl;
        return;
    }
    for (int i = 0; i < names.size(); i++) 
    {
        double netSalary = baseSalaries[i] + allowances[i] - deductions[i];
        cout << endl << "=========================================" << endl;
        cout << "           SALARY SLIP #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Employee Name:      " << names[i] << endl;
        cout << "Base Salary:        " << "INR " << baseSalaries[i] << endl;
        cout << "Gross Allowances:   " << "INR " << allowances[i] << endl;
        cout << "Total Deductions:   " << "INR " << deductions[i] << endl;
        cout << "-----------------------------------------" << endl;
        cout << "NET PAYABLE SALARY: " << "INR " << netSalary << endl;
        cout << "=========================================" << endl;
    }
}

void editDetails(const vector<string> &names, vector<double> &baseSalaries, vector<double> &allowances, vector<double> &deductions) 
{
    if (names.empty()) 
    {
        cout << endl << "No payroll records available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the employee's exact name to modify payload: ";
    cin >> searchName;
    for (int i = 0; i < names.size(); i++) 
    {
        if (names[i] == searchName) 
        {
            cout << endl << "--- PAYROLL MATCH FOUND ---" << endl;
            cout << "Update Base Salary: INR ";
            cin >> baseSalaries[i];
            cout << "Update Total Allowances: INR ";
            cin >> allowances[i];
            cout << "Update Total Deductions: INR ";
            cin >> deductions[i];
            cout << endl << "Employee payroll matrix updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No record matching '" << searchName << "' was discovered." << endl;
}