// Codeforces Problem: 2185C - Shifted MEX
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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
                 sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()),a.end());
         int x = 0, y = 1;
                for (int i = 1; i < (int)a.size(); i++)
        {
            if (a[i] == a[i - 1] + 1)
            {
                y++;
            } 
            else
            {
                x = max(x, y);
                y = 1;
            }
        }
        x = max(x, y);
                 cout << x << endl ;
    }
    return 0;
}
 