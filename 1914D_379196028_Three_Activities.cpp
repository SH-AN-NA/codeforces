// Codeforces Problem: 1914D - Three Activities
// Submission ID: 379196028
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: D_Three_Activities
// Rating: 1200
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
    vector<pair<int,int>> a(n) , b(n) , c(n) ;
     for0(i,n)
    {
        cin >> a[i].first ;
        a[i].second = i ;
    }
    for0(i,n)
    {
        cin >> b[i].first ;
        b[i].second = i ;
    }
    for0(i,n)
    {
        cin >> c[i].first ;
        c[i].second = i ;
    }
     sort(rall(a)) ;
    sort(rall(b)) ;
    sort(rall(c)) ;
     int sol = 0 ;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            for(int k = 0 ; k < 3 ; k++)
            {
                if(a[i].second == b[j].second || b[j].second == c[k].second || c[k].second == a[i].second ) 
                    continue ;
                 int curr = a[i].first + b[j].first + c[k].first ;
                sol = max(sol, curr) ;
            }
        }
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