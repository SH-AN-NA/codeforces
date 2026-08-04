#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: C_1_Marenol_easy_version
// Rating: Rating
// =============================================================
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define ld long double
using ull = unsigned long long;
 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
 
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
#define NO cout << "-1" << '
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
    string a , b ; cin >> a >> b ;
 
    vll cnt1a , cnt1b  , cnt0a , cnt0b ;
    bool cntposa = 0 , cntposb = 0 ;
 
    for(int i = 0 ; i < n ; i++) 
    {
        if(a[i] == '0')
            cnt0a.pb(i) ;
        else 
            cnt1a.pb(i) ;
        if(b[i] == '0')
            cnt0b.pb(i) ;
        else 
            cnt1b.pb(i) ;
 
    }
 
    // cntposa = (a.find("11") != string::npos || a.find("00") != string::npos) ;
    // cntposb = (b.find("11") != string::npos || b.find("00") != string::npos) ;
    
 
    // if(!(cntposb && cntposa)) {
    //     if(a!=b) {
    //         NO
    //         return ;
    //     }
    // }
    if(cnt0a.size() != cnt0b.size() || cnt1a.size() != cnt1b.size()) {
        NO
        return ;
    }
    // if(cnt0a%2 && cnt1a%2) {
    //     NO
    //     return ;
    // }
 
    vll even1a , odd1a  , even1b , odd1b ;
    for0(i, sz(cnt1a)) {
        if (cnt1a[i] % 2 == 0) even1a.pb(cnt1a[i]) ;
            else odd1a.pb(cnt1a[i]) ;
        if (cnt1b[i] % 2 == 0) even1b.pb(cnt1b[i]) ;
            else odd1b.pb(cnt1b[i]) ;
    }
 
    if (even1a.size() != even1b.size()) {
        NO ;
        return ;
    }
    ll ans = 0 ;
 
    for0(i,even1a.size()) {
        ans += abs(even1a[i] - even1b[i])/2 ;
    }
    for0(i,odd1a.size()) {
        ans += abs(odd1a[i] - odd1b[i])/2 ;
    }
    cout << ans << '
' ;
    // YES ;
 
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