// Codeforces Problem: 1842B - Tenzing and Books
// Submission ID: 378314999
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Tenzing_and_Books
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
    int n , x ; 
    cin >> n >> x ;
     vector<ll> a(n) , b(n) , c(n) ;
    vecInput(a)
    vecInput(b)
    vecInput(c)
    int orr = 0 ;
    for(auto i : a)
        if((i | x) == x)
            orr |= i ;
        else
            break ;
     for(auto i : b)
        if((i | x) == x)
            orr |= i ;
        else
            break ;
     for(auto i : c)
        if((i | x) == x)
            orr |= i ;
        else
            break ;
         if(orr == x)
            YES
        else
            NO
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