// Codeforces Problem: 1832B - Maximum Sum
// Submission ID: 378475817
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Maximum_Sum
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
     vector<ll>a(n) ;
    vecInput(a)
    sort(all(a)) ;
     vector<ll> pfx(n) ;
    pfx[0] = a[0] ; 
    for(int i = 1 ; i < n ; i++)
        pfx[i] = pfx[i-1] + a[i] ;
      int idx = k ;
    ll sum = 0 ;
    while(idx >= 0)
    {
        int l = 2*(k - idx) , r = idx ;
         sum = max(sum , (l == 0 ? pfx[n-r-1] : pfx[n-r-1] - pfx[l-1]) );
        idx-- ;
    }
     cout << sum << '\n' ;
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