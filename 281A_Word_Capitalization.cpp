// Codeforces Problem: 281A - Word Capitalization
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<string>
using namespace std;
 int main()
{
        string s;
    cin >> s;
    if(s[0]>=97)
        s[0] -=32;
    cout << s;
 }