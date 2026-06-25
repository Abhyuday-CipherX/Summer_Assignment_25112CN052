// Write a program to Check anagram strings
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    if(s1.length()!=s2.length())
    {
        cout<<"Strings are not anagrams."<<endl;
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"Strings are anagrams."<<endl;
        }
        else
        {
            cout<<"Strings are not anagrams."<<endl;
        }
        }
        return 0;
    }
    