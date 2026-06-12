// Codeforces Problem: 2236C - Omsk Programmers
// Submission ID: 378381490
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: C_Omsk_Programmers
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
     ll a , b , x ;
    cin >> a >> b >> x ;
     vector<pair<ll,ll>> ansa;
    vector<pair<ll,ll>> ansb;
     ansa.push_back({a,0}) ;
    ansb.push_back({b,0}) ;
     ll ops = 0 ;
    while(a>0)
    {
        a /= x ;
        ops++ ;
         ansa.push_back({a,ops}) ;
    }
    ops = 0 ;
    while(b>0)
    {
        b /= x ;
        ops++ ;
         ansb.push_back({b,ops}) ;
    }
     ll sol = abs(ansa[0].first - ansb[0].first) ;
     for(auto aa : ansa)
    {
        for(auto bb : ansb)
        {
            sol = min(sol , aa.second + bb.second + abs(aa.first - bb.first) ) ;
        }
    }
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