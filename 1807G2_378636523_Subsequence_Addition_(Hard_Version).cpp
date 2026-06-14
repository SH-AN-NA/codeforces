// Codeforces Problem: 1807G2 - Subsequence Addition (Hard Version)
// Submission ID: 378636523
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: G_1_Subsequence_Addition_Easy_Version
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 // Vector Helpers
#define vecInput(v) for(auto &i : v) { cin >> i; }
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n ; cin >> n ;
    vector<ll>a(n) ;
    int totalsum = 0 ;
    vecInput(a) ;
    sort(all(a)) ;
     if(a[0]!=1) 
    {
        NO 
        return ;
    }
 // prefix i <= a[i]
    ll prefixsum = 1 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] > prefixsum || a[i] < a[i-1])
        {
            NO 
            return ;
        }
         prefixsum += a[i] ;
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