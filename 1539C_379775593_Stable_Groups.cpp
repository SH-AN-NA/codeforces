// Codeforces Problem: 1539C - Stable Groups
// Submission ID: 379775593
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: C_Stable_Groups
// Rating: Rating
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 // Loops (0-n), (n-0), (1-n), (n-1)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define for0(i, n) for(int i = 0; i < n; ++i)          // 0 to n-1
#define forn(i, n) for(int i = n; i >= 0; --i)         // n down to 0
#define for1(i, n) for(int i = 1; i <= n; ++i)         // 1 to n
#define for1n(i, n) for(int i = n; i >= 1; --i)        // n down to 1
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 // Debugger (Runs locally with -DLOCAL flag)
#ifdef LOCAL
#define deb(x) cerr << #x << " = " << x << endl;
#else
#define deb(x)
#endif
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
 void solve() {
    int n ;
    ll k , x ; 
    cin >> n >> k >> x ;
     vector<ll> a(n) ;
    vecInput(a)
    sort(all(a)) ;
    int currgrp = 1 ;
    vector<ll> gapcost ;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i]-a[i-1] > x) 
        {
            ll it = (a[i]-a[i-1] + x -1) / x - 1 ;
            gapcost.pb (it) ;
        }
    }
    sort(all(gapcost)) ;
    currgrp += sz(gapcost) ;
    for(auto it : gapcost)
    {
        if(k>= it)
        {
            k-= it ;
            currgrp-- ;
        }
        else break ;
    }
    cout << currgrp << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
  // 20 20 80 70 70 70 420 5 1 5 1 60 90
// 1 1 5 5 20 20 60 70 70 70 80 90 420
//