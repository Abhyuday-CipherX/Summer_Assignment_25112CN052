// Write a program to Find maximum occurring character.
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
    char maxChar;
    int maxCount=0;
    for(auto it:m)
    {
        if(it.second>maxCount)
        {
            maxCount=it.second;
            maxChar=it.first;
        }
    }
    cout<<"Maximum occurring character is: "<<maxChar<<endl;
    return 0;
}