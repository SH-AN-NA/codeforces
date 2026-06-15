// Codeforces Problem: 1791E - Negatives and Positives
// Submission ID: 378923518
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: E_Negatives_and_Positives
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
    vector<int> a(n) ;
    ll sum = 0 ;
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        if(a[i] < 0)
        {
            a[i] = -a[i] ;
            cnt++ ;
        }
        sum += a[i] ;
    }
    sort(all(a)) ;
     cout << (cnt%2==0 ? sum : sum - 2*a[0]) <<'\n' ;
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