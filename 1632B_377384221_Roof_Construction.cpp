// Codeforces Problem: 1632B - Roof Construction
// Submission ID: 377384221
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Roof_Construction
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
    // cout << (int)log2(n) + 1 << '\n' ;
    // cout << pow(2,(int)log2(n)) << '\n' ;
     for(int i = n-1 ; i >= pow(2,(int)log2(n-1)) ; i--)
        cout << i << " " ;
     for(int i = 0 ; i < pow(2,(int)log2(n-1)) ; i++)
        cout << i << " " ;
     cout << '\n' ;
}
// let n = 4 bit say 12 so upto 11 is present (1011)
// then 100000 is not present
// but 1000 is present and 111 is also present
 // that is minimun all coocupied bits is 3 so least cost shouldnt be greater than 111(7)
  int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}