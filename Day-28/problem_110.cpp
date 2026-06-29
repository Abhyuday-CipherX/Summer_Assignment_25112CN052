// Write a program to Create bank account system.
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void openAccount(vector<int> &accountNumbers, vector<string> &names, vector<double> &balances, vector<string> &accountTypes);
void displayAccounts(const vector<int> &accountNumbers, const vector<string> &names, const vector<double> &balances, const vector<string> &accountTypes);
void editDetails(const vector<int> &accountNumbers, vector<string> &names, vector<double> &balances, vector<string> &accountTypes);

int main() 
{
    vector<int> accountNumbers;
    vector<string> names;
    vector<double> balances;
    vector<string> accountTypes;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                openAccount(accountNumbers, names, balances, accountTypes);
                break;
            case 2:
                displayAccounts(accountNumbers, names, balances, accountTypes);
                break;
            case 3:
                editDetails(accountNumbers, names, balances, accountTypes);
                break;
            case 4:
                cout << endl << "Exiting Banking System. Thank you for banking with us!" << endl;
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
    cout << "        BANK ACCOUNT SYSTEM        " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Open New Bank Account" << endl;
    cout << "2. Display Ledger Profiles" << endl;
    cout << "3. Edit Details / Manage Funds" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void openAccount(vector<int> &accountNumbers, vector<string> &names, vector<double> &balances, vector<string> &accountTypes) 
{
    int tempAccNum;
    string tempName, tempType;
    double tempBalance;
    cout << endl << "--- ACCOUNT APPLICATION REGISTRATION ---" << endl;
    cout << "Create 4-Digit Account Number: ";
    cin >> tempAccNum;
    cout << "Enter Customer Name (single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Account Type (Savings/Current): ";
    cin >> tempType;
    cout << "Enter Initial Opening Deposit: INR ";
    cin >> tempBalance;

    accountNumbers.push_back(tempAccNum);
    names.push_back(tempName);
    accountTypes.push_back(tempType);
    balances.push_back(tempBalance);
    cout << endl << "Account successfully provisioned and verified!" << endl;
}

void displayAccounts(const vector<int> &accountNumbers, const vector<string> &names, const vector<double> &balances, const vector<string> &accountTypes) 
{
    if (accountNumbers.empty()) 
    {
        cout << endl << "No active accounts registered in the centralized ledger!" << endl;
        return;
    }
    int totalAccounts = accountNumbers.size();
    for (int i = 0; i < totalAccounts; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "             ACCOUNT RECORD #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Account Number:  " << accountNumbers[i] << endl;
        cout << "Account Holder:  " << names[i] << endl;
        cout << "Account Class:   " << accountTypes[i] << endl;
        cout << fixed << setprecision(2);
        cout << "Current Balance: " << "INR " << balances[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const vector<int> &accountNumbers, vector<string> &names, vector<double> &balances, vector<string> &accountTypes) 
{
    if (accountNumbers.empty()) 
    {
        cout << endl << "No records available inside the system matrix to modify!" << endl;
        return;
    }
    int searchAccNum;
    cout << endl << "Enter Account Number to verify and update matrix: ";
    cin >> searchAccNum;
    int totalAccounts = accountNumbers.size();
    for (int i = 0; i < totalAccounts; i++) 
    {
        if (accountNumbers[i] == searchAccNum) 
        {
            cout << endl << "--- CENTRAL DATABASE VERIFICATION SUCCESS ---" << endl;
            cout << "Update Primary Holder Name: ";
            cin >> names[i];
            cout << "Update Account Type Classification: ";
            cin >> accountTypes[i];
            cout << "Update Vault Liquidity Balance: INR ";
            cin >> balances[i];
            cout << endl << "Banking parameters successfully overwritten and saved!" << endl;
            return;
        }
    }
    cout << endl << "Account designation sequence " << searchAccNum << " was not located." << endl;
}