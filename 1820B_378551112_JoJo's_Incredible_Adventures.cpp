// Codeforces Problem: 1820B - JoJo's Incredible Adventures
// Submission ID: 378551112
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_JoJo_s_Incredible_Adventures
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
     string s ; cin >> s ;
    int n = s.size() ;
    int seglen = 0 , maxlen = 0 ;
    s += s ;
    bool nozero = true ;
    for(char c : s)
    {
        if(c=='1')
            seglen++ ;
                    else
        {
            nozero = false ;
            maxlen = max(maxlen , seglen) ;
            seglen = 0 ;
        }
    }
     maxlen = max(maxlen , seglen) ;
    maxlen = min(n , maxlen) ;
        if(nozero)
    {
        cout << 1LL*n * n << '\n' ;
        return ;
    }
     ll val = (maxlen + 1) / 2 ;
    cout << (val)*(maxlen + 1 - val) << '\n';
}
// 10
// 10 , 2*18 ,
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
 // 111111
//  111111
//   111111
//    111111
//     111111
//      111111