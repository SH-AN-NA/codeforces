// Codeforces Problem: 2185B - Prefix Max
// Submission ID: 358544931
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
         long long mx = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mx = max(mx, x);
        }
         cout << mx * n << endl ;
    }
}