// Codeforces Problem: 2128A - Recycling Center
// Submission ID: 376003067
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
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    ll n , c ;
    cin >> n >> c ; // n <=30
     vector<ll> a(n) ;
    vector<ll> incrmt ;
     int cnt = 0 ;
     for(ll &i : a) 
    {
        cin >> i ;
         if(log2((ld)c/i) <0)
            cnt++ ;
         else
            incrmt.push_back(log2((ld)c/i)) ;
     }
     sort(all(incrmt)) ;
     //destroy free at 0 and non free stays 
    int cntfree = 0 , currtime = 0 ;
     for(auto it : incrmt)
    {
        if(currtime <= it)
        {
            cntfree++ ;
            currtime++ ;
        }
    }
    cout << cnt + (incrmt.size()-cntfree) << '\n' ;
 }
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}