// Codeforces Problem: 1872D - Plus Minus Permutation
// Submission ID: 379210866
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: D_Plus_Minus_Permutation
// Rating: Rating
// =============================================================
 #define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 // Loops (0-n), (n-0), (1-n), (n-1)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define for0(i, n) for (int i = 0; i < n; ++i)   // 0 to n-1
#define forn(i, n) for (int i = n; i >= 0; --i)  // n down to 0
#define for1(i, n) for (int i = 1; i <= n; ++i)  // 1 to n
#define for1n(i, n) for (int i = n; i >= 1; --i) // n down to 1
 // Vector Helpers
#define vecInput(v)   \
    for (auto &i : v) \
        cin >> i;
#define vecOutput(v)        \
    for (const auto &i : v) \
        cout << i << ' ';   \
    cout << '\n';
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
 ll helper(ll k)
{
    return k*(k+1)/2 ;
}
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
     ll sol = 0 ,
    hcf = __gcd(x, y) ,
    lcm = (x*y)/hcf ;
        ll val1 = n / lcm ;
     sol = helper(n) - helper(n - n/x + val1) ;
    sol -= helper(n/y - val1) ;
     cout << sol << '\n';
 }// TC O(1) ;
// x y coprime
// x , 2x , 3x ... <n , n-1 , n-2 ...
// y , 2y , 3y ... < n - 1 , 2 , 3 ,4 ..
// xy < n ... xy cancels out
// sol = sum n - i  - sum i+1
 // x \ y
// sol = -y - 2y - .. <-(y/3)
 // y /x
// sol = x + 2x + until (y-1)/x . x ;
 // 7 2 3
// 7 + 6 - 1
// {7 12 1 11 5 6 4  }
 int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}