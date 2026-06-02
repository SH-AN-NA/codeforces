// Codeforces Problem: 1725B - Basketball Together
// Submission ID: 377042647
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Basketball_Together
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
    int n , k ;
    cin >> n >> k ;
     vector<int> a(n) , members ;
    vecInput(a) ;
     sort(all(a)) ;
     for(int i = n - 1 ; i >= 0 ; i--)
    {
        members.push_back(k / a[i] + 1) ;
    }
     int team = 0 , players = 0 ;
     for(auto it : members)
    {
        if(players + it <= n)
        {
            team ++ ;
            players += it ;
        }
    }
    cout << team << '\n' ;
 }
  void solve2() 
{
    int n , k ;
    cin >> n >> k ;
     vector<int> a(n) , members ;
    vecInput(a) ;
     sort(all(a)) ;
     int l = 0 , r = n-1 , team = 0 ;
     while(l<=r)
    {
        if(r-l >= k / a[r])
        {
            l += k / a[r] ;
            team++ ;
            r-- ;
        }
        else break ;
    }
     cout << team << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve2();
    }
    return 0;
}