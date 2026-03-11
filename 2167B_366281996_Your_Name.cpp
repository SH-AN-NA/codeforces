// Codeforces Problem: 2167B - Your Name
// Submission ID: 366281996
// Language: C++23 (GCC 14-64, msys2)

// 800
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int q ; cin >> q ;
     while(q--)
    {
        int n ; cin >> n ;
        string s , t ;
        cin >> s >> t;
         sort(s.begin(),s.end());
        sort(t.begin(),t.end());
         if(s==t)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
    }
 }