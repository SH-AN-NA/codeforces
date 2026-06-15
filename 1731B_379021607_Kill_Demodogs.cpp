// Codeforces Problem: 1731B - Kill Demodogs
// Submission ID: 379021607
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Kill_Demodogs
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
    ll n ; cin >> n ;
    ll sol = 0 ;
     // sol = (((n*(n+1))% MOD)*((4*n-1)*337)% MOD)% MOD ;
    sol = ((n*(n+1))% MOD) ;
    sol = (sol*(4*n-1))% MOD ;
    sol = (sol*337)% MOD ;
     cout << sol % MOD << '\n' ;
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
// 1.1 1.2 2.2 32 33........n-1n nn
// n2 + n2 - n = n(n+1)(2n+1)/6 + (n-1)(n)(2n-1)/6 + n(n+1)/2
// n(n+1)/6 (2n-2 ) + (n-1)(n)(2n-1)/6
// n(n-1)/6(4n-1)