// Codeforces Problem: 1440B - Sum of Medians
// Submission ID: 375966160
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: Problem Name
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n , k ;
    cin >> n >> k ;
     vector<ll> a(n*k) ;
     for(ll &i : a)
        cin >> i ;
     sort(all(a)) ;
    ll sum = 0 ;
    int l = 0 , r = n*k -1 , val = 0 ;
    while(l<=r)
    {
        val = r - n/2 ;
        sum += a[val] ;
        l+=(n - 1 - n/2) ;
        r = val - 1 ;
    }
    cout << sum << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}