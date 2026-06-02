// Codeforces Problem: 1765M - Minimum LCM
// Submission ID: 376969073
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
    if(n%2==0)
    {
        cout << n/2 << " " << n/2 << '\n' ;
            }
    else 
    {
        int sol = 1 ;
        for(int i = 3 ; i * i <= n ; i+=2)
        {
            if(n%i == 0)
            {
                sol =  n/i ;
                break ;
            }
        }
         cout << sol << " " << n - sol << '\n' ; 
    }
     }
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}