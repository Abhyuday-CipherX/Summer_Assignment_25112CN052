// Write a program to Create marksheet generation system.
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void registerStudentMarks(vector<string> &names, vector<int> &maths, vector<int> &science, vector<int> &english);
void displayMarksheets(const vector<string> &names, const vector<int> &maths, const vector<int> &science, const vector<int> &english);
void editDetails(const vector<string> &names, vector<int> &maths, vector<int> &science, vector<int> &english);

int main() 
{
    vector<string> names;
    vector<int> maths;
    vector<int> science;
    vector<int> english;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                registerStudentMarks(names, maths, science, english);
                break;
            case 2:
                displayMarksheets(names, maths, science, english);
                break;
            case 3:
                editDetails(names, maths, science, english);
                break;
            case 4:
                cout << endl << "Exiting Marksheet Generation System. Goodbye!" << endl;
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
    cout << "    MARKSHEET GENERATION SYSTEM    " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Register Student Marks" << endl;
    cout << "2. Display Generated Marksheets" << endl;
    cout << "3. Edit Details / Academic Scores" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void registerStudentMarks(vector<string> &names, vector<int> &maths, vector<int> &science, vector<int> &english) {
    string tempName;
    int tempMath, tempSci, tempEng;
    cout << endl << "--- ENTER STUDENT ACADEMICS ---" << endl;
    cout << "Enter Student Name (single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Mathematics Marks (Out of 100): ";
    cin >> tempMath;
    cout << "Enter Science Marks (Out of 100): ";
    cin >> tempSci;
    cout << "Enter English Marks (Out of 100): ";
    cin >> tempEng;

    names.push_back(tempName);
    maths.push_back(tempMath);
    science.push_back(tempSci);
    english.push_back(tempEng);
    cout << endl << "Academic score recorded successfully!" << endl;
}

void displayMarksheets(const vector<string> &names, const vector<int> &maths, const vector<int> &science, const vector<int> &english) 
{
    if (names.empty()) 
    {
        cout << endl << "No academic records available in the system!" << endl;
        return;
    }
    int totalStudents = names.size();
    for (int i = 0; i < totalStudents; i++) 
    {
        int totalObtained = maths[i] + science[i] + english[i];
        double percentage = (totalObtained / 300.0) * 100;
        string division;
        if (percentage >= 60.0) 
        {
            division = "First_Division";
        } 
        else if (percentage >= 45.0) 
        {
            division = "Second_Division";
        }
        else if (percentage >= 33.0) 
        {
            division = "Third_Division";
        } 
        else 
        {
            division = "Fail";
        }
        cout << endl << "=========================================" << endl;
        cout << "             REPORT CARD #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Student Name:    " << names[i] << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Subject          | Marks Obtained" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Mathematics      | " << maths[i] << " / 100" << endl;
        cout << "Science          | " << science[i] << " / 100" << endl;
        cout << "English          | " << english[i] << " / 100" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Aggregate Total: | " << totalObtained << " / 300" << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage:      | " << percentage << "%" << endl;
        cout << "Final Result:    | " << division << endl;
        cout << "=========================================" << endl;
    }
}

void editDetails(const vector<string> &names, vector<int> &maths, vector<int> &science, vector<int> &english) 
{
    if (names.empty()) 
    {
        cout << endl << "No academic profiles available to update!" << endl;
        return;
    }
    string searchName;
    cout << endl << "Enter the student's exact name to modify scores: ";
    cin >> searchName;
    int totalStudents = names.size();
    for (int i = 0; i < totalStudents; i++) 
    {
        if (names[i] == searchName) 
        {
            cout << endl << "--- PROFILE MATCH FOUND ---" << endl;
            cout << "Update Mathematics Marks: ";
            cin >> maths[i];
            cout << "Update Science Marks: ";
            cin >> science[i];
            cout << "Update English Marks: ";
            cin >> english[i];
            cout << endl << "Student academic ledger updated successfully!" << endl;
            return;
        }
    }
    cout << endl << "No record matching '" << searchName << "' was discovered." << endl;
}