// Codeforces Problem: 1780B - GCD Partition
// Submission ID: 378951254
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_GCD_Partition
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
    int n ; cin >> n ;
    vector<ll> a(n) ;
     ll totalsum = 0 ;
     for(ll &i : a)
    {
        cin >> i ;
        totalsum += i ;
    }
     vector<ll>pfx(n) ;
    pfx[0] = a[0] ;
     ll sol = 1 ;
    for(int i = 1 ; i < n ; i++)
    {
        pfx[i] = pfx[i-1] + a[i] ;
    }
     for(int i = 0 ; i < n - 1 ; i++)
        sol = max(sol , __gcd(pfx[i] , totalsum - pfx[i])) ;
     cout << sol << '\n' ;
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