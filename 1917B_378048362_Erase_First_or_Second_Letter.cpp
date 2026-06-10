// Codeforces Problem: 1917B - Erase First or Second Letter
// Submission ID: 378048362
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Erase_First_or_Second_Letter
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
    string s ;
    cin >> s;
     set<char>uniq ;
    uniq.insert(s[0]) ;
    int cnt = uniq.size() ;
    for(int i = 1 ; i < n ; i++)
    {
        uniq.insert(s[i]) ;
        cnt += uniq.size() ;
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
// ababa
// baba              aaba
// aba    bba      aba  aba
// ba aa  ba ba  ba aa  ba aa
// a b a a ab ab  ab ab ab aa
 // 2 + 4 + 
//
// ababa = 1
// 2 + 2 + 2+ 2