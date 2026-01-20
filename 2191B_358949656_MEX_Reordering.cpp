// Codeforces Problem: 2191B - MEX Reordering
// Submission ID: 358949656
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
         vector<int> a(n);
        int coun0 = 0, coun1 = 0;   
         for (int i = 0; i < n; i++)
            cin >> a[i];
         for (int i = 0; i < n; i++)
        {
            if (a[i] == 0) coun0++;
            if (a[i] == 1) coun1++;
        }
         if(coun0 == 0) cout << "NO\n";
        else if(coun1 > 0) cout << "YES\n";
        else cout << (coun0== 1? "YES" : "NO") << '\n';
    }
}