// Codeforces Problem: 1791G2 - Teleporters (Hard Version)
// Submission ID: 378921433
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: G_2_Teleporters_Hard_Version
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
    ll c ; cin >> c ;
    vector<int> a(n) ;
    vector<pair<ll,int>> sortedcost(n) ;
     for(int i = 0 ;i < n ; i++)
    {
        cin >> a[i] ;
        ll mincost = a[i] + min((ll)i + 1 , (ll)n - i );
        sortedcost[i] = {mincost , i+1} ;
    }
     sort(all(sortedcost)) ;
     vector<ll>pref(n+1 ,0) ;
    for(int i = 0 ;i < n ; i++)
        pref[i+1] = pref[i] + sortedcost[i].first ;
            vector<int> pos(n+1) ;
    for(int i = 0 ;i < n ; i++)
        pos[sortedcost[i].second] = i ;
            int cnt = 0 ;
    for(int i = 0 ;i < n ; i++)
    {
        ll first = a[i] + (i+1) ;
            if(c < first) continue ;
         ll left = c - first ;
        int curr = 1 ;
        int sidx = pos[i+1] ;
          //binary search
        int l = 0 , h = n , idx = 0 ;
        while(l<=h)
        {
            int m = l + (h-l)/2 ;
             ll total = pref[m] ;
            int elements = m ;
             if(sidx < m)
            {
                total -= sortedcost[sidx].first ;
                elements-- ;
            }
            if(total <= left) 
            {
                idx = elements ;
                l = m + 1 ;
            }
            else    h = m - 1 ;
        }
        cnt = max(cnt , curr +idx) ;
    }
         cout << cnt << '\n' ;
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