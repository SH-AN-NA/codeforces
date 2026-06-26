// Codeforces Problem: 1846E2 - Rudolf and Snowflakes (hard version)
// Submission ID: 380192720
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: E_2_Rudolf_and_Snowflakes_hard_version
// Rating: 1800
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
 unordered_set<ll> snow ;
void precomute () {
    for (ll k = 2; k <= 1000000; k++) 
    {
        ll current_sum = 1 + k + k * k ;
        ll power = k * k ;
         while(true) 
        {
            if (power > INF / k) break ; 
            power *= k ;
                        if (current_sum > INF - power) break ; 
            current_sum += power ;
                        snow.insert(current_sum) ;
        }
    }
}
bool check3layer(ll n) {
    ll low = 2, high = 1e9 ; 
        while (low <= high) 
    {
        ll mid = low + (high - low) / 2;
         if (mid > INF / mid) 
        {
            high = mid - 1;
            continue;
        }
                ll val = 1 + mid + mid * mid;
                if (val == n) 
            return true;
        else if (val > n)
            high = mid - 1;
        else 
            low = mid + 1;
            }
    return false;
}
void solve() {
    ll n ; cin >> n ;
     if(snow.count(n))
    {
        YES ;
        return ;
    }
    if(check3layer(n))
        YES
    else
        NO ;
    }
 int main() {
    fast;
    int t = 1;
    precomute() ;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}