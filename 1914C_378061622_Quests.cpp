// Codeforces Problem: 1914C - Quests
// Submission ID: 378061622
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: C_Quests
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
    int n , k ;
    cin >> n >> k ;
    vector<int> a(n) , b(n);
     vecInput(a)
    vecInput(b)
     int sum_a = 0 , max_b = 0 , sol = 0 ;
     for(int i = 0 ; i < min(n,k) ; i++)
    {
        sum_a += a[i] ;
        max_b = max(max_b , b[i]) ;
         sol = max(sol , sum_a + (k-i-1)*max_b) ;
    }
     cout << sol << '\n' ;
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