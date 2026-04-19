// Codeforces Problem: 1343B - Balanced Array
// Submission ID: 371725739
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
    int n ;
    cin >> n ;
    if((n/2)%2==1)
        cout << "NO" << '\n' ;
     else
    {
        cout << "YES" << '\n' ;
        for(int i = 1 ; i <= n/2 ; i++)
        {
            cout << 2*i <<  " ";
        }
        for(int i = 1 ; i <= n/2 -1 ; i++)
        {
            cout << 2*i-1 << " " ;
        }
        cout << n + n/2 - 1 ;
        cout << '\n' ;
    }
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}