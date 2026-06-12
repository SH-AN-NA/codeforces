// Codeforces Problem: 1869B - 2D Traveling
// Submission ID: 378305462
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_2_D_Traveling
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
    int n , k , a , b ;
    cin >> n >> k >> a >> b ;
     vector<pair<ll,ll>> pos ;
     ll xa , ya , xb , yb ;
    for(int i = 1 ; i <= n ; i++)
    {
        ll x , y ;
        cin >> x >> y ;
         pos.push_back({x,y}) ;
         if(i==a)
        {
            xa = x ; ya = y ;
        }
        if(i==b)
        {
            xb = x ; yb = y ;
        }
    }
         ll mina = INF, minb = INF ;
    ll direct = abs(yb - ya) + abs(xb - xa) ;
     for(int i = 1 ; i <= k ; i++)
    {
        ll x = pos[i-1].first ;
        ll y = pos[i-1].second ;
        {
             {
                mina = min(abs(x - xa) + abs(y - ya ), mina) ;
                minb = min(abs(xb - x) + abs(yb - y ), minb) ;
            }
        }
    }
     cout << min(direct , mina + minb) << '\n' ;
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