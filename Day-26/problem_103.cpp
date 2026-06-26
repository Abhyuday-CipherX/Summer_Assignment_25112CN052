// Write a program to Create ATM simulation.
#include<bits/stdc++.h>
using namespace std;
void showMenu();
void checkBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);
int main()
{
    const int DEFAULT_PIN = 1234;
    double balance = 10000.00; 
    int enteredPin;
    int attempts = 0;
    bool isAuthenticated = false;
    cout << "===================================" << endl;
    cout << "    WELCOME TO THE C++ ATM SYSTEM   " << endl;
    cout << "===================================" << endl;
    while (attempts < 3)  // Max 3 Attemps
    {
        cout << "Enter your 4-digit PIN: ";
        cin >> enteredPin;
        if (enteredPin == DEFAULT_PIN) 
        {
            isAuthenticated = true;
            break;
        } 
        else 
        {
            attempts++;
            cout << "Incorrect PIN. " << (3 - attempts) << " attempts remaining." << endl << endl;
        }
    }
    if (!isAuthenticated) 
    {
        cout << "Too many incorrect attempts. Your card has been blocked!" << endl;
        return 0;  // program ended if pin in incorrect.
    }
    int choice;
    do {
        showMenu();         // function calling
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                checkBalance(balance);   // function calling
                break;
            case 2:
                balance = depositMoney(balance);    // function calling
                break;
            case 3:
                balance = withdrawMoney(balance);         // function calling
                break;
            case 4:
                cout << endl << "Thank you for using our ATM. Goodbye!" << endl;
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
    cout << "             ATM MENU              " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void checkBalance(double balance) 
{
    cout << endl << "Your current balance is: INR " << balance << endl;
}

double depositMoney(double balance) 
{
    double depositAmount;
    cout << endl << "Enter amount to deposit: INR ";
    cin >> depositAmount;
    if (depositAmount > 0) 
    {
        balance += depositAmount;
        cout << "INR " << depositAmount << " successfully deposited." << endl;
        cout << "New balance: INR " << balance << endl;
    } 
    else 
    {
        cout << "Invalid deposit amount!" << endl;
    }
    return balance;
}

double withdrawMoney(double balance) 
{
    double withdrawAmount;
    cout << endl << "Enter amount to withdraw: INR ";
    cin >> withdrawAmount;
    if (withdrawAmount > balance) 
    {
        cout << "Insufficient balance! Transaction cancelled." << endl;
    } 
    else if (withdrawAmount <= 0) 
    {
        cout << "Invalid withdrawal amount!" << endl;
    } 
    else 
    {
        balance -= withdrawAmount;
        cout << "INR " << withdrawAmount << " successfully withdrawn." << endl;
        cout << "Remaining balance: INR " << balance << endl;
    }
    return balance;
}