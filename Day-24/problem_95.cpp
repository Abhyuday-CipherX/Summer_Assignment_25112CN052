// Write a program to Find longest word. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    string longestWord = "";
    string currentWord = "";
    for (char ch : sentence) 
    {
        if (ch != ' ') 
        {
            currentWord += ch;
        } 
        else 
        {
            if (currentWord.length() > longestWord.length()) 
            {
                longestWord = currentWord;
            }
            currentWord = "";
        }
    }
    if (currentWord.length() > longestWord.length()) 
    {
        longestWord = currentWord;
    }
    cout<<"Longest word is: "<<longestWord<<endl;
    return 0;
}