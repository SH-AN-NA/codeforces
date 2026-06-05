// Codeforces Problem: 1567B - MEXor Mixup
// Submission ID: 377448336
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_MEXor_Mixup
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
 int getXOR(int n) 
{
    if (n % 4 == 0) 
        return n;
    if (n % 4 == 1) 
        return 1;
    if (n % 4 == 2) 
        return n + 1;
    return 0;
}
 void solve() {
    int a , b ;
    cin >> a >> b ;
    int xorr = 0 ;
    // for(int i = 1 ; i < a ; i++)
    // {
    //     xorr ^= i ;
    // }
    xorr = getXOR(a-1) ;
        if(xorr == b)
        cout << a << '\n' ;
     else if((xorr ^ a) == b)
        cout << a+2<< '\n' ;
     else if(xorr != b)
        cout << a + 1 << '\n' ;
 }
// a needs to be excluded
// all of elements less than a must present
// elemensts above a can be present
// so shortest len >= a
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}