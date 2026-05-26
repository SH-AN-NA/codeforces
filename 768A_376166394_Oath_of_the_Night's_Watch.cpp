// Codeforces Problem: 768A - Oath of the Night's Watch
// Submission ID: 376166394
// Language: C++23 (GCC 14-64, msys2)

//900
#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: https://codeforces.com/problemset/problem/768/A
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
     int cnt = 0 ;
    sort(all(a)) ;
     for(int i = 1 ; i < n- 1 ; i++)
        if(a[i]>a[0] && a[i]<a[n-1])
            cnt++ ;
     cout << cnt << '\n' ;
 }
 int main() {
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}