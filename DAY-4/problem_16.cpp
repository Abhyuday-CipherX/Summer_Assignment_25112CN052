//Write a program to Print Armstrong numbers in a range
#include <bits/stdc++.h>
using namespace std;
int countDigits(int num) {
    int count = 0;
    while (num > 0) 
    {
        count++;
        num /= 10;
    }
    return count;
}
int integerPow(int base, int exp) 
{
    int result = 1;
    for (int i = 0; i < exp; i++) 
    {
        result *= base;
    }
    return result;
}
bool isArmstrong(int num) 
{
    if (num < 10 && num >= 0) 
    return true;
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;
    while (num > 0) 
    {
        int digit = num % 10;
        sum += integerPow(digit, numDigits);
        num /= 10;
    }
    return sum == originalNum;
}

int main() 
{
    int start, end;
    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;
    cout << "\nArmstrong numbers between " << start << " and " << end << " are:\n";
    bool found = false;
    for (int i = start; i <= end; i++) 
    {
        if (isArmstrong(i)) 
        {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None found in this range.";
    }
    cout << endl;
    return 0;
}