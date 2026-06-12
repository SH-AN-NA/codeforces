// Codeforces Problem: 2236B - Tatar TV Show
// Submission ID: 378346386
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Tatar_TV_Show
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n , k ; cin >> n >> k ;
    string s ; cin >> s ;
    vector<int> counts(k, 0);
     for (int i = 0; i < n; i++) 
    {
        if (s[i] == '1') 
            counts[i % k]++;
            }
    for (int r = 0; r < k; r++) 
    {
        if (counts[r] % 2 != 0) 
        {
            NO;
            return; 
        }
    }
    YES 
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}