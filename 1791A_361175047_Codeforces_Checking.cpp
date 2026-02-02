// Codeforces Problem: 1791A - Codeforces Checking
// Submission ID: 361175047
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
    string s = "codeforces"; 
    while(t--)
    {
        char c; cin >> c;
        if(s.find(c)!= string::npos)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
              }
 }