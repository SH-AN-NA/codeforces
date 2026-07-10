#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: B_Move_and_Turn
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
 
void solve() {
    int n ; cin >> n ;
 
    int sol = 0 ;
    if(n%2) {
        int hmoves = n/2 ;
        int vmoves = (n+1)/2 ;
 
        sol += (hmoves+1)*(vmoves +1) ;
 
        hmoves = (n+1)/2 ;
        vmoves =  n/2 ;
 
        sol += (hmoves+1)*(vmoves +1) ;
 
    }
    else {
        int hmoves = n/2 ;
        int vmoves = (n)/2 ;
 
        sol += (hmoves+1)*(vmoves +1) ;
    }
 
    cout << sol << '
' ;
}
 
// n = 6 , 3 hor moves , 3 ver moves
// 0 ,1 , 2 , 3 4 moves
 
// n = 7 , 3hor 4 ver or 4hormov and 3 ver
// 0 1 2 3 4 5 , 0 1 2 3 4 
 
int main() {
    fast;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}