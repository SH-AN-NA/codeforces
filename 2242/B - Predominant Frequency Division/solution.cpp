#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: B_Predominant_Frequency_Division
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
    vector<int> a(n) ;
    vecInput(a)
 
    int cnt1 = 0 , cnt2 = 0 , cnt3 = 0 ;
    vector<int>mark1 ;
    vector<int>p12(n,0) ;
 
    for0(i,n) {
        if(a[i] == 1)
            cnt1++ ;
        else if(a[i] == 2)
            cnt2++ ;
        else cnt3++ ;
        
        if(cnt1*2 >= i+1)
            mark1.pb(i) ;
 
        p12[i] = cnt2 + cnt1 ;
 
    }
    if (mark1.empty()) {
        NO
        return;
    }
    vector<ll> f(n) ;
    for0(i,n) 
        f[i] = 2LL*p12[i] - i ;
 
    vector<ll> suffMax(n, LLONG_MIN) ;
    if (n-2 >= 0) suffMax[n-2] = f[n-2] ;
    for(int i = n-3 ; i >= 0 ; --i)
        suffMax[i] = max(suffMax[i+1], f[i]) ;
 
    bool ok = false ;
    for(auto end1 : mark1) {
        if (end1 + 1 > n - 2) continue ;   
        if (suffMax[end1+1] >= f[end1]) {
            ok = true ;
            break ;
        }
    }
    if(ok) YES
    else NO
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
// maximize 1 , maximise both 1 and 2 , 
 
 
        // if(cnt1*2 >= i+1) {
        //     if(mark1 == n) {
        //         mark1 = i ;
        //         p1one = cnt1 ;
        //         p1two = cnt2 ;
        //     }
        // }
            
 
        // if (mark1 != n && i > mark1) { 
        //     int remain = (i + 1) - (mark1 + 1) ;
        //     int rem12 = (cnt1 + cnt2) - (p1one + p1two) ; 
 
        //     if (rem12 * 2 >= remain) 
        //         mark2 = min(mark2, i);
            
        // }