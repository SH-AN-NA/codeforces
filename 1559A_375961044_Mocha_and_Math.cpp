// Codeforces Problem: 1559A - Mocha and Math
// Submission ID: 375961044
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
    int n ; cin >> n ;
    vector<ll> a(n) ;
     for(ll &i : a)  cin >> i ;
     ll ttand = a[0] ;
    for(int i = 1 ; i < n ; i++)
        ttand &= a[i] ;
     cout << ttand << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}