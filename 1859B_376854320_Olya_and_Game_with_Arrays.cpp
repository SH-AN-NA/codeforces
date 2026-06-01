// Codeforces Problem: 1859B - Olya and Game with Arrays
// Submission ID: 376854320
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round 1000
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
    ll sol = 0 ;
     int leastmini = 1e9 , leastmax = 1e9 ;
     for(int i = 0 ; i < n ; i++)
    {
        int m ; cin >> m ;
         int mini = 1e9 , mini2 = 1e9 ;
        for(int j = 0 ; j < m ; j++) 
        {
            int val ;
            cin >> val ;
            if(mini > val)
            {
                mini2 = mini ;
                mini = val ;
            }
            else if(val < mini2)
                mini2 = val ;
         }
           if(leastmini > mini)
            leastmini = mini ;
         if(leastmax > mini2)
            leastmax = mini2 ;
         sol += mini2 ;
                        }
     sol += leastmini - leastmax ;
    cout << sol << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}