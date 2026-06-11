// Codeforces Problem: 1904B - Collecting Game
// Submission ID: 378151559
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Collecting_Game
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
    vector<pair<int,int>> v ;
    int a ;
 for (int i = 0; i < n; i++) 
    { 
  cin >> a;
  v.push_back({a, i});
 }    
    vector<ll> pfx(n) ;
    sort(all(v)) ;
     pfx[0] = v[0].first ;
    for(int i = 1 ; i < n ; i++)
        pfx[i] = pfx[i-1] + v[i].first ;
     vector<int> sol(n) ;
    sol[n-1] = n-1 ;
    for(int i = n-2 ; i >= 0 ; i--)
    {
        if(pfx[i] >= v[i+1].first)
            sol[i] = sol[i+1] ;
         else
            sol[i] = i ;
     }
    vector<int> ans(n) ;
    for(int i = 0 ; i < n ; i++)
        ans[v[i].second] = sol[i] ;
     vecOutput(ans)
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