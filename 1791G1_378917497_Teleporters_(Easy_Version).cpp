// Codeforces Problem: 1791G1 - Teleporters (Easy Version)
// Submission ID: 378917497
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: G_1_Teleporters_Easy_Version
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
    int c ; cin >> c ;
    vector<int> a(n) ;
     vector<ll>sumpos(n) ;
     for(ll i = 0 ; i < n ;i++)
    {
        cin >> a[i] ;
        sumpos[i] = a[i] + i + 1 ;
    }
     sort(all(sumpos)) ;
    int mark = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(c >= sumpos[i] )
        {
            c -= sumpos[i] ;
            mark++ ;
        }
        else break ;
     }
     cout << mark  << '\n' ;
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