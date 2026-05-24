// Codeforces Problem: 1666D - Deletive Editing
// Submission ID: 375898938
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
    string s, t;
    cin >> s >> t;
     vector<int> tfreq(26, 0);
    for (char c : t) 
    {
        tfreq[c - 'A']++;
    }
    int n = s.size() ;
    vector<bool> totake(s.size(),0) ;
     for(int i = n-1 ; i >= 0 ; i--)
    {
        if(tfreq[s[i] -'A']>0)
        {
            tfreq[s[i]-'A']--;
            totake[i] = true ;
        }
            }
     string sol = "" ;
    for(auto it = 0 ; it < n ; it++)
    {
        if(totake[it])
            sol += s[it] ;
    }
    if(sol != t)
        cout << "NO\n" ;
     else    cout << "YES\n" ;
  }
// determined
// deninmrt
// trmnined
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}