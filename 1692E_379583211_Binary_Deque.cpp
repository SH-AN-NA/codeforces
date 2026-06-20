// Codeforces Problem: 1692E - Binary Deque
// Submission ID: 379583211
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: E_Binary_Deque
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
    int n , s ;
    cin >> n >> s ;
     vector<int> a(n) ;
    vecInput(a)
    vector<int> pfx(n) ;
     pfx[0] = a[0] ;
    for(int i = 1 ; i < n ; i++)
        pfx[i] = pfx[i-1] + a[i] ;
         if (pfx[n - 1] < s) 
    {
        cout << -1 << '\n';
        return;
    }
     int maxlen = 0 ;
    //sliding window 
     int l = 0 , currsum = 0 ;
     for(int r = 0 ; r < n ; r++)
    {
        currsum += a[r] ;
         while(currsum > s)
        {
            currsum -= a[l] ;
            l++ ;
        }
        if(currsum == s)
            maxlen = max(maxlen , r - l + 1) ;
    }
    cout << n - maxlen << '\n' ; 
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
      // upper bounf 
    // int maxlen = 0 ;
    // for0(i,n)
    // {
    //     int best = -1 ;
    //     int targetsum = s + (i > 0 ? pfx[i - 1] : 0);
     //     auto it = upper_bound(all(pfx), targetsum);
    //     if(it != pfx.begin()  && *(prev(it)) == targetsum)
    //         best = distance(pfx.begin(), prev(it)) ;
        //     maxlen = max(maxlen , best - i + 1) ;
    // }
    // cout << n - maxlen << '\n' ;