// Write a program to Sort words by length.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    vector<string> words;
    string currentWord = "";
    for (char ch : sentence) 
    {
        if (ch != ' ') 
        {
            currentWord += ch;
        } 
        else 
        {
            if (currentWord != "") 
            {
                words.push_back(currentWord);
                currentWord = "";
            }
        }
    }
    if (currentWord != "") 
    {
        words.push_back(currentWord);
    }
    int n = words.size();
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (words[j].length() > words[j + 1].length()) 
            {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    cout << "Words sorted by length: ";
    for (string w : words) 
    {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}