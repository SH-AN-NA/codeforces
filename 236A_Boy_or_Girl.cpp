// Codeforces Problem: 236A - Boy or Girl
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        string s;
    cin >> s;
    set <char> s1(s.begin(),s.end());
    if (s1.size()%2==0)
    cout <<  "CHAT WITH HER!";
    else
    cout <<   "IGNORE HIM!";
      }