// Write a program to Find first non-repeating character.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]==1)
        {
            cout<<"First non-repeating character is: "<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"No non-repeating character found."<<endl;
    return 0;
}