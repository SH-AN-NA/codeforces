// Codeforces Problem: 1850E - Cardboard for Pictures
// Submission ID: 378471751
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: E_Cardboard_for_Pictures
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
 int sq(vector<ll> &side , ll c , ll w)
{
    ll area = 0 ;
    for(int i : side)
    {
        ll s = 1 + 2*w ;
         if(c/s < s) return -1 ;
         ll curr = (i + 2*w)*(i + 2*w) ;
         if(c - area < curr) 
            return -1 ;
         area += curr ;
  // importanttttttt stack overflow
            }
     if(area==c)
        return 1 ;
     else if(area < c)
        return 0 ;
     else return -1 ;
 }
 void solve() {
    int n ; cin >> n ;
    ll c ; cin >> c ;
     vector<ll> s(n) ;
    vecInput(s) 
     ll l = 0 , r = 1e9 ;
    ll mid = 0 ;
     while(l<=r)
    {
        mid = l + (r-l)/2 ;
         if(sq(s,c,mid) == 1)
            break ;
         else if(sq(s,c,mid) == 0)
            l = mid + 1 ;
         else
            r = mid - 1 ;
    }
     cout << mid << '\n' ;
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