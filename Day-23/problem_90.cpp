// Write a program to Find first repeating character.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]>1)
        {
            cout<<"First repeating charater is: "<<s[i]<<endl;
            break;
        }
    }
    return 0;
}