// Codeforces Problem: 1606A - AB Balance
// Submission ID: 365625839
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
    while(t--)
    {
        string s ; cin >> s;
        int n = s.size();
        if(s[0]==s[ n - 1 ])
            cout << s << endl;
                 else if(s[n-1]=='b')
        {
            s[0]='b';
            cout << s << endl;
        }
                     else
        {
            s[0]='a';
            cout << s << endl;
        }
                }
 }