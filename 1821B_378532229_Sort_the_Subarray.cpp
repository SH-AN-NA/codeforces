// Codeforces Problem: 1821B - Sort the Subarray
// Submission ID: 378532229
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Sort_the_Subarray
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
    int n ; cin >> n ;
     vector<int> a(n) , b(n) ;
    vecInput(a) ;
    vecInput(b) ;
     int l = -1 , r = -1;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i]!= b[i])
        {
            if(l== -1)
                l = i ;
                        r = i ;
        }
     }
    while(l > 0 && b[l-1] <= b[l])
        l-- ;
     if(r == -1)
        r = n - 1 ;
    while(r < n-1 && b[r+1] >= b[r])
        r++ ;
     cout << l + 1 << " " << r + 1 << '\n' ;
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
      // for(int i = 1 ; i < l -1 ; i++)
    // {
    //     if(a[i-1]<=a[i])
    //     l = min(l,i) ;
    // }
    // for(int i = r -1 ; i < n-1 ; i++)
    // {
    //     if(a[i+1]>=a[i])
    //     r = max(r,i+1) ;
    // }