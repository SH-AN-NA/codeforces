// Codeforces Problem: 2228B - Remilia Plays Soku
// Submission ID: 374769401
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: Problem Name
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n , x1 ,x2 , k ;
    cin >> n >> x1 >> x2 >> k ;
     ll sol = min(abs(x2-x1), n - abs(x2-x1)) + k ;
     if(n<=3)
    cout << sol - k << '\n' ;
     else 
        cout << sol << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}