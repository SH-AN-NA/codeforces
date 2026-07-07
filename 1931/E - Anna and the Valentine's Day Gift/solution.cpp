#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: E_Anna_and_the_Valentine_s_Day_Gift
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
 
void counter(int n , int & cnt0 , int & cnt) {
    bool lastzero = true ;
    while(n >= 1) {
        int rem = n % 10 ;
 
        if(rem == 0 && lastzero)
            cnt0 ++ ;
 
        else if(rem != 0)
            lastzero = 0 ;
 
        cnt++ ;
        n /= 10 ;
    }
}
 
void solve() {
    int n , m ;
    cin >> n >> m ;
 
    vector<int> a(n) ;
    int totaldigits = 0 ;
    vector<int> cnt0 ;
 
    for0(i,n) {
        cin >> a[i] ;
        int x = 0 ;
        counter(a[i] , x , totaldigits) ;
        cnt0.pb(x) ;
    }
 
    if(totaldigits <= m) {
        cout << "Anna
" ;
        return ;
    }
 
    sort(rall(cnt0)) ;
 
    int l = 0 ;
    for(int i = 0 ; i < n ; i++) {
        if(l < cnt0.size()) {
            totaldigits -= cnt0[l] ;
            l += 2 ;
        }
        else break ;
    }
 
    if(totaldigits <= m) {
        cout << "Anna
" ;
    }
    else
        cout << "Sasha
" ;
}
 
// understanding gameee
// sasha reduces elements
// anna doesnt have much of role
// moves - a , s ,.... a
// n moves anna , n-1 moves shasha
// sasha has to make m+1 digit number
 
 
// if sum digit cnt < m+1
// anna
 
// if cntunitzeroes in descending order
// cnt alternative reduce them from total cnt if < m+1
// anna else sasha
 
 
 
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}