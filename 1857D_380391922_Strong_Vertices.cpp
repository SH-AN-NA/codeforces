// Codeforces Problem: 1857D - Strong Vertices
// Submission ID: 380391922
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: D_Strong_Vertices
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
    vector<int> a(n) , b(n) ;
    vector<int> sol ;
    vecInput(a)
    vecInput(b)
     int maxdiff = INT32_MIN ;
    for0(i,n)
    {
        maxdiff = max(maxdiff , a[i]-b[i]) ;
        // cout << maxdiff << ' ' ;
            }
    // cout << '\n' ;
    // if(maxdiff == 0)
    // {
    //     cout << n << '\n' ;
    //     for1(i,n)
    //         cout << i << ' ' ;
    //     cout << '\n' ;
     //     return ;
    // }
    int cnt = 0 ;
    for0(i,n)
    {
        if(a[i]-b[i] == maxdiff) {
            cnt++ ;
            sol.pb(i+1) ;
        }
    }
     cout << cnt << '\n' ;
    vecOutput(sol)
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
 // FUNDA IS SIMPLE
//  au−av ≥ bu−bv
// INDIRECTLY I CAN CHECK AU >= BU
// IF TRUEEEE 
// THEN AU CAN DIRECTS TO SOME POINTS
// BUT WE NEED TO HAVE THE MAXIMUM DIRECTED AU
// SO MAXIMUM WOULD BE SAME AS AU - BU AS MAXXX
 