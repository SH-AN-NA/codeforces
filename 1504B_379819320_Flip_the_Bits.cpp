// Codeforces Problem: 1504B - Flip the Bits
// Submission ID: 379819320
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: B_Flip_the_Bits
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
 void solve() // check for baclanced indexs and then iterate over where flip is req
// if flipped done change parity of a use of bool
// and then if not balanced at that moment return no
{
    int n ; cin >> n ;
    string a , b ; 
    cin >> a >> b ;
        vector<int> bal(n);
    int curr = 0;
     for0(i, n)
    {
        curr += (a[i]=='1') - (a[i] == '0') ;
        bal[i] = curr ;
    }
     bool flipped = false ;
    forn(i, n-1)
    {
        char ch = a[i] ;
        if(flipped)
            ch = (ch == '0' ? '1' : '0') ;
                if(ch != b[i])
        {
            if(bal[i] != 0)
            {
                NO
                return ;
            }
            flipped = !flipped ;
        }
    }
    YES
  }
void solve2() // editoriAL // check for distrupiton 
// if any amd unbalanced return no
{
    int n ; cin >> n ;
    string a , b ; 
    cin >> a >> b ;
        a.pb('0') ;
    b.pb('0') ;
     int cnt = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cnt += (a[i]=='1') - (a[i] == '0') ;
         if((a[i] == b[i]) != (a[i+1] == b[i+1]) && cnt != 0)
        {
            NO
            return ;
        }
    }
    YES 
}
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve2();
    }
    return 0;
}
 // 11000 = a
// 00011 = b
// [00111] = a
// [110]11 = a
// [00]011 = a