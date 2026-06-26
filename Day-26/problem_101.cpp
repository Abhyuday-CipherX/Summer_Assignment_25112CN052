// Write a program to Create number guessing game.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int secret_number = rand() % 100 + 1;
    int guess = 0;
    int total_attempts = 0;
    int choice = 1;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n\n";
    while (choice == 1) 
    {
        for (int i = 0; i < 5; i++) // User given 5 chances to guess the number in one trial.
        {
            cout << "Enter your guess: ";
            cin >> guess;
            total_attempts++;
            if (guess < 1 || guess > 100) 
            {
                cout << "Out of bounds! Guess between 1 and 100.\n\n";
            } 
            else if (guess < secret_number) 
            {
                cout << "Too low!\n\n";
            } 
            else if (guess > secret_number) 
            {
                cout << "Too high!\n\n";
            } 
            else 
            {
                cout << "\nCorrect! You guessed it in " << total_attempts << " total attempts!\n";
                return 0; // Ending the entire program since the user won
            }
        }
        cout << "You couldn't guess it. Do you want to keep trying for this same number?\n";
        cout << "(1 for More Guesses, 0 to Quit): ";
        cin >> choice;
        cout << "\n";
    }
    cout << "Game Over! The number was: " << secret_number << "\nThanks for playing!\n";
    return 0;
}