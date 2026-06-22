//Write a program to Count vowels and consonants.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int vowels=0,consonants=0;
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            char ch=tolower(str[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    return 0;
}