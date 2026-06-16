// Codeforces Problem: 1669F - Eating Candies
// Submission ID: 379079851
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: F_Eating_Candies
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
    int n ; cin >>n ;
    vector<int>a(n) ;
    vecInput(a) ;
     // int pfx = 0 , sfx = 0 ;
     // int l = 0 , r = n-1 ;
     // int mark = 0 ;
    // while(l<=r)
    // {
    //     if(sfx >= pfx)
    //     {
    //         pfx += a[l] ;
    //         l++ ;
    //     }
    //     else
    //     {
    //         sfx += a[r] ;
    //         r-- ;
    //     }
    //     if(sfx==pfx)
    //     {
    //         mark = max(mark , l + (n-1-r)) ;
     //     }
          // }
    // cout << mark << '\n' ;
     vector<int> sfx(n+1,0);
    for0(i,n)
        sfx[i+1] = sfx[i] + a[n-1 - i] ;
     int maxi = 0 , alice = 0 ;
     for1(i,n)
    {
        alice += a[i-1] ;
         auto it = lower_bound(all(sfx),alice) ;
        if(it != sfx.end() && *it == alice)
        {
            int bob = distance(sfx.begin(),it) ;
             if(i + bob <= n)
                maxi = max(maxi , i + bob) ;
        }
    }
    cout << maxi << '\n' ;
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