// Write a program to Create menu-driven calculator.
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void calculate();

int main() 
{
    calculate();
    return 0;
}

void showMenu() 
{
    cout << endl << "--- Menu-Driven Calculator ---" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

void calculate() 
{
    int choice;
    double num1, num2;
    while (true) 
    {
        showMenu();
        cin >> choice;
        if (choice == 5) 
        {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }
        if (choice < 1 || choice > 5) 
        {
            cout << "Invalid choice! Please select a valid option (1-5)." << endl;
            cin.clear();           // Clearing Input buffer if the user enters a character
            cin.ignore(10000, '\n');
            continue;
        }
        cout << "Enter first number: ";
        while (!(cin >> num1)) 
        {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "Enter second number: ";
        while (!(cin >> num2)) 
        {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        switch (choice) 
        {
            case 1:
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 == 0) 
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                } 
                else 
                {
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                }
                break;
        }
    }
}