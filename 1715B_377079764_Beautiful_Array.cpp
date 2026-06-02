// Codeforces Problem: 1715B - Beautiful Array
// Submission ID: 377079764
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Beautiful_Array
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
#define NO cout << "-1" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    ll n , k ,b , s ;
    cin >> n >> k >> b >> s ;
     if( k*b > s || s > (k*b + n*(k-1))) NO 
     else 
    {
        cout <<  min( k-1 + k*b , s ) << " " ;
            s -= min(k*b + k - 1 , s) ; 
        for(int i = 1 ; i < n ; i++)
        {
            cout << min(s,k-1) << ' ' ;
            s -= min(s,k-1) ; 
        }
        cout << '\n' ;
    }
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
 // k*b <= ai<= k*(b+1)-1 
// n*k*b <= s <= n*(k*(b+1)-1 )