// Codeforces Problem: 1899B - 250 Thousand Tons of TNT
// Submission ID: 378227370
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_250_Thousand_Tons_of_TNT
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
    ll n ; cin >> n ;  // n <=150000
    vector<ll> a(n) ;
    vecInput(a)
     vector<ll>pfx(n) ;
    pfx[0] = a[0] ;
    for(int i = 1 ; i < n ; i++)
        pfx[i] = pfx[i-1] + a[i] ;
     ll sol = 0 ;
    for(int i = 1 ; i <= n ; i++)
    {
        if(n % i)   continue ;
         ll start = i-1 ;
        ll maxi = pfx[start] ;
        ll mini = pfx[start] ;
         for(ll idx = start + i ; idx < n ; idx += i)
        {
            ll curr = pfx[idx] - pfx[idx - i] ;
            maxi = max(maxi , curr) ;
            mini = min(mini , curr) ;
        }
        sol = max(sol , maxi - mini) ;
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