// Codeforces Problem: 1593B - Make it Divisible by 25
// Submission ID: 375941494
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
 int getdeletion(string s , string tgt )
{
    int n = s.size() ;
    int l = -1 , r = -1 ;
     for(int i = n-1 ; i >= 0 ; i--)
    {
        if(s[i]==tgt[1])
        {
            r = i ;
            break ;
        }
    }
     if(r==-1)
        return n ;
     for(int i = r-1 ; i >=0 ; i--)
    {
        if(s[i]==tgt[0])
        {
            l = i ;
            break ;
        }   
    }
    if(l==-1) return n ;
     return n - l - 2 ;
    // n - r - 1 + r - l - 1;
 }
  void solve() {
    string s ; cin >> s ;
    int sol = 1e9 ;
    sol = min(sol,getdeletion(s,"00"));
    sol = min(sol,getdeletion(s,"25"));
    sol = min(sol,getdeletion(s,"50"));
    sol = min(sol,getdeletion(s,"75"));
     cout << sol << '\n' ;
 }
// 25 divides multiple of 100 
// so last wo numbers should be 00 25 50 75
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}