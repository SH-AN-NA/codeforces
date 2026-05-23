// Codeforces Problem: 2229B - Absolute Cinema
// Submission ID: 375802803
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
    vector<ll> a(n) , b(n) ;
     for(ll &i : a)
        cin >> i;
     for(ll &i : b)
        cin >> i;
     ll maxisum = 0 ;
    ll miniele = 0 ;
     for (int i = 0; i < n; i++)
    {
         ll maxival = max(a[i], b[i]) ;
        maxisum += maxival ;
                ll minival = min(a[i], b[i]) ;
        miniele = max(miniele, minival) ;
    }
     cout << maxisum + miniele <<'\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}