// Codeforces Problem: 1883C - Raspberries
// Submission ID: 375639994
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: Problem Name
// =============================================================
 #define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve()
{
    int n, k;
    cin >> n >> k;
     vector<int> a(n);
     int sol = 1e9;
    int cnt2 = 0;
     for (int &i : a)
    {
        cin >> i;
         if (i % 2 == 0)
            cnt2++;
         if (i % k == 0)
            sol = 0;
    }
    for (int i : a)
    {
        int minSol = (k - i % k) % k ;
        if (k == 4)
            sol = min(sol,min(minSol, max(0,2 - cnt2)));
        else
            sol = min(sol, minSol);
    }
     cout << sol << '\n';
}
 int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}