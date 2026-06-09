// Codeforces Problem: 2233B - Different Distances
// Submission ID: 377954362
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: 2
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
     for(int i = 1 ; i <= n ; i++)
        cout << i << ' ' ;
     for(int i = n ; i >= 1 ; i--)
        cout << i << ' ' ;
     for(int i = 2 ; i <= n ; i++)
        cout << i << ' ' ;
        cout << 1 << ' ' ; 
     cout << 1 << ' ' ;
    for(int i = n ; i >= 2 ; i--)
        cout << i << ' ' ; 
     cout << '\n' ;
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
// 1 1 2 1 2 3 1 3 2 2 3 3 
  // 1 1 2 2 1 2 3 3 1 3 2 
// 1 2 3 4 3 4 1 2 2 3 4 1 4 1 2 3
// 
// 2 3 4 1
// 3 4 1 2
// 4 1 2 3
  // 1 2 3 4 4 3 2 1 2 3 4 1 1 4 3 2