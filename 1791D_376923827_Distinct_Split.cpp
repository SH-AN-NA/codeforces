// Codeforces Problem: 1791D - Distinct Split
// Submission ID: 376923827
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: Problem Name
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n ; cin >> n ;
    string s ; cin >> s ;
     set<char>uniq , uniqu;
     vector<int> pfx(n+1,0) , sfx(n+1,0) ;
    for(int i = 0 ; i < n ; i++)
    {
        uniq.insert(s[i]);
        pfx[i+1] = uniq.size() ;
    }
 ;
     for(int i = n-1 ; i >= 0 ; i--)
    {
        uniqu.insert(s[i]) ;
        sfx[i+1] = uniqu.size() ;
    }
      int sol = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        sol = max(sol, pfx[i]+sfx[i+1]) ;
    }
     cout << sol << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}