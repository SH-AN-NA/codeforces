// Codeforces Problem: 2231B - Another Sorting Problem
// Submission ID: 375521014
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
    vector<int> a(n) ;
     for(int &i :a)
        cin >> i ;
    bool ok = true ;
    int k = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i]<a[i-1])
        {
            k = max(k,a[i-1]-a[i]) ;
        }
     }
     int lastval = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i]>=lastval)
            lastval = a[i] ;
         else if(a[i]<lastval && a[i]+k>=lastval)
            lastval = a[i]+k ;
         else
        {
            ok = false ;
            break ;
        }
    }
    if(ok) cout << "YES" <<'\n' ;
    else    cout << "NO" <<'\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}