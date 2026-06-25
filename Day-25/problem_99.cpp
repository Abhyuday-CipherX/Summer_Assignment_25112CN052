// Write a program to Sort names alphabetically.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n; 
    vector<string> names(n);
    cout << "Enter " << n << " names (one per line):" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, names[i]);
    }
    sort(names.begin(), names.end());
    cout << "Names in alphabetical order:" << endl;
    for (const string& name : names) 
    {
        cout << name << endl;
    }
    return 0;
}