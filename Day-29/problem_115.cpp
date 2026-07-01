//Write a program to Create menu-driven string operations system.
#include<bits/stdc++.h>
using namespace std;
void showMenu();
void concatenateStrings();
void reverseString();
void compareStrings();
void checkPalindrome();

int main() 
{
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                concatenateStrings();
                break;
            case 2:
                reverseString();
                break;
            case 3:
                compareStrings();
                break;
            case 4:
                checkPalindrome();
                break;
            case 5:
                cout << endl << "Exiting String Operations System. Goodbye!" << endl;
                break;
            default:
                cout << endl << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 5);
    return 0;
}

void showMenu() 
{
    cout << endl << "-----------------------------------" << endl;
    cout << "     STRING OPERATIONS SYSTEM      " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Concatenate Two Strings" << endl;
    cout << "2. Reverse a String" << endl;
    cout << "3. Compare Two Strings" << endl;
    cout << "4. Check for Palindrome" << endl;
    cout << "5. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void concatenateStrings() 
{
    string str1, str2;
    cout << endl << "--- STRING CONCATENATION ---" << endl;
    cout << "Enter first string (single-word): ";
    cin >> str1;
    cout << "Enter second string (single-word): ";
    cin >> str2;
    string result = str1 + str2;
    cout << "Concatenated Result: " << result << endl;
    cout << "Total Length: " << result.length() << " characters" << endl;
}

void reverseString() 
{
    string str;
    cout << endl << "--- STRING REVERSAL ---" << endl;
    cout << "Enter a string to reverse (single-word): ";
    cin >> str;
    string reversedStr = str;
    int len = reversedStr.length();
    for (int i = 0; i < len / 2; i++) 
    {
        swap(reversedStr[i], reversedStr[len - i - 1]);
    }
    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversedStr << endl;
}

void compareStrings() 
{
    string str1, str2;
    cout << endl << "--- STRING COMPARISON ---" << endl;
    cout << "Enter first string (single-word): ";
    cin >> str1;
    cout << "Enter second string (single-word): ";
    cin >> str2;
    if (str1 == str2) 
    {
        cout << "Result: Both strings are exactly identical." << endl;
    } 
    else if (str1 > str2) 
    {
        cout << "Result: \"" << str1 << "\" comes after \"" << str2 << "\" lexicographically." << endl;
    } 
    else 
    {
        cout << "Result: \"" << str2 << "\" comes after \"" << str1 << "\" lexicographically." << endl;
    }
}

void checkPalindrome() 
{
    string str;
    cout << endl << "--- PALINDROME CHECK ---" << endl;
    cout << "Enter a string (single-word): ";
    cin >> str;
    bool isPalindrome = true;
    int len = str.length();
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) 
    {
        cout << "Result: \"" << str << "\" is a valid Palindrome." << endl;
    } 
    else 
    {
        cout << "Result: \"" << str << "\" is NOT a Palindrome." << endl;
    }
}