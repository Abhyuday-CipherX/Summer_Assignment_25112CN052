// Write a program to Create voting eligibility system. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int birth_year = 0;
    int current_year = 2026; 
    int choice = 1;
    cout << "====================================" << endl;
    cout << " Voting Eligibility System (by DOB)" << endl;
    cout << "====================================" << endl;
    while (choice == 1) 
    {
        cout << endl << "Enter your birth year: ";
        cin >> birth_year;
        int age = current_year - birth_year;      
        if (birth_year > current_year) 
        {
            cout << "Invalid birth year! You cannot be born in the future." << endl;
        } 
        else if (age >= 18) 
        {
            cout << "You are " << age << " years old. You are eligible to vote!" << endl;
        }
        else 
        {
            int years_left = 18 - age;
            cout << "You are only " << age << " years old. You are not eligible to vote." << endl;
            cout << "You will be eligible in " << years_left << " year(s)." << endl;
        }
        cout << endl << "Do you want to check another DOB? (1 for Yes, 0 for No): ";
        cin >> choice;
    }
    cout << endl << "Thank you for using the system. Goodbye!" << endl;
    return 0;
}