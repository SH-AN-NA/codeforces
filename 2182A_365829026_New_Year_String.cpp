// Codeforces Problem: 2182A - New Year String
// Submission ID: 365829026
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int n; 
        cin >> n;
         string s, sub1="2025", sub2="2026";
        cin >> s;
         int cnt5 = 0, cnt6 = 0;
         int pos = s.find(sub1);
        while(pos != string::npos)
        {
            cnt5++;
            pos = s.find(sub1, pos + 1);
        }
         pos = s.find(sub2);
        while(pos != string::npos)
        {
            cnt6++;
            pos = s.find(sub2, pos + 1);
        }
         if(cnt5==0 || cnt6>=1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}