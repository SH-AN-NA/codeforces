// Codeforces Problem: 1679B - Stone Age Problem
// Submission ID: 379724423
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: B_Stone_Age_Problem
// Rating: Rating
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(t) (t).begin(), (t).end()
#define rall(t) (t).rbegin(), (t).rend()
#define sz(t) ((int)(t).size())
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
#define deb(t) cerr << #t << " = " << t << endl;
#else
#define deb(t)
#endif
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
 void solve() {
    int n , q ; 
    cin >> n >> q ;
    vector<int> a(n) ;
    ll tsum = 0 ;
    for0(i,n)
    {
        cin >> a[i] ;
        tsum += a[i] ;
    }
     int curr = 0 ;
    vector<bool> visited(n, true) ; /// elements can still contain derbis of t==2 if not changed
    while(q--)
    {
        int t ; cin >> t ;
        if(t == 1)
        {
            int i , x ;
            cin >> i >> x ;
            i-- ;
            if(!visited[i])
                tsum += x - curr ;
             else
                tsum += x - a[i] ;
             a[i] = x ;
            visited[i] = true ;
        }
        else if(t==2)
        {
            int x ;
            cin >> x ;
            tsum = 1LL*x*n ;
             curr = x ;
             fill(all(visited), false) ;
        }
        cout << tsum << '\n' ;
    }
}
 int main() {
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--)
    {
        solve();
    }
    return 0;
}