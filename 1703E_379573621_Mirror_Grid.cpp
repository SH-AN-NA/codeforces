// Codeforces Problem: 1703E - Mirror Grid
// Submission ID: 379573621
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: E_Mirror_Grid
// Rating: Rating
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 // Loops (0-n), (n-0), (1-n), (n-1)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define for0(i, n) for(int i = 0; i < n; ++i)          // 0 to n-1
#define forn(i, n) for(int i = n; i >= 0; --i)         // n down to 0
#define for1(i, n) for(int i = 1; i <= n; ++i)         // 1 to n
#define for1n(i, n) for(int i = n; i >= 1; --i)        // n down to 1
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 // Debugger (Runs locally with -DLOCAL flag)
#ifdef LOCAL
#define deb(x) cerr << #x << " = " << x << endl;
#else
#define deb(x)
#endif
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
 void solve() {
    int n ; cin >> n ;
    vector<string> v(n) ;
     for(auto &coloums : v)
    {
        cin >> coloums ;
    }
     // vector<int> choices ;
    ll sol = 0 ;
    for0(i,n/2)
    {
        for(int j = 0 ; j < (n + 1)/2 ; j++)
        {
            int cnt = (v[n - 1 - j][i] - '0') + (v[n - 1 - i][n - 1 - j] - '0')
                + (v[j][n - 1 - i] - '0') + (v[i][j] - '0') ;
             // choices.pb(min(cnt,4-cnt)) ;
            sol += (ll)(min(cnt,4-cnt)) ;
        }
    }
     // for(auto it : choices)
        cout << sol << '\n' ;
    // 6 4 2 
    // 1 3 5
    // t+1/2 *
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