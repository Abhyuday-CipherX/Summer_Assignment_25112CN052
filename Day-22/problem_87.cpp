// Write a program to Character frequency. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    map<char,int> freq;
    for(int i=0;i<str.length();i++)
    {
        freq[str[i]]++;
    }
    for(auto it=freq.begin();it!=freq.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
