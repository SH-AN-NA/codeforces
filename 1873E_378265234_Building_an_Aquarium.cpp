// Codeforces Problem: 1873E - Building an Aquarium
// Submission ID: 378265234
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: E_Building_an_Aquarium
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
 bool check(ll mid, vector<ll> &heights, ll x) 
{
 ll units = 0;
 int n = heights.size(); 
 for (int i = 0; i < n; i++) 
 { 
  if (heights[i] < mid)  
   units += (mid - heights[i]);
   else break ;
   }
 return units <= x; 
}
void solve() {
    ll n , x ;
    cin >> n >> x ;
     vector<ll> a(n) ;
    vecInput(a) 
  sort(all(a)) ;
    ll si = 1, ei = 1e12, ans = -1 ;
 while (si <= ei) 
    { 
  ll mid = si + (ei - si) / 2;
   if (check(mid, a, x)) 
            { 
    ans = mid; 
    si = mid + 1; 
   } else {
    ei = mid - 1;
   }
  }
  cout << ans << endl;
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