#include <bits/stdc++.h>
#include <numeric>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: C_Spring
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
// Helper function to safely calculate LCM without overflow
ll get_lcm(ll a, ll b, ll limit) {
    if (a == 0 || b == 0) return limit + 1;
    ll g = std::__gcd(a, b);
 
    if (a / g > limit / b) return limit + 1; 
    return (a / g) * b;
}
 
void solve() {
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
 
    ll lcm_ab = get_lcm(a, b, m);
    ll lcm_bc = get_lcm(b, c, m);
    ll lcm_ac = get_lcm(a, c, m);
    ll lcm_abc = get_lcm(lcm_ab, c, m);
 
    ll count_a   = m / a;
    ll count_b   = m / b;
    ll count_c   = m / c;
    
    ll count_ab  = m / lcm_ab;
    ll count_bc  = m / lcm_bc;
    ll count_ac  = m / lcm_ac;
    
    ll count_abc = m / lcm_abc;
 
    ll only_a  = count_a - count_ab - count_ac + count_abc;
    ll only_b  = count_b - count_ab - count_bc + count_abc;
    ll only_c  = count_c - count_ac - count_bc + count_abc;
 
    ll ab_only = count_ab - count_abc;
    ll bc_only = count_bc - count_abc;
    ll ac_only = count_ac - count_abc;
 
    ll score_a = 6 * only_a + 3 * ab_only + 3 * ac_only + 2 * count_abc;
    ll score_b = 6 * only_b + 3 * ab_only + 3 * bc_only + 2 * count_abc;
    ll score_c = 6 * only_c + 3 * ac_only + 3 * bc_only + 2 * count_abc;
 
    cout << score_a << " " << score_b << " " << score_c << '
';
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