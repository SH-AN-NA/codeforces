// Codeforces Problem: 1620B - Triangles on a Rectangle
// Submission ID: 377389629
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Triangles_on_a_Rectangle
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
    int w , h ;
    cin >> w >> h ;
    int k ;
    cin >> k ;
    ll xdiff = 0 , ydiff = 0 ;
     vector<int> x0(k);
    vecInput(x0)
    xdiff = max(xdiff , (ll)x0[k-1] - x0[0]) ; 
    // cout << xdiff << '\n' ;
     cin >> k ;
    vector<int> x1(k);
    vecInput(x1)
    xdiff = max(xdiff , (ll)x1[k-1] - x1[0]) ;
    // cout << xdiff << '\n' ;
     cin >> k ;
    vector<int> y0(k);
    vecInput(y0)
    ydiff = max(ydiff , (ll)y0[k-1] - y0[0]) ; 
    // cout << ydiff << '\n' ;
     cin >> k ;
    vector<int> y1(k);
    vecInput(y1)
    ydiff = max(ydiff , (ll)y1[k-1] - y1[0]) ;
        // cout << ydiff << '\n' ;
      cout << max(h*xdiff , w*ydiff) << '\n' ;
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