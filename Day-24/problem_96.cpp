// Write a program to Remove duplicate characters. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    unordered_set<char> freq;
    string result="";
    for(int i=0;i<s.size();i++)
    {
        if(freq.find(s[i])==freq.end())
        {
            result+=s[i];
            freq.insert(s[i]);
        }
    }
    cout<<"String after removing duplicate characters is: "<<result<<endl;
    return 0;
}