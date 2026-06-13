// Codeforces Problem: 1827A - Counting Orders
// Submission ID: 378482805
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: A_Counting_Orders
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
     vector<ll> a(n) , b(n) ;
    vecInput(a)
    vecInput(b)
     sort(rall(a)) ;
    sort(rall(b)) ;
     int l = 0 , r = 0 ;
    ll sol = 1 ;
    while(l<n)
    {
        if(r < n && a[r] > b[l])
        {
            r++ ;
        }
        else
        {
            l++ ;
            sol = (sol * (r-l+1)) % MOD ;
        }
        if(l>r)
            sol = 0 ;
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
// 2 4 5 6 8 9 
// 1 1 3 4 5 6