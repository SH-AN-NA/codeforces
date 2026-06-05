// Codeforces Problem: 1690D - Black and White Stripe
// Submission ID: 377375360
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: D_Black_and_White_Stripe
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
    int n , k ;
    cin >> n >> k ;
     string s ;
    cin >> s ;
     vector<int> prefix(n+1, 0) ;
     for(int i = 0 ; i < n ; i++)
    {
        prefix[i+1] = prefix[i] + (s[i]=='W') ;
    }
    int ans = 1e9 ;
    for(int i = 0 ; i <= n - k ; i++)
    {
        int dif = prefix[i+k] - prefix[i] ;
         ans = min(dif,ans) ;
    }
    cout << ans << '\n' ;
 }
// minimize B in k segment
// brute : it. k times over 0 to n-k times
// use prefix sum
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}