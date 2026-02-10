// Codeforces Problem: 1791C - Prepend and Append
// Submission ID: 362312077
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
         string s;
        cin >> s;
         int f = 0, l = n-1;
        int ops = 0;
         while(f < l)
        {
            if( (s[f]) ^ (s[l]) )
            {
                ops++;
                f++;
                l--;
            }
            else break;
        }
         cout << n - 2*ops << endl ;
    }
}