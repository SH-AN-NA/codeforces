// Codeforces Problem: 1849B - Monsters
// Submission ID: 376859861
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
    int n , k ; cin >> n >> k ;
    vector<int> a(n);
    vector<pair<int,int>> killtime ;
     for(int i = 0 ; i < n ; i++) 
    {
        cin >> a[i] ;
        int rem = a[i]%k ;
        if(rem == 0) rem = k ;
         killtime.pb({-rem , i+1}) ;
    }
    sort(all(killtime)) ;
     for(auto it : killtime)
        cout << it.second << " " ;
     cout << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
 // 4 5 3 1 2 6
// 3 6 5 2 4 1