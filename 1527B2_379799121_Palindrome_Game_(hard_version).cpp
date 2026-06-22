// Codeforces Problem: 1527B2 - Palindrome Game (hard version)
// Submission ID: 379799121
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: B_2_Palindrome_Game_hard_version
// Rating: 1900
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
    int n ; cin >> n ;
    string s ; cin >> s ;
        int cnt0 = 0 , cnt1 = 0 ;
    bool is_palin = 1 ;
     for0(i,n)
    {
        if(s[i] == '0')
            cnt0++ ;
    }
    for0(i,n/2)
    {
        if(s[i] != s[n-i-1])
            is_palin = 0 ;
        if((s[i] ^ s[n-i-1]) == 1)
            cnt1++ ;
    }
    if(is_palin)
    {
        if(cnt0 == 0)
        {
            cout << "DRAW" << '\n' ;
            return ;
        }
        if(cnt0 == 1)
        {
            cout << "BOB" << '\n' ;
            return ;
        }
        if(cnt0 %2 == 1)
        {
            cout << "ALICE" << '\n' ;
        }
        else
            cout << "BOB" << '\n' ; 
                    return ;
    }
    if(cnt0 == 2 && (n % 2 != 0) && s[n / 2] == '0')
    {
        cout << "DRAW" << '\n' ;
        return ;    
    } else
        cout << "ALICE" << '\n' ;
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