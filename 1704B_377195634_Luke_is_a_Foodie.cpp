// Codeforces Problem: 1704B - Luke is a Foodie
// Submission ID: 377195634
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Luke_is_a_Foodie
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
    int n , x ;
    cin >> n >> x ;
     vector<int> a(n) ;
     vecInput(a) ;
     int markL = a[0] , markR = a[0] , cnt = 0 ;
     for(int i = 1 ; i < n ; i++)
    {
        int currL = a[i] , currR = a[i] ;
         markL = min(markL , currL) ;
        markR = max(markR , currR) ;
         if(markR - markL > 2*x)
        {
            cnt++ ;
             markL = currL ;
            markR = currR ;
        }
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