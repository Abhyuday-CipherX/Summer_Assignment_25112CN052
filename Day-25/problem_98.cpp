// Write a program to Find common characters in strings. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    unordered_map<char,int> m;
    vector<char> ans;
    for(int i=0;i<str.size();i++)
    {
        m[str[i]]++;
    }
    for(auto it : m)
    {
        if(it.second>1)
        ans.push_back(it.first);
    }
    cout<<"The Duplicate Characters are: "<<endl;
    for(char ch: ans)
    cout<<ch<<endl;
    return 0;
}