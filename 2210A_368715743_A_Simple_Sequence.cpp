// Codeforces Problem: 2210A - A Simple Sequence
// Submission ID: 368715743
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
         for (int i = n; i >= 1; i--) 
        {
            cout << i << " ";
        }
        cout << endl;
    }
     }