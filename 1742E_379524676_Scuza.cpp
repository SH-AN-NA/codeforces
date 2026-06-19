// Codeforces Problem: 1742E - Scuza
// Submission ID: 379524676
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: E_Scuza
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
#define for1(i, n) for(int i = 1; i < n; ++i)         // 1 to n
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
    int n , q ; cin >> n >> q ;
    vector<ll> a(n) , b(q) ;
    vector<ll> presum(n) , premax(n) ;
    vecInput(a)
    vecInput(b)
     presum[0] = premax[0] = a[0] ;
     for1(i,n) // 1 n-1
    {
        presum[i] = presum[i-1] + a[i] ;
        premax[i] = max(a[i] , premax[i-1]) ;
    }
         for(ll i : b)
    {
        ll sol = -1 ;
        // int l = 0 , r = n-1 , mid = 0 ;
        // while(l <= r)
        // {
            auto it = upper_bound(all(premax), i) ;
             sol = distance(premax.begin(),it) - 1;
             // mid = l + (r-l)/2 ;
            // if(i >= premax[mid])
            // {
            //     sol = mid ;
            //     l = mid + 1 ;
            // }
            // else 
            // {
            //     r = mid - 1 ;
            // }
         // }
        if(sol == -1)
            cout << 0 << ' ' ;
        else
            cout << presum[sol] << ' ' ;
    }
    cout << '\n' ;
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
 //  1 1 2 5
//  1 2 4 9