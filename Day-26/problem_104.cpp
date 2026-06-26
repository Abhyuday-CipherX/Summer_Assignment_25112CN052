// Write a program to Create quiz application. 
#include <bits/stdc++.h>
using namespace std;
void showMainMenu();
void startQuiz();
void showDeveloperInfo();
int main() 
{
    int choice;
    do {
        showMainMenu();
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                startQuiz();
                break;
            case 2:
                showDeveloperInfo();
                break;
            case 3:
                cout << endl << "Thank you for visiting the Quiz App. Goodbye!" << endl;
                break;
            default:
                cout << endl << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 3);
    return 0;
}

void showMainMenu() 
{
    cout << endl << "-----------------------------------" << endl;
    cout << "          QUIZ APPLICATION         " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Start Quiz" << endl;
    cout << "2. View Rules & Info" << endl;
    cout << "3. Exit" << endl;
    cout << "-----------------------------------" << endl;
}
void startQuiz() 
{
    int score = 0;
    char answer;
    cout << endl << "--- QUESTION 1 ---" << endl;
    cout << "Which programming language is known as a mid-level language?" << endl;
    cout << "A. Python" << endl;
    cout << "B. Java" << endl;
    cout << "C. C++" << endl;
    cout << "D. JavaScript" << endl;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;
    if (toupper(answer) == 'C') 
    {
        cout << "Correct!" << endl;
        score++;
    } 
    else 
    {
        cout << "Wrong! Correct answer is C." << endl;
    }

    cout << endl << "--- QUESTION 2 ---" << endl;
    cout << "What is the time complexity of searching in a Hash Table in the best case?" << endl;
    cout << "A. O(1)" << endl;
    cout << "B. O(n)" << endl;
    cout << "C. O(log n)" << endl;
    cout << "D. O(n log n)" << endl;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;
    if (toupper(answer) == 'A') 
    {
        cout << "Correct!" << endl;
        score++;
    } 
    else 
    {
        cout << "Wrong! Correct answer is A." << endl;
    }

    cout << endl << "--- QUESTION 3 ---" << endl;
    cout << "Which of the following is not a pillar of OOPs?" << endl;
    cout << "A. Encapsulation" << endl;
    cout << "B. Polymorphism" << endl;
    cout << "C. Compilation" << endl;
    cout << "D. Inheritance" << endl;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;
    if (toupper(answer) == 'C') 
    {
        cout << "Correct!" << endl;
        score++;
    } 
    else 
    {
        cout << "Wrong! Correct answer is C." << endl;
    }

    cout << endl << "===================================" << endl;
    cout << "            QUIZ RESULT            " << endl;
    cout << "===================================" << endl;
    cout << "Total Questions: 3" << endl;
    cout << "Correct Answers: " << score << endl;
    cout << "Final Percentage: " << (score / 3.0) * 100 << "%" << endl;
    cout << "===================================" << endl;
}

void showDeveloperInfo() 
{
    cout << endl << "-----------------------------------" << endl;
    cout << "          APP INFORMATION          " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Rules: Each correct answer gives 1 point." << endl;
    cout << "There is no negative marking." << endl;
    cout << "Case-insensitive inputs are accepted." << endl;
    cout << "-----------------------------------" << endl;
}