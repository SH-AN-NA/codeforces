#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name ==// none
// Problem: B_Alyona_and_a_Narrow_Fridge
// Rating: 1300
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
 
bool maxheight(vector<ll> a , int bottles , ll h) {
 
    ll maxi = 0 ;
    sort(a.begin() , a.begin() + bottles) ;
 
    for(int i = bottles - 1 ; i >= 0 ; ) {
        if(maxi + a[i] <= h) {
            maxi += a[i] ;
            i -= 2 ;
        }
        else {
            return false ;
        }
    }
    return true ;
}
 
void solve() {
    int n ;
    ll h , sol = 0 ;
    cin >> n >> h ;
    vector<ll> a(n) ;
    vecInput(a) ;
 
    int l = 0 , r = n;
    while(l <= r) {
        int mid = (l+r)/2 ;
 
        bool check = maxheight(a,mid,h) ;
        if(check) {
            l = mid + 1 ;
            sol = mid ;
        }
        else
            r = mid - 1 ;
    }
    cout << sol  << '
' ;
}
 
int main() {
    fast;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}