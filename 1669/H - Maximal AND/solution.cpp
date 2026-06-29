#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: H_Maximal_AND
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
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '
';
 
// Fast I/O Helpers
#define YES cout << "YES" << '
';
#define NO cout << "NO" << '
';
 
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
 
 
void bitadd(int n , vector<int> &bits) {
 
    for0(i,31)
    {
        bits[i] += (n&1) ;
        n >>= 1 ;
    }
}
void solve() {
    int n , k ;
    cin >> n >> k ;
 
    vector<int> a(n) ;
    vecInput(a)
    vector<int> bits(31,0);
    for0(i,n)
    {
        bitadd(a[i],bits) ;
    }
    ll sol = 0 ;
    forn(i,30)
    {
        if(bits[i] == n)
            sol += (1LL << i) ;
 
        else if(k >= n - bits[i])
        {
            k -= n - bits[i] ;
            sol += (1LL << i) ;
        }
    }
    // forn(i,30)
    //     if(k>=n && bits[i] == 0)
    //     {
    //         k -= n ;
    //         sol += pow(2,i) ;
    //     }
        
    cout << sol << '
' ;
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