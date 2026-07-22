#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: A_Supercentral_Point
// Rating: Rating
// =============================================================
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(first) (first).begin(), (first).end()
#define rall(first) (first).rbegin(), (first).rend()
#define sz(first) ((int)(first).size())
 
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
#define deb(first) cerr << #first << " = " << first << endl;
#else
#define deb(first)
#endif
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
// Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
 
void solve() {
    int n ; cin >> n ;
    vector<pair<int,int>> a(n) ;
 
    for0(i,n) {
        cin >> a[i].first >> a[i].second ;
    }
 
    int cnt = 0 ;
    for0(i,n) {
        bool right = false, left = false, upper = false, lower = false ;
 
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
 
            if (a[j].first > a[i].first && a[j].second == a[i].second) right = true;
            if (a[j].first < a[i].first && a[j].second == a[i].second) left = true;
            if (a[j].first == a[i].first && a[j].second > a[i].second) upper = true;
            if (a[j].first == a[i].first && a[j].second < a[i].second) lower = true;
        }
        if (right && left && upper && lower)
            cnt++ ;
    }
    
 
    cout << cnt << '
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